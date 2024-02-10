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
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(200.0,200.0);
	glVertex2f(100.0,250.0);
	glVertex2f(50.0,200.0);
	glVertex2f(100.0,150.0);
	glEnd();
	
	glColor3f(1.0,0.0,1.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(200.0,200.0);
	glVertex2f(300.0,250.0);
	glVertex2f(350.0,200.0);
	glVertex2f(300.0,150.0);
	glEnd();

	glColor3f(1.0,0.0,1.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(200.0,200.0);
	glVertex2f(150.0,300.0);
	glVertex2f(200.0,350.0);
	glVertex2f(250.0,300.0);
	glEnd();


	glColor3f(1.0,0.0,1.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(200.0,200.0);
	glVertex2f(150.0,100.0);
	glVertex2f(200.0,50.0);
	glVertex2f(250.0,100.0);
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

