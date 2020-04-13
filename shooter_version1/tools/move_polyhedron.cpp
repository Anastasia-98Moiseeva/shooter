#include <GL/glew.h>

class Tools {
    private:
        void move(GLfloat &array1, int size, float x, float y, float z);
        void resize(GLfloat &array1, int size, float k);

    public:
        void changeConfiguration(GLfloat &array1, int size, float k, float x, float y, float z);
};

void Tools::changeConfiguration(GLfloat &array1, int size, float k, float x, float y, float z) {
    resize(array1, size, k);
    move(array1, size, x, y, z);
}

void Tools::resize(GLfloat &array1, int size, float k) {
    GLfloat *array = &array1;
    for (int i = 0; i < size; i++) {
        array[i] *= k;
    }
}

void Tools::move(GLfloat &array1, int size, float x, float y, float z) {
    GLfloat *array = &array1;
    for (int i = 0; i < size; i++) {
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