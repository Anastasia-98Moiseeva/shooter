class Polyhedron {
public:
    Polyhedron(GLuint cubeVertex, GLuint cubeColor, float* center) {
        this->center = center;
        this->cubeVertex = cubeVertex;
        this->cubeColor = cubeColor;
    }

    float* getCenter() {
        return center;
    }

//    GLuint get

private:
    GLuint cubeVertex;
    GLuint cubeColor;
    float* center;
};