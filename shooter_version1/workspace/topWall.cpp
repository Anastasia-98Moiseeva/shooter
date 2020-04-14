//
// Created by Никита on 14.04.2020.
//

GLuint floorVertex = getFloorVertex(1, 0, 0, 0);
GLuint floorColor = getFloorColor();
GLuint leftWallVertex = getLeftWallVertex(1, 0, 0, 0);
GLuint leftWallColor = getLeftWallColor();
GLuint rightWallVertex = getRightWallVertex(1, 0, 0, 0);
GLuint rightWallColor = getRightWallColor();
GLuint distanceWallVertex = getDistanceWallVertex(1, 0, 0, 0);
GLuint distanceWallColor = getDistanceWallColor();


drawFigure(3*4, floorVertex, floorColor, MatrixID, programID, MVP);
drawFigure(3*4, leftWallVertex, leftWallColor, MatrixID, programID, MVP);
drawFigure(3*4, rightWallVertex, rightWallColor, MatrixID, programID, MVP);
drawFigure(3*4, distanceWallVertex, distanceWallColor, MatrixID, programID, MVP);

glm::mat4 View       = glm::lookAt(
        glm::vec3(0,-8,1), // Camera is at (4,3,-3), in World Space
        glm::vec3(0,0,0), // and looks at the origin
        glm::vec3(0,1,0)  // Head is up (set to 0,-1,0 to look upside-down)
);
