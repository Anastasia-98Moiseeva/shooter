// Include standard headers
#include <cstdio>
#include <cstdlib>

// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <GLFW/glfw3.h>
GLFWwindow* window;

// Include GLM
#include <vector>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include "polyhedron/polyhedron.cpp"
#include "sphere/sphere.cpp"
#include "workspace/floor.cpp"
#include "workspace/leftWall.cpp"
#include "workspace/rightWall.cpp"
#include "shooter_version1/workspace/frontWall.cpp"
#include "shooter_version1/workspace/ceiling.cpp"
#include "sphere/controllerSphere.cpp"
#include <cmath>

using namespace glm;

#include <common/controls.hpp>
#include <common/shader.hpp>

std::vector<float> getRandomFigure(std::vector<glm::vec3> centers_polyhedrons) {
    //float params1[] = {0.7, -6.0, -1.0, 5.0};
    int num_figure = rand() % 3;
    bool collision = true;
    float x;
    float y;
    float z;
    while (collision) {
        x = static_cast <float> ((rand() % 20)) - 10.0;
        y = static_cast <float> ((rand() % 7)) - 3.0;
        z = static_cast <float> ((rand() % 5)) + 10.0;
        bool col = false;
        for (int i = 0; i < centers_polyhedrons.size(); i++) {
            glm::vec3 diff = glm::vec3(x - centers_polyhedrons[i].x,
                                       y - centers_polyhedrons[i].y,
                                       z - centers_polyhedrons[i].z);
            float distance = sqrt(pow(diff.x, 2) + pow(diff.y, 2) + pow(diff.z, 2));
            if (distance < 3) {
                col = true;
            }
        }
        collision = col;
    }
    std::vector<float> parameters_polyhedron;
    parameters_polyhedron.push_back(num_figure);
    switch (num_figure){
        case 0:
            parameters_polyhedron.push_back(0.7);
            break;
        case 1:
            parameters_polyhedron.push_back(0.5);
            break;
        case 2:
            parameters_polyhedron.push_back(0.5);
            break;
    }

    parameters_polyhedron.push_back(x);
    parameters_polyhedron.push_back(y);
    parameters_polyhedron.push_back(z);
    return parameters_polyhedron;
}

void drawFigure(float num_points, GLuint cubeVertex, GLuint cubeColor, GLuint MatrixID, GLuint programID, glm::mat4 MVP) {
// Use our shader
    glUseProgram(programID);

    // Send our transformation to the currently bound shader,
    // in the "MVP" uniform
    glUniformMatrix4fv(MatrixID, 1, GL_FALSE, &MVP[0][0]);

    // 1rst attribute buffer : vertices
    glEnableVertexAttribArray(0);
    glBindBuffer(GL_ARRAY_BUFFER, cubeVertex);
    glVertexAttribPointer(
            0,                  // attribute. No particular reason for 0, but must match the layout in the shader.
            3,                  // size
            GL_FLOAT,           // type
            GL_FALSE,           // normalized?
            0,                  // stride
            (void*)0            // array buffer offset
    );

    // 2nd attribute buffer : colors
    glEnableVertexAttribArray(1);
    glBindBuffer(GL_ARRAY_BUFFER, cubeColor);
    glVertexAttribPointer(
            1,                                // attribute. No particular reason for 1, but must match the layout in the shader.
            3,                                // size
            GL_FLOAT,                         // type
            GL_FALSE,                         // normalized?
            0,                                // stride
            (void*)0                          // array buffer offset
    );
    glDrawArrays(GL_TRIANGLES, 0, num_points); // 12*3 indices starting at 0 -> 12 triangles

}



int main( void )
{
	// Initialise GLFW
	if( !glfwInit() )
	{
		fprintf( stderr, "Failed to initialize GLFW\n" );
		getchar();
		return -1;
	}

	glfwWindowHint(GLFW_SAMPLES, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // To make MacOS happy; should not be needed
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// Open a window and create its OpenGL context
	window = glfwCreateWindow( 1024, 768, "Tutorial 04 - Colored Cube", NULL, NULL);
	if( window == NULL ){
		fprintf( stderr, "Failed to open GLFW window. If you have an Intel GPU, they are not 3.3 compatible. Try the 2.1 version of the tutorials.\n" );
		getchar();
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	// Initialize GLEW
	glewExperimental = true; // Needed for core profile
	if (glewInit() != GLEW_OK) {
		fprintf(stderr, "Failed to initialize GLEW\n");
		getchar();
		glfwTerminate();
		return -1;
	}

	// Ensure we can capture the escape key being pressed below
	glfwSetInputMode(window, GLFW_STICKY_KEYS, GL_TRUE);
    // Hide the mouse and enable unlimited mouvement
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);

    // Set the mouse at the center of the screen
    glfwPollEvents();
    glfwSetCursorPos(window, 1024/2, 768/2);

	// Dark blue background
	glClearColor(0.0f, 0.0f, 0.4f, 0.0f);

	// Enable depth test
	glEnable(GL_DEPTH_TEST);
	// Accept fragment if it closer to the camera than the former one
	glDepthFunc(GL_LESS);

	GLuint VertexArrayID;
	glGenVertexArrays(1, &VertexArrayID);
	glBindVertexArray(VertexArrayID);

	// Create and compile our GLSL program from the shaders
	GLuint programID = LoadShaders( "TransformVertexShader.vertexshader", "ColorFragmentShader.fragmentshader" );

	// Get a handle for our "MVP" uniform
	GLuint MatrixID = glGetUniformLocation(programID, "MVP");

	float params4[] = {0.3, 0.0, 0.0, -8.0};
    glm::vec3 direction = glm::vec3(0.0, 0.0, 0.15);

    std::vector<Polyhedron> polyhedrons;

    std::vector<ControllerSphere> spheres;

    std::vector<std::pair<GLuint, GLuint> > workspace;
    workspace.push_back(std::make_pair(getFloorVertex(), getFloorColor()));
    workspace.push_back(std::make_pair(getLeftWallVertex(), getLeftWallColor()));
    workspace.push_back(std::make_pair(getRightWallVertex(), getRightWallColor()));
    workspace.push_back(std::make_pair(getDistanceWallVertex(), getDistanceWallColor()));
    workspace.push_back(std::make_pair(getTopWallVertex(), getTopWallColor()));


    double startTime = glfwGetTime();
    double maxPolyhedron = 5;
    double lastSphere = glfwGetTime() - 10;
    float distance_sphere = 15.2;
    do{
        // Clear the screen
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        // Compute the MVP matrix from keyboard and mouse input
        computeMatricesFromInputs();
        glm::mat4 ProjectionMatrix = getProjectionMatrix();
        glm::mat4 ViewMatrix = getViewMatrix();
        glm::mat4 ModelMatrix = glm::mat4(1.0f);
        glm::mat4 MVP = ProjectionMatrix * ViewMatrix * ModelMatrix;

        double currentTime = glfwGetTime();
        if ((std::abs(startTime - currentTime) > 5 && polyhedrons.size() < maxPolyhedron) or (polyhedrons.size() < 2)) {
            std::vector<glm::vec3> centers_polyhedrons;
            for (int i = 0; i < polyhedrons.size(); i ++) {
                centers_polyhedrons.push_back(polyhedrons[i].getCenter());
            }
            std::vector<float> params = getRandomFigure(centers_polyhedrons);
            polyhedrons.push_back(Polyhedron(params));
            startTime = glfwGetTime();
        }


            for (int i = 0; i < polyhedrons.size(); i++) {
            drawFigure(polyhedrons[i].getNumPoints(), polyhedrons[i].getFigureVertex(), polyhedrons[i].getFigureColor(), MatrixID, programID, MVP);
		}

        for (int i = 0; i < workspace.size(); i++) {
            drawFigure(3*4, workspace[i].first, workspace[i].second, MatrixID, programID, MVP);
        }

        if (glfwGetKey( window, GLFW_KEY_ENTER ) == GLFW_PRESS && (std::abs(lastSphere - currentTime) > 1)) {
            glm::vec3 cameraPos = getCameraPosition();
            params4[1] = cameraPos.x;
            params4[2] = cameraPos.y - 2;
            params4[3] = cameraPos.z + 3;
            spheres.push_back(ControllerSphere(params4, direction));
            lastSphere = glfwGetTime();
        }

        for (int i = 0; i < spheres.size(); i++) {
            drawFigure(14700, spheres[i].getSphereV(), spheres[i].getSphereC(), MatrixID, programID, MVP);
            spheres[i].changeSphere();
        }

        std::vector<glm::vec3> centers_spheres;
        for (int i = 0; i < spheres.size(); i++) {
            centers_spheres.push_back(spheres[i].getCenter());
        }

        std::vector<int> num_del_polyhedrons;
        if (centers_spheres.size() > 0) {
            for (int i = 0; i < polyhedrons.size(); i++) {
                int num_sphere = polyhedrons[i].getSphereHittedTarget(spheres[0].getRadius(), centers_spheres);
                if (num_sphere == -1) {
                    continue;
                }
                spheres[num_sphere].clearMemory();
                spheres.erase(spheres.begin() + num_sphere);
                num_del_polyhedrons.push_back(i);
            }
            for (int i = 0; i < num_del_polyhedrons.size(); i++) {
                polyhedrons[num_del_polyhedrons[i]].clearMemory();
                polyhedrons.erase(polyhedrons.begin() + num_del_polyhedrons[i]);
            }
        }

        int del_num = 0;
        while (spheres.size() > 0 && spheres[del_num].getZ() > distance_sphere) {
            del_num++;
        }

        if (del_num > 0) {
            for (int j = 0; j < del_num; j++) {
                spheres[j].clearMemory();
            }
            spheres.erase(spheres.begin(), spheres.begin() + del_num);
        }



        glDisableVertexAttribArray(0);
        glDisableVertexAttribArray(1);

		// Swap buffers
		glfwSwapBuffers(window);
		glfwPollEvents();

	} // Check if the ESC key was pressed or the window was closed
	while( glfwGetKey(window, GLFW_KEY_ESCAPE ) != GLFW_PRESS &&
		   glfwWindowShouldClose(window) == 0 );

	for (int i = 0; i < workspace.size(); i++) {
        glDeleteBuffers(1, &workspace[i].first);
        glDeleteBuffers(1, &workspace[i].second);
	}
    for (int i = 0; i < spheres.size(); i++) {
        spheres[i].clearMemory();
    }
    for (int i = 0; i < polyhedrons.size(); i++) {
        polyhedrons[i].clearMemory();
    }

	glDeleteProgram(programID);
	glDeleteVertexArrays(1, &VertexArrayID);

	// Close OpenGL window and terminate GLFW
	glfwTerminate();

	return 0;
}

