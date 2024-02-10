#include<iostream>
#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<math.h>
using namespace std;

int windowWidth = 999;
int windowHeight = 999;

void drawEllipse(int a, int b, int centerX, int centerY) {
    glBegin(GL_POINTS);
    int x = 0;
    int y = b;
    int a_sqr = a * a;
    int b_sqr = b * b;
    int two_a_sqr = 2 * a_sqr;
    int two_b_sqr = 2 * b_sqr;
//    int x_end = a_sqr / sqrt(a_sqr + b_sqr);

    // Region 1
    int p1 = b_sqr - (a_sqr * b) + (0.25 * a_sqr);
    while ((two_b_sqr * x) < (two_a_sqr * y)) {
        x++;
        if (p1 < 0) {
            p1 += b_sqr * (2 * x + 1);
        } else {
            y--;
            p1 += (b_sqr * (2 * x + 1) - a_sqr * (2 * y - 1));
        }

        // Plot points in the four quadrants
        glVertex2i(centerX + x, centerY + y);
        glVertex2i(centerX - x, centerY + y);
        glVertex2i(centerX + x, centerY - y);
        glVertex2i(centerX - x, centerY - y);
    }

    // Region 2
    int p2 = b_sqr * (x + 0.5) * (x + 0.5) + a_sqr * (y - 1) * (y - 1) - a_sqr * b_sqr;
    while (y > 0) {
        y--;
        if (p2 > 0) {
            p2 += a_sqr * (1 - 2 * y);
        } else {
            x++;
            p2 += (b_sqr * (2 * x + 1) - a_sqr * (2 * y - 1));
        }

        // Plot points in the four quadrants
        glVertex2i(centerX + x, centerY + y);
        glVertex2i(centerX - x, centerY + y);
        glVertex2i(centerX + x, centerY - y);
        glVertex2i(centerX - x, centerY - y);
    }

    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glPointSize(2.0);
    drawEllipse(100, 200, windowWidth / 2, windowHeight / 2);
    glFlush();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, w, 0, h);
    glMatrixMode(GL_MODELVIEW);
    windowWidth = w;
    windowHeight = h;
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(windowWidth, windowHeight);
    glutCreateWindow("Midpoint Ellipse Drawing");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}

