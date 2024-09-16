  openrender: render/result.png
 	(xdg-open render/result.png | open render/result.png)
 FLAGS = -O3 -fopenmp

 # Recipes for rendering the still frame
 render/result.png: main.out render/
 	./main.out render/result.ppm && convert "render/result.ppm" "render/result.png"
 main.out: main.cpp 
 	g++ $(FLAGS) main.cpp -o main.out
