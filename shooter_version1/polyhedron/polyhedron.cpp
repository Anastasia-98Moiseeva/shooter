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
        center = new float[3];
        for (int i = 0; i < 3; i++) {
            center[i] = param_figure[i + 1];
        }

        switch (num_figure) {
            case 0:
                vertex = getPyramidVertex(size, center[0], center[1], center[2]);
                color = getPyramidColor();
                num_points =  6 * 4 * 16;
                break;
            case 1:
                vertex = getCubeVertex(size, center[0], center[1], center[2]);
                color = getCubeColor();
                num_points = 12 * 3;
                break;
            case 2:
                vertex = getBipyramidVertex(size, center[0], center[1], center[2]);
                color = getBipyramidColor();
                num_points = 12 * 3;
                break;
            default:
                vertex = 0;
                color = 0;
        }

    }

    float* getCenter() {
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
    float* center;
    float num_points;
};