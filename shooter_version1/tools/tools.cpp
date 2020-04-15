
#include <GL/glew.h>
#pragma once

class Tools {
private:
    void move(GLfloat &array1, int size, glm::vec3 offset);
    void resize(GLfloat &array1, int size, float k);

public:
    void changeConfiguration(GLfloat &array1, int size, float k, glm::vec3 offset);
};

void Tools::changeConfiguration(GLfloat &array1, int size, float k, glm::vec3 offset) {
    resize(array1, size, k);
    move(array1, size, offset);
}

void Tools::resize(GLfloat &array1, int size, float k) {
    GLfloat *array = &array1;
    for (int i = 0; i < size; i++) {
        array[i] *= k;
    }
}

void Tools::move(GLfloat &array1, int size, glm::vec3 offset) {
    GLfloat *array = &array1;
    for (int i = 0; i < size; i++) {
        switch (i % 3) {
            case 0:
                array[i] += offset.x;
                break;
            case 1:
                array[i] += offset.y;
                break;
            case 2:
                array[i] += offset.z;
                break;
        }
    }
}