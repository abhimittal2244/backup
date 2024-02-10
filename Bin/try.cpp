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
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POINTS);
	float x=x1;y=y1,m;
	float dy=y2-y1;
	float dx=x2-x1;
	m=dy/dx;
	if(m<1)
	{
		float di=2*dy-dx;
		for(int x=x1;x<x2;x++)
		{
			if(di<0)
			{
				glVertex2f(x,y);
				di+=2*dy	
			}
			else
			{
				glVertex2f(x,y);
				di+=2*(dy-dx);
				y++;
			}
		}
	}
	else
	{
		float di=2*dx-dy;
		for( int y=y1;y<y2;y++)
		{
			if(di<0)
			{
				glVertex(x,y);
				di+=2*dx;
			}
			else
			{
				glVertex(x,y);
				di+=2*(dx-dy);
				x++;
			}
		}
	}
	

}


void myinit()
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glColor3f(1.0, 0.0, 1.0);
	glPointSize(10.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 999.0, 0.0, 999.0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("Palak1");
	glutInitWindowSize(780, 640);
	glutInitWindowPosition(0, 100);
	glutDisplayFunc(display);
	
	myinit();
	glutMainLoop();
	return 0;
}
