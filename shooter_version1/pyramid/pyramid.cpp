#include <math.h>
#include <GL/glew.h>
#include "shooter_version1/tools/tools.cpp"
using namespace glm;


GLfloat getPyramidVertex(float k, glm::vec3 offset) {

    float size = 0.25;
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

    Tools tools = Tools();
    tools.changeConfiguration(*g_vertex_buffer_data, (sizeof(g_vertex_buffer_data)) / (sizeof(g_vertex_buffer_data[0])), k, offset);


    GLuint vertexbuffer;
    glGenBuffers(1, &vertexbuffer);
    glBindBuffer(GL_ARRAY_BUFFER, vertexbuffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(g_vertex_buffer_data), g_vertex_buffer_data, GL_STATIC_DRAW);
    return vertexbuffer;
}

GLfloat getPyramidColor() {
    // One color for each vertex.
    const int num_points = 6 * 4 * 16;
    static GLfloat g_color_buffer_data[num_points * 3] = { 0.0f };

    // fill with rainbow
    int n_points = num_points;
    float step = 1.0f / n_points;
    for (int i = 0; i < n_points; i++) {
        for (int k = 0; k < 3; k++) {
            float angle = 50.0f * (i * step - k / 3.0f);
            float color = (1.0f + cos(angle)) * 2 * 0.5f;
            g_color_buffer_data[3 * i + k] = color;
        }
    }

    GLuint colorbuffer;
    glGenBuffers(1, &colorbuffer);
    glBindBuffer(GL_ARRAY_BUFFER, colorbuffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(g_color_buffer_data), g_color_buffer_data, GL_STATIC_DRAW);

    return colorbuffer;
}

