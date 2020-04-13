#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "../tools/move_polyhedron.cpp"

using namespace glm;


GLfloat getPyramidVertex(float x, float y, float z) {

    size = 0.25
    const int num_points = 6 * 4 * 16;

    GLfloat g_vertex_buffer_data[num_points * 3] = {
            3 * size, -size, -3 * size,
            5 * size, -size,  5 * size,
            3 * size, -size, 3 * size,
            5 * size, -size, -5 * size,
            5 * size, -size, 5 * size,
            3 * size, -size, -3 * size,

            5 * size, -size, 5 * size,
            5 * size, -size, -5 * size,
            5 * size, size, 5 * size,
            5 * size, size, 5 * size,
            5 * size, -size, -5 * size,
            5 * size, size, -5 * size,

            5 * size, size, 5 * size,
            5 * size, size, -5 * size,
            3 * size, size, 3 * size,
            3 * size, size, 3 * size,
            5 * size, size, -5 * size,
            3 * size, size, -3 * size,

            3 * size, size, -3 * size,
            3 * size, -size, 3 * size,
            3 * size, size, 3 * size,
            3 * size, -size, -3 * size,
            3 * size, -size, 3 * size,
            3 * size, size, -3 * size,


            -3 * size, -size, -3 * size,
            5 * size, -size, -5 * size,
            3 * size, -size, -3 * size,
            -5 * size, -size, -5 * size,
            5 * size, -size, -5 * size,
            -3 * size, -size, -3 * size,

            5 * size, -size, -5 * size,
            -5 * size, -size, -5 * size,
            5 * size, size, -5 * size,
            5 * size, size, -5 * size,
            -5 * size, -size, -5 * size,
            -5 * size, size, -5 * size,

            5 * size, size, -5 * size,
            -5 * size, size, -5 * size,
            3 * size, size, -3 * size,
            3 * size, size, -3 * size,
            -5 * size, size, -5 * size,
            -3 * size, size, -3 * size,

            -3 * size, size, -3 * size,
            3 * size, -size, -3 * size,
            3 * size, size, -3 * size,
            -3 * size, -size, -3 * size,
            3 * size, -size, -3 * size,
            -3 * size, size, -3 * size,


            -3 * size, -size, 3 * size,
            -5 * size, -size, -5 * size,
            -3 * size, -size, -3 * size,
            -5 * size, -size, 5 * size,
            -5 * size, -size, -5 * size,
            -3 * size, -size, 3 * size,

            -5 * size, -size, -5 * size,
            -5 * size, -size, 5 * size,
            -5 * size, size, -5 * size,
            -5 * size, size, -5 * size,
            -5 * size, -size, 5 * size,
            -5 * size, size, 5 * size,

            -5 * size, size, -5 * size,
            -5 * size, size, 5 * size,
            -3 * size, size, -3 * size,
            -3 * size, size, -3 * size,
            -5 * size, size, 5 * size,
            -3 * size, size, 3 * size,

            -3 * size, size, 3 * size,
            -3 * size, -size, -3 * size,
            -3 * size, size, -3 * size,
            -3 * size, -size, 3 * size,
            -3 * size, -size, -3 * size,
            -3 * size, size, 3 * size,


            3 * size, -size, 3 * size,
            -5 * size, -size, 5 * size,
            -3 * size, -size, 3 * size,
            5 * size, -size, 5 * size,
            -5 * size, -size, 5 * size,
            3 * size, -size, 3 * size,

            -5 * size, -size, 5 * size,
            5 * size, -size, 5 * size,
            -5 * size, size, 5 * size,
            -5 * size, size, 5 * size,
            5 * size, -size, 5 * size,
            5 * size, size, 5 * size,

            -5 * size, size, 5 * size,
            5 * size, size, 5 * size,
            -3 * size, size, 3 * size,
            -3 * size, size, 3 * size,
            5 * size, size, 5 * size,
            3 * size, size, 3 * size,

            3 * size, size, 3 * size,
            -3 * size, -size, 3 * size,
            -3 * size, size, 3 * size,
            3 * size, -size, 3 * size,
            -3 * size, -size, 3 * size,
            3 * size, size, 3 * size,

            3 * size, 3 * size, 3 * size,
            -3 * size, size, 3 * size,
            -3 * size, 3 * size, 3 * size,
            3 * size, size, 3 * size,
            -3 * size, size, 3 * size,
            3 * size, 3 * size, 3 * size,

            2 * size, 3 * size, size,
            -2 * size, size, size,
            -2 * size, 3 * size, size,
            2 * size, size, size,
            -2 * size, size, size,
            2 * size, 3 * size, size,

            -3 * size, size, 3 * size,
            3 * size, size, 3 * size,
            -2 * size, size, size,
            -2 * size, size, size,
            3 * size, size, 3 * size,
            2 * size, size, size,

            -3 * size, 3 * size, 3 * size,
            3 * size, 3 * size, 3 * size,
            -2 * size, 3 * size, size,
            -2 * size, 3 * size, size,
            3 * size, 3 * size, 3 * size,
            2 * size, 3 * size, size,

            -3 * size, 3 * size, -3 * size,
            3 * size, 3 * size, -3 * size,
            -2 * size, 3 * size, -size,
            -2 * size, 3 * size, -size,
            3 * size, 3 * size, -3 * size,
            2 * size, 3 * size, -size,

            3 * size, 3 * size, -3 * size,
            -3 * size, size, -3 * size,
            -3 * size, 3 * size, -3 * size,
            3 * size, size, -3 * size,
            -3 * size, size, -3 * size,
            3 * size, 3 * size, -3 * size,

            2 * size, 3 * size, -size,
            -2 * size, size, -size,
            -2 * size, 3 * size, -size,
            2 * size, size, -size,
            -2 * size, size, -size,
            2 * size, 3 * size, -size,

            -3 * size, size, -3 * size,
            3 * size, size, -3 * size,
            -2 * size, size, -size,
            -2 * size, size, -size,
            3 * size, size, -3 * size,
            2 * size, size, -size,

            -2 * size, size, -size,
            2 * size, size, -size,
            -2 * size, size, size,
            -2 * size, size, size,
            2 * size, size, -size,
            2 * size, size, size,

            -3 * size, size, -3 * size,
            -2 * size, size, size,
            -3 * size, size, 3 * size,
            -3 * size, size, -3 * size,
            -2 * size, size, -size,
            -2 * size, size, size,

            3 * size, size, -3 * size,
            2 * size, size, size,
            3 * size, size, 3 * size,
            3 * size, size, -3 * size,
            2 * size, size, -size,
            2 * size, size, size,

            -3 * size, 3 * size, -3 * size,
            -2 * size, 3 * size, size,
            -3 * size, 3 * size, 3 * size,
            -3 * size, 3 * size, -3 * size,
            -2 * size, 3 * size, -size,
            -2 * size, 3 * size, size,

            3 * size, 3 * size, -3 * size,
            2 * size, 3 * size, size,
            3 * size, 3 * size, 3 * size,
            3 * size, 3 * size, -3 * size,
            2 * size, 3 * size, -size,
            2 * size, 3 * size, size,

            3 * size, size, 3 * size,
            3 * size, size, -3 * size,
            3 * size, 3 * size, 3 * size,
            3 * size, 3 * size, 3 * size,
            3 * size, size, -3 * size,
            3 * size, 3 * size, -3 * size,

            -3 * size, size, 3 * size,
            -3 * size, size, -3 * size,
            -3 * size, 3 * size, 3 * size,
            -3 * size, 3 * size, 3 * size,
            -3 * size, size, -3 * size,
            -3 * size, 3 * size, -3 * size,

            -2 * size, size, size,
            -2 * size, size, -size,
            -2 * size, 3 * size, size,
            -2 * size, 3 * size, size,
            -2 * size, size, -size,
            -2 * size, 3 * size, -size,

            2 * size, size, size,
            2 * size, size, -size,
            2 * size, 3 * size, size,
            2 * size, 3 * size, size,
            2 * size, size, -size,
            2 * size, 3 * size, -size,

            -size, 3 * size, size,
            -size, 3 * size, -size,
            -size, 5 * size, size,
            -size, 5 * size, size,
            -size, 3 * size, -size,
            -size, 5 * size, -size,

            size, 3 * size, size,
            size, 3 * size, -size,
            size, 5 * size, size,
            size, 5 * size, size,
            size, 3 * size, -size,
            size, 5 * size, -size,


            size, 5 * size, -size,
            -size, 5 * size, size,
            size, 5 * size, size,
            size, 5 * size, -size,
            -size, 5 * size, -size,
            -size, 5 * size, size,

            size, 3 * size, -size,
            -size, 3 * size, size,
            size, 3 * size, size,
            size, 3 * size, -size,
            -size, 3 * size, -size,
            -size, 3 * size, size,

            size, 3 * size, -size,
            2 * size, 3 * size, size,
            size, 3 * size, size,
            size, 3 * size, -size,
            2 * size, 3 * size, -size,
            2 * size, 3 * size, size,

            -size, 3 * size, -size,
            -2 * size, 3 * size, size,
            -size, 3 * size, size,
            -size, 3 * size, -size,
            -2 * size, 3 * size, -size,
            -2 * size, 3 * size, size,

            size, 5 * size, -size,
            -size, 3 * size, -size,
            -size, 5 * size, -size,
            size, 3 * size, -size,
            -size, 3 * size, -size,
            size, 5 * size, -size,

            size, 5 * size, size,
            -size, 3 * size, size,
            -size, 5 * size, size,
            size, 3 * size, size,
            -size, 3 * size, size,
            size, 5 * size, size,
    };

    move(g_vertex_buffer_data, x, y, z);

    return g_vertex_buffer_data;
}

void getPyramidVertex() {
    // One color for each vertex.
    const int num_points = 6 * 4 * 16;
    static GLfloat g_color_buffer_data[num_points * 3] = { 0.0f };

    // fill with rainbow
    int n_points = num_points;
    float step = 1.0f / n_points;
    for (int i = 0; i < n_points; i++) {
        for (int k = 0; k < 3; k++) {
            float angle = 14.0f * (i * step - k / 3.0f);
            float color = (1.0f + cos(angle)) * 2 * sizef;
            g_color_buffer_data[3 * i + k] = color;
        }
    }
    return g_color_buffer_data;
}

