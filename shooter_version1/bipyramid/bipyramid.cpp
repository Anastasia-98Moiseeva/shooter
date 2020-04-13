//
// Created by Никита on 13.04.2020.
//

#include "bipyramid.h"
#pragma once
using namespace glm;

GLuint Bipyramid::getBipyramidVertex(float x, float y, float z) {
    GLfloat g_vertex_buffer_data[] = {
            0, 2, 0,
            0, 0, -1,
            1, 0, 0,

            0, 2, 0,
            0, 0, 1,
            1, 0, 0,

            0, 2, 0,
            0, 0, 1,
            -1, 0, 0,

            0, 2, 0,
            0, 0, -1,
            -1, 0, 0,

            0, -2, 0,
            0, 0, -1,
            1, 0, 0,

            0, -2, 0,
            0, 0, 1,
            1, 0, 0,

            0, -2, 0,
            0, 0, 1,
            -1, 0, 0,

            0, -2, 0,
            0, 0, -1,
            -1, 0, 0,
    };


    move(*g_vertex_buffer_data, sizeof(g_vertex_buffer_data)/sizeof(g_vertex_buffer_data[0]), x, y, z);

    GLuint vertexbuffer;
    glGenBuffers(1, &vertexbuffer);
    glBindBuffer(GL_ARRAY_BUFFER, vertexbuffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(g_vertex_buffer_data), g_vertex_buffer_data, GL_STATIC_DRAW);

    return vertexbuffer;
}

GLuint Bipyramid::getBipyramidColor() {
    // One color for each vertex.
    static const GLfloat g_color_buffer_data[] = {
            0.822f,  0.569f,  0.201f,
            0.409f,  0.115f,  0.436f,
            0.427f,  0.483f,  0.644f,

            0.783f,  0.506f,  0.389f,
            0.395f,  0.548f,  0.759f,
            0.559f,  0.361f,  0.639f,

            0.683f,  0.596f,  0.289f,
            0.195f,  0.548f,  0.759f,
            0.559f,  0.281f,  0.639f,

            0.597f,  0.270f,  0.361f,
            0.559f,  0.436f,  0.630f,
            0.359f,  0.583f,  0.552f,

            0.597f,  0.770f,  0.361f,
            0.559f,  0.436f,  0.330f,
            0.359f,  0.583f,  0.152f,

            0.014f,  0.184f,  0.176f,
            0.771f,  0.328f,  0.570f,
            0.406f,  0.615f,  0.116f,

            0.676f,  0.777f,  0.133f,
            0.971f,  0.572f,  0.433f,
            0.140f,  0.416f,  0.489f,

            0.797f,  0.513f,  0.064f,
            0.745f,  0.719f,  0.192f,
            0.543f,  0.021f,  0.578f,

    };

    GLuint colorbuffer;
    glGenBuffers(1, &colorbuffer);
    glBindBuffer(GL_ARRAY_BUFFER, colorbuffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(g_color_buffer_data), g_color_buffer_data, GL_STATIC_DRAW);

    return colorbuffer;
}


