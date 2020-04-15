#include <GL/glew.h>
#include "../pyramid/pyramid.cpp"
#include "../cube/cube.cpp"
#include "../bipyramid/bipyramid.cpp"
// 0 - size
// 1,2,3 - koor
// 4 - num_points

class Polyhedron {
public:
    Polyhedron(int num_figure, float* param_figure) {
        size = param_figure[0];
        center.x = param_figure[1];
        center.y = param_figure[2];
        center.z = param_figure[3];

        switch (num_figure) {
            case 0:
                vertex = getPyramidVertex(size, center);
                color = getPyramidColor();
                num_points =  6 * 4 * 16;
                break;
            case 1:
                vertex = getCubeVertex(size, center);
                color = getCubeColor();
                num_points = 12 * 3;
                break;
            case 2:
                vertex = getBipyramidVertex(size, center);
                color = getBipyramidColor();
                num_points = 12 * 3;
                break;
            default:
                vertex = 0;
                color = 0;
        }

    }

    void clearMemory() {
        glDeleteBuffers(1, &vertex);
        glDeleteBuffers(1, &color);
    }

    glm::vec3 getCenter() {
        return center;
    }

    GLuint getFigureVertex() {
        return vertex;
    }

    GLuint getFigureColor() {
        return color;
    }

    float getNumPoints() {
        return num_points;
    }

//    GLuint get

private:
    GLuint vertex;
    GLuint color;
    float size;
    glm::vec3 center;
    float num_points;
};