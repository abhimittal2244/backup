#define GLUT_DISABLE_ATEXIT_HACK
#include<iostream>
#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#define pi 3.142857
using namespace std;
int x1, y1, x2, y2;

void line(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,1.0);
	glBegin(GL_POINTS);
		float x=x1, y=y1, m;
		float dx = x2 - x1;
		float dy = y2 - y1;
		m = dy/dx;
		if(m < 1)
		{
			float di = 2*dy - dx;
			for(x = x1; x <= x2; x++)
			{
				if(di<0)
				{
					glVertex2f(x, y);
					di = di + 2*dy;
				}
				else
				{
					glVertex2f(x, y);
					di = di + 2*(dy - dx);
					y++;
				}
			}
		}
		else
		{
			float di = 2*dx - dy;
			for(y = y1; y <= y2; y++)
			{
				if(di<0)
				{
					glVertex2f(x, y);
					di = di + 2*dx;
				}
				else
				{
					glVertex2f(x, y);
					di = di + 2*(dx - dy);
					x++;
				}
			}
		}
	glEnd();
	glFlush();
}

void myinit()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(5.0);
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
	cout << "Enter x2, y2: ";
	cin >> x2 >> y2;
	
	glutDisplayFunc(line);
	
	myinit();
	glutMainLoop();
	return 0;
}

