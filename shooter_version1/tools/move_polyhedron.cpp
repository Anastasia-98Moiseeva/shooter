#include <stdio.h>
#include <stdlib.h>

// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <GLFW/glfw3.h>

// Include GLM
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
using namespace glm;

#include <common/shader.hpp>

void move(GLfloat array[], float x, float y, float z){
        for (int i = 0; i < sizeof(array); i++) {
            switch (i % 3) {
                case 0:
                    array[i] += x;
                    break;
                case 1:
                    array[i] += y;
                    break;
                case 2:
                    array[i] += z;
                    break;
        }
    }
}