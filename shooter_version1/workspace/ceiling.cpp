GLuint getTopWallVertex() {
    GLfloat g_vertex_buffer_data[] = {
            -10,  5,  15,
            -20,  5,  -8,
            20,  5,  -8,
            -10,  5,  15,
            20,  5,  -8,
            10,  5,  15,
    };

    GLuint vertexbuffer;
    glGenBuffers(1, &vertexbuffer);
    glBindBuffer(GL_ARRAY_BUFFER, vertexbuffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(g_vertex_buffer_data), g_vertex_buffer_data, GL_STATIC_DRAW);

    return vertexbuffer;
}

GLuint getTopWallColor() {
    static const GLfloat g_color_buffer_data[] = {
            0.45,  0.45,  0.45,
            0.45,  0.45,  0.45,
            0.45,  0.45,  0.45,
            0.45,  0.45,  0.45,
            0.45,  0.45,  0.45,
            0.45,  0.45,  0.45,
    };

    GLuint colorbuffer;
    glGenBuffers(1, &colorbuffer);
    glBindBuffer(GL_ARRAY_BUFFER, colorbuffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(g_color_buffer_data), g_color_buffer_data, GL_STATIC_DRAW);

    return colorbuffer;
}
