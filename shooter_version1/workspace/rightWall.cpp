GLuint getRightWallVertex() {
    GLfloat g_vertex_buffer_data[] = {
            20,  -8,  0,
            10,  15,  0,
            20, -8, 5,
            10,  15,  0,
            20, -8, 5,
            10,  15,  5,
    };

    GLuint vertexbuffer;
    glGenBuffers(1, &vertexbuffer);
    glBindBuffer(GL_ARRAY_BUFFER, vertexbuffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(g_vertex_buffer_data), g_vertex_buffer_data, GL_STATIC_DRAW);

    return vertexbuffer;
}

GLuint getRightWallColor() {
    static const GLfloat g_color_buffer_data[] = {
            0.3,  0.3,  0.3,
            0.3,  0.3,  0.3,
            0.3,  0.3,  0.3,
            0.3,  0.3,  0.3,
            0.3,  0.3,  0.3,
            0.3,  0.3,  0.3,
    };

    GLuint colorbuffer;
    glGenBuffers(1, &colorbuffer);
    glBindBuffer(GL_ARRAY_BUFFER, colorbuffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(g_color_buffer_data), g_color_buffer_data, GL_STATIC_DRAW);

    return colorbuffer;
}
