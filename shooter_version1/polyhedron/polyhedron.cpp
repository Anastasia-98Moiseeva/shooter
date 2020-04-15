#include <GL/glew.h>
#include "../pyramid/pyramid.cpp"
#include "../cube/cube.cpp"
#include "../bipyramid/bipyramid.cpp"

class Polyhedron {
public:
    Polyhedron(std::vector<float> param_figure) {
        size = param_figure[1];
        center.x = param_figure[2];
        center.y = param_figure[3];
        center.z = param_figure[4];
        int num_figure = param_figure[0];
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

    int getSphereHittedTarget(float sphereRadius, std::vector<glm::vec3> sphereCenters){
        for (int i = 0; i < sphereCenters.size(); i++) {
            glm::vec3 diff = glm::vec3(center.x - sphereCenters[i].x,
                                           center.y - sphereCenters[i].y,
                                           center.z - sphereCenters[i].z);
            float distance = sqrt(pow(diff.x, 2) + pow(diff.y, 2) + pow(diff.z, 2));
            if (radius + sphereRadius >= distance){
                return i;
            }
            return -1;
        }
    }


//    GLuint get

private:
    GLuint vertex;
    GLuint color;
    float size;
    glm::vec3 center;
    float num_points;
    float radius;
};