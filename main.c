#include <GL/glut.h>
#include <stdio.h>

void display() {
    glClearColor(246, 247, 235, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(1024, 768); // screen's ipad mini
    glutCreateWindow("Gestion Etudiants(OpenGL-C)");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}