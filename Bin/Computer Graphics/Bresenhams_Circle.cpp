#define GLUT_DISABLE_ATEXIT_HACK
#include<iostream>
#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#define pi 3.142857
using namespace std;

int x1, y1, r1;



void circle(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,1.0);
	glBegin(GL_POINTS);
		int x = x1, y = y1+r1, r = r1;
		float di  = 3 - 2*r;
		while(x <= y)
		{
			if(di < 0)
			{
				glVertex2f(x, y);
				di += 4*x + 2;
			}
			else
			{
				glVertex2f(x, y);
				di += 4*(x - y) + 2;
				y--;
			}
			x++;
		}
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
	cout << "Enter x1, y1: ";
	cin >> x1 >> y1;
	cout << "Enter radius: ";
	cin >> r1;
	
	glutDisplayFunc(circle);
	
	myinit();
	glutMainLoop();
}

