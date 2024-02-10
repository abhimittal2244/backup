#define GLUT_DISABLE_ATEXIT_HACK
#include<iostream>
#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#define pi 3.142857
using namespace std;
int xc, yc, r;

void plot(int x, int y)
{
	glBegin(GL_POINTS);
		glVertex2f(xc + x, yc + y);
		glVertex2f(xc + y, yc + x);
		glVertex2f(xc + y, yc - x);
		glVertex2f(xc + x, yc - y);
		glVertex2f(xc - x, yc - y);
		glVertex2f(xc - y, yc - x);
		glVertex2f(xc - y, yc + x);
		glVertex2f(xc - x, yc + y);
	glEnd();
}

void circle(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,1.0);
	
		int x = 0, y = r;
		int di  = 1 - r;
		while(x <= y)
		{
			if(di < 0)
			{
				plot(x, y);
				di += 2*x + 1;
			}
			else
			{
				plot(x, y);
				di += 2*(x - y) + 1;
				y--;
			}
			x++;
		}
	
	
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
	glutCreateWindow("Palak");
	glutInitWindowSize(1000, 1000);
	glutInitWindowPosition(0, 100);
	cout << "Enter xc, yc: ";
	cin >> xc >> yc;
	cout << "Enter radius: ";
	cin >> r;
	
	glutDisplayFunc(circle);
	
	myinit();
	glutMainLoop();
	return 0;
}
