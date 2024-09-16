//
//  Textures.h
//  Raytracer
//
//  Created by Piotr Didyk on 19.08.21.
//

#ifndef Textures_h
#define Textures_h


#include "glm/glm.hpp"

glm::vec3 checkerboardTexture(glm::vec2 uv){

    /*
          
        Exercise 2 (3 points)
             
    */

    int n = 50;
    int f = int(floor(n * uv.x) + floor(n * uv.y)) % 2;

    switch(f) {
        case 0:  return glm::vec3(1.0); //black
        default: return glm::vec3(0.0); //white
    }

}
glm::vec3 rainbowTexture(glm::vec2 uv){

    /*
          
        Exercise 2 (5 points)
          
    */

    int n = 30;
    int f = int(n * (uv.x + uv.y)) % 3;
    
    switch(f) {
        case 0:  return glm::vec3(1, 0, 0); //red
        case 1:  return glm::vec3(0, 1, 0); //green
        default: return glm::vec3(0, 0, 1); //blue
    }
}

#endif /* Textures_h */
