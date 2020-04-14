// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <GLFW/glfw3.h>
#include "shooter_version1/tools/tools.cpp"

// Include GLM
#include <glm/glm.hpp>
using namespace glm;

const int N_PHI = 50;
const int N_PSI = 50;
const float PI = atan2(0., -1.);

GLuint getSphereVertex(float k, float x, float y, float z) {

    glm::vec3 vertices[N_PSI][N_PHI];

    for (int j = 1; j < N_PSI; ++j) {
        for (int i = 0; i < N_PHI; ++i) {
            float phi = i * 2 * PI / N_PHI;
            float psi = j * PI / N_PSI;
            vertices[j][i] = glm::vec3(sin(psi) * cos(phi), sin(psi) * sin(phi), cos(psi));
        }
    }

    glm::vec3 north_pole = vec3(0., 0., 1.);
    glm::vec3 south_pole = vec3(0., 0., -1.);

    GLfloat g_vertex_buffer_data[2 * N_PSI * N_PHI * 9];

    int cur_idx = 0;

    for (int i = 0; i < N_PHI; ++i) {
        g_vertex_buffer_data[cur_idx++] = north_pole.x;
        g_vertex_buffer_data[cur_idx++] = north_pole.y;
        g_vertex_buffer_data[cur_idx++] = north_pole.z;

        g_vertex_buffer_data[cur_idx++] = vertices[1][i].x;
        g_vertex_buffer_data[cur_idx++] = vertices[1][i].y;
        g_vertex_buffer_data[cur_idx++] = vertices[1][i].z;

        g_vertex_buffer_data[cur_idx++] = vertices[1][(i + 1) % N_PHI].x;
        g_vertex_buffer_data[cur_idx++] = vertices[1][(i + 1) % N_PHI].y;
        g_vertex_buffer_data[cur_idx++] = vertices[1][(i + 1) % N_PHI].z;
    }

    for (int i = 0; i < N_PHI; ++i) {
        g_vertex_buffer_data[cur_idx++] = south_pole.x;
        g_vertex_buffer_data[cur_idx++] = south_pole.y;
        g_vertex_buffer_data[cur_idx++] = south_pole.z;

        g_vertex_buffer_data[cur_idx++] = vertices[N_PSI - 1][i].x;
        g_vertex_buffer_data[cur_idx++] = vertices[N_PSI - 1][i].y;
        g_vertex_buffer_data[cur_idx++] = vertices[N_PSI - 1][i].z;

        g_vertex_buffer_data[cur_idx++] = vertices[N_PSI - 1][(i + 1) % N_PHI].x;
        g_vertex_buffer_data[cur_idx++] = vertices[N_PSI - 1][(i + 1) % N_PHI].y;
        g_vertex_buffer_data[cur_idx++] = vertices[N_PSI - 1][(i + 1) % N_PHI].z;
    }

    for (int j = 1; j < N_PSI - 1; ++j) {
        for (int i = 0; i < N_PHI; ++i) {
            g_vertex_buffer_data[cur_idx++] = vertices[j][i].x;
            g_vertex_buffer_data[cur_idx++] = vertices[j][i].y;
            g_vertex_buffer_data[cur_idx++] = vertices[j][i].z;

            g_vertex_buffer_data[cur_idx++] = vertices[j + 1][i].x;
            g_vertex_buffer_data[cur_idx++] = vertices[j + 1][i].y;
            g_vertex_buffer_data[cur_idx++] = vertices[j + 1][i].z;

            g_vertex_buffer_data[cur_idx++] = vertices[j + 1][(i + 1) % N_PHI].x;
            g_vertex_buffer_data[cur_idx++] = vertices[j + 1][(i + 1) % N_PHI].y;
            g_vertex_buffer_data[cur_idx++] = vertices[j + 1][(i + 1) % N_PHI].z;

            g_vertex_buffer_data[cur_idx++] = vertices[j][i].x;
            g_vertex_buffer_data[cur_idx++] = vertices[j][i].y;
            g_vertex_buffer_data[cur_idx++] = vertices[j][i].z;

            g_vertex_buffer_data[cur_idx++] = vertices[j + 1][(i + 1) % N_PHI].x;
            g_vertex_buffer_data[cur_idx++] = vertices[j + 1][(i + 1) % N_PHI].y;
            g_vertex_buffer_data[cur_idx++] = vertices[j + 1][(i + 1) % N_PHI].z;

            g_vertex_buffer_data[cur_idx++] = vertices[j][(i + 1) % N_PHI].x;
            g_vertex_buffer_data[cur_idx++] = vertices[j][(i + 1) % N_PHI].y;
            g_vertex_buffer_data[cur_idx++] = vertices[j][(i + 1) % N_PHI].z;

        }
    }

    Tools tools = Tools();
    tools.changeConfiguration(*g_vertex_buffer_data, (sizeof(g_vertex_buffer_data)) / (sizeof(g_vertex_buffer_data[0])), k, x, y, z);

    GLuint vertexbuffer;
    glGenBuffers(1, &vertexbuffer);
    glBindBuffer(GL_ARRAY_BUFFER, vertexbuffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(g_vertex_buffer_data), g_vertex_buffer_data, GL_STATIC_DRAW);

    return vertexbuffer;
}

GLuint getSphereColor() {
    glm::vec3 vertices[N_PSI][N_PHI];

    for (int j = 1; j < N_PSI; ++j) {
        for (int i = 0; i < N_PHI; ++i) {
            float phi = i * 2 * PI / N_PHI;
            float psi = j * PI / N_PSI;
            vertices[j][i] = glm::vec3(sin(psi) * cos(phi), sin(psi) * sin(phi), cos(psi));
        }
    }

    glm::vec3 north_pole = vec3(0., 0., 1.);
    glm::vec3 south_pole = vec3(0., 0., -1.);

    GLfloat g_color_buffer_data[2 * N_PSI * N_PHI * 9];

    int cur_idx = 0;

    for (int i = 0; i < sizeof(g_color_buffer_data) / sizeof(g_color_buffer_data[0]); i++){
        switch (i%3){
            case 0:
                g_color_buffer_data[i] = 0.583f;
                break;
            case 1:
                g_color_buffer_data[i] =  0.771f;
                break;
            case 2:
                g_color_buffer_data[i] =  0.014f;
                break;
        }
    }

    /*for (int i = 0; i < N_PHI; ++i) {
        g_color_buffer_data[cur_idx] = north_pole.x;
        g_color_buffer_data[cur_idx] = north_pole.y;
        g_color_buffer_data[cur_idx] = north_pole.z;

        g_color_buffer_data[cur_idx] = vertices[1][i].x;
        g_color_buffer_data[cur_idx] = vertices[1][i].y;
        g_color_buffer_data[cur_idx] = vertices[1][i].z;

        g_color_buffer_data[cur_idx] = vertices[1][(i + 1) % N_PHI].x;
        g_color_buffer_data[cur_idx] = vertices[1][(i + 1) % N_PHI].y;
        g_color_buffer_data[cur_idx] = vertices[1][(i + 1) % N_PHI].z;
    }

    for (int i = 0; i < N_PHI; ++i) {
        g_color_buffer_data[cur_idx] = south_pole.x;
        g_color_buffer_data[cur_idx] = south_pole.y;
        g_color_buffer_data[cur_idx] = south_pole.z;

        g_color_buffer_data[cur_idx] = vertices[N_PSI - 1][i].x;
        g_color_buffer_data[cur_idx] = vertices[N_PSI - 1][i].y;
        g_color_buffer_data[cur_idx] = vertices[N_PSI - 1][i].z;

        g_color_buffer_data[cur_idx] = vertices[N_PSI - 1][(i + 1) % N_PHI].x;
        g_color_buffer_data[cur_idx] = vertices[N_PSI - 1][(i + 1) % N_PHI].y;
        g_color_buffer_data[cur_idx] = vertices[N_PSI - 1][(i + 1) % N_PHI].z;
    }

    for (int j = 1; j < N_PSI - 1; ++j) {
        for (int i = 0; i < N_PHI; ++i) {
            g_color_buffer_data[cur_idx] = vertices[j][i].x;
            g_color_buffer_data[cur_idx] = vertices[j][i].y;
            g_color_buffer_data[cur_idx] = vertices[j][i].z;

            g_color_buffer_data[cur_idx] = vertices[j + 1][i].x;
            g_color_buffer_data[cur_idx] = vertices[j + 1][i].y;
            g_color_buffer_data[cur_idx] = vertices[j + 1][i].z;

            g_color_buffer_data[cur_idx] = vertices[j + 1][(i + 1) % N_PHI].x;
            g_color_buffer_data[cur_idx] = vertices[j + 1][(i + 1) % N_PHI].y;
            g_color_buffer_data[cur_idx] = vertices[j + 1][(i + 1) % N_PHI].z;

            g_color_buffer_data[cur_idx] = vertices[j][i].x;
            g_color_buffer_data[cur_idx] = vertices[j][i].y;
            g_color_buffer_data[cur_idx] = vertices[j][i].z;

            g_color_buffer_data[cur_idx] = vertices[j + 1][(i + 1) % N_PHI].x;
            g_color_buffer_data[cur_idx] = vertices[j + 1][(i + 1) % N_PHI].y;
            g_color_buffer_data[cur_idx] = vertices[j + 1][(i + 1) % N_PHI].z;

            g_color_buffer_data[cur_idx] = vertices[j][(i + 1) % N_PHI].x;
            g_color_buffer_data[cur_idx] = vertices[j][(i + 1) % N_PHI].y;
            g_color_buffer_data[cur_idx] = vertices[j][(i + 1) % N_PHI].z;

        }
    }*/

    //normalize colors
    for (int i = 0; i < cur_idx; ++i) {
        g_color_buffer_data[i] += 1;
        g_color_buffer_data[i] /= 2.;
    }

    GLuint colorbuffer;
    glGenBuffers(1, &colorbuffer);
    glBindBuffer(GL_ARRAY_BUFFER, colorbuffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(g_color_buffer_data), g_color_buffer_data, GL_STATIC_DRAW);

    return colorbuffer;
}


