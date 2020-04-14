#include "sphere.cpp"

class ControllerSphere {
public:
    ControllerSphere(float* param_figure) {
        size = param_figure[0];
        center = new float[3];
        for (int i = 0; i < 3; i++) {
            center[i] = param_figure[i + 1];
        }
        vertex = getSphereVertex(size, center[0], center[1], center[2]);
        color = getSphereColor();
    }

    GLuint getSphereV() {
        return vertex;
    }

    GLuint getSphereC() {
        return color;
    }

    void changeSphere() {
        glDeleteBuffers(1, &vertex);
        center[2] += 0.035f;
        vertex = getSphereVertex(size, center[0], center[1], center[2]);
        return;
    }

private:
    GLuint vertex;
    GLuint color;
    float size;
    float* center;
};