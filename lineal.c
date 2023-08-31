#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Define los puntos y pendientes
    float points[][2] = {{0.0, 0.0}, {1.0, 1.0}};
    float slopes[] = {(points[1][1] - points[0][1]) / (points[1][0] - points[0][0])};

    // Configura el color y grosor de línea
    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(2.0);

    // Dibuja la spline lineal
    glBegin(GL_LINES);
    glVertex2f(points[0][0], points[0][1]);
    glVertex2f(points[1][0], points[1][1]);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Spline Lineal con OpenGL");
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
