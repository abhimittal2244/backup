#define GLUT_DISABLE_ATEXIT_HACK
#include<iostream>
#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#define pi 3.142857
using namespace std;

void Kite()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,1.0);
	glBegin(GL_QUAD_STRIP);
	glVertex2f(100.0,100.0);
	glVertex2f(100.0,400.0);
	glVertex2f(300.0,400.0);
	glVertex2f(300.0,100.0);
	glVertex2f(500.0,100.0);
	glVertex2f(500.0,400.0);
	glEnd();
	glFlush();
	
}
void myinit()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 999.0, 0.0, 999.0);
}



int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("program");
	glutInitWindowSize(1000, 1000);
	glutInitWindowPosition(0, 100);
	glutDisplayFunc(Kite);
	
	myinit();
	glutMainLoop();
}

