#include "sphere.cpp"

class ControllerSphere {
public:
    ControllerSphere(float* param_figure, glm::vec3& offsetStart) {
        size = param_figure[0];
        center = glm::vec3(0, 0, 0);
        offset = glm::vec3(0, 0, 0);
        center.x = param_figure[1];
        center.y = param_figure[2];
        center.z = param_figure[3];
        offset = offsetStart;
        vertex = getSphereVertex(size,  center);
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
        center += offset;
        vertex = getSphereVertex(size, center);
        return;
    }

private:
    GLuint vertex;
    GLuint color;
    float size;
    glm::vec3 center;
    glm::vec3 offset;
};