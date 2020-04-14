// Include standard headers
#include <cstdio>
#include <cstdlib>

// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <GLFW/glfw3.h>
GLFWwindow* window;

// Include GLM
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include "polyhedron/polyhedron.cpp"
#include "sphere/sphere.cpp"
#include "workspace/floor.cpp"
#include "workspace/leftWall.cpp"
#include "workspace/rightWall.cpp"
#include "shooter_version1/workspace/frontWall.cpp"
#include "shooter_version1/workspace/ceiling.cpp"


using namespace glm;

#include <common/shader.hpp>
#include <vector>

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

	// Projection matrix : 45? Field of View, 4:3 ratio, display range : 0.1 unit <-> 100 units
	glm::mat4 Projection = glm::perspective(glm::radians(45.0f), 4.0f / 3.0f, 0.1f, 100.0f);
	// Camera matrix
	glm::mat4 View       = glm::lookAt(
								glm::vec3(0,1,-8), // Camera is at (4,3,-3), in World Space
								glm::vec3(0,0,0), // and looks at the origin
								glm::vec3(0,1,0)  // Head is up (set to 0,-1,0 to look upside-down)
						   );
	// Model matrix : an identity matrix (model will be at the origin)
	glm::mat4 Model      = glm::mat4(1.0f);
	// Our ModelViewProjection : multiplication of our 3 matrices
	glm::mat4 MVP        = Projection * View * Model; // Remember, matrix multiplication is the other way around


    float params1[] = {0.3, -3.0, 0.0, 1.0};
    float params2[] = {0.3, 3.0, 0.0, 1.0};
    float params3[] = {0.3, 0.0, 0.0, 1.0};

    std::vector<Polyhedron> polyhedrons;
    polyhedrons.push_back(Polyhedron(0, params1));
    polyhedrons.push_back(Polyhedron(1, params2));
    polyhedrons.push_back(Polyhedron(2, params3));

    float dx = 3;
    float dy = 0;
    float dz = 0;

    GLuint sphereVertex = getSphereVertex(0.1, dx, dy, dz);
    GLuint sphereColor = getSphereColor();


    std::vector<std::pair<GLuint, GLuint> > workspace;
    //workspace.push_back(std::make_pair(getFloorVertex(), getFloorColor()));
    workspace.push_back(std::make_pair(getLeftWallVertex(), getLeftWallColor()));
    workspace.push_back(std::make_pair(getRightWallVertex(), getRightWallColor()));
    workspace.push_back(std::make_pair(getDistanceWallVertex(), getDistanceWallColor()));
    //workspace.push_back(std::make_pair(getTopWallVertex(), getTopWallColor()));

    do{
       if (polyhedrons.size() == 0) {
           break;
       }
        // Clear the screen
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		for (int i = 0; i < polyhedrons.size(); i++) {
            drawFigure(polyhedrons[i].getNumPoints(), polyhedrons[i].getFigureVertex(), polyhedrons[i].getFigureColor(), MatrixID, programID, MVP);
		}

        for (int i = 0; i < workspace.size(); i++) {
            drawFigure(3*4, workspace[i].first, workspace[i].second, MatrixID, programID, MVP);
        }

        drawFigure(14700, sphereVertex, sphereColor, MatrixID, programID, MVP);

        sphereVertex = getSphereVertex(0.1, dx, dy, dz);

        dx -= 0.001f;

        // Draw the points !

        glDisableVertexAttribArray(0);
        glDisableVertexAttribArray(1);

		// Swap buffers
		glfwSwapBuffers(window);
		glfwPollEvents();

	} // Check if the ESC key was pressed or the window was closed
	while( glfwGetKey(window, GLFW_KEY_ESCAPE ) != GLFW_PRESS &&
		   glfwWindowShouldClose(window) == 0 );


	// Cleanup VBO and shader
	//glDeleteBuffers(1, &cubeVertex);
	//glDeleteBuffers(1, &cubeColor);
	glDeleteProgram(programID);
	glDeleteVertexArrays(1, &VertexArrayID);

	// Close OpenGL window and terminate GLFW
	glfwTerminate();

	return 0;
}

