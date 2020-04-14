GLuint getFloorVertex(float k, float x, float y, float z) {
    GLfloat g_vertex_buffer_data[] = {
            0.822f,  0.569f,  0.201f,
            0.409f,  0.115f,  0.436f,
            0.427f,  0.483f,  0.644f,
    }

    GLuint vertexbuffer;
    glGenBuffers(1, &vertexbuffer);
    glBindBuffer(GL_ARRAY_BUFFER, vertexbuffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(g_vertex_buffer_data), g_vertex_buffer_data, GL_STATIC_DRAW);

    return vertexbuffer;
}

GLuint getFloorColor() {
    static const GLfloat g_color_buffer_data[] = {
            0.583f,  0.771f,  0.014f,
            0.609f,  0.115f,  0.436f,
            0.327f,  0.483f,  0.844f,
    }
}
