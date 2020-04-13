#include <GL/glew.h>

class Polyhedron {
public:
    Polyhedron(GLuint cubeVertex, GLuint cubeColor, float* center, int num_points) {
        this->center = center;
        this->cubeVertex = cubeVertex;
        this->cubeColor = cubeColor;
        this->num_points = num_points;
    }

    float* getCenter() {
        return center;
    }

    GLuint getCubeVertex() {
        return cubeVertex;
    }

    GLuint getCubeColor() {
        return cubeColor;
    }

    int getNumPoints() {
        return num_points;
    }

//    GLuint get

private:
    GLuint cubeVertex;
    GLuint cubeColor;
    float* center;
    int num_points;
};