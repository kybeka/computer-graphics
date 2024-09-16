#!/bin/bash
 
# Create a folder to store all the images
mkdir render 
# Creates folder for frames
mkdir render/frames 
# Deletes old frames
rm -r render/frames/* 

# compile 
g++ ex4.cpp

# run the program and convert rendered images to jpg
for i in {00..120}
do
  ./a.out "render/frames/frame${i}.ppm" ${i}
done


for i in {00..120}
do
 ffmpeg -y -i "render/frames/frame${i}.ppm" "render/frames/frame${i}.jpg"
done



# render mp4 video from all images
ffmpeg -y -framerate 60 -pattern_type glob -i 'render/frames/*.jpg' -c:v libx264 -pix_fmt yuv420p render/result.mp4

# render gif animation from all images
ffmpeg -y -framerate 60 -pattern_type glob -i 'render/frames/*.jpg' -loop 0 render/result.gif

#rm -r render/frames
