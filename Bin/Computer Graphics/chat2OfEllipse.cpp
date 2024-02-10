#include<iostream>
#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<math.h>
using namespace std;
int xc = 400, yc = 400, a = 100, b = 50;

void plot(int x, int y) {
    glBegin(GL_POINTS);
    glVertex2f(xc + x, yc + y);
    glVertex2f(xc + x, yc - y);
    glVertex2f(xc - x, yc - y);
    glVertex2f(xc - x, yc + y);
    glEnd();
}

void ellipse(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 1.0);
    int x = 0;
    int y = b;
    int aa = a * a;
    int bb = b * b;
    int di;

    while (bb*x <= aa*y) {
        plot(x, y);

        x++;
        if (bb * x < aa * y) {
            di = bb * (x * x) + aa * (y * y) - aa * bb;

            if (di >= 0) {
                y--;
                di -= 2 * aa * y;
            }
        }
        di += bb * (2 * x + 1) - aa * (2 * y - 1);
    }
	cout<<x<<endl;
	cout<<y<<endl;
    glFlush();
}

void myinit() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glColor3f(1.0, 0.0, 0.0);
    glPointSize(1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 800.0, 0.0, 800.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Ellipse Drawing");
    glutInitWindowSize(800, 800);
    glutDisplayFunc(ellipse);
    myinit();
    glutMainLoop();
    return 0;
}

