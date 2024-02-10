#define GLUT_DISABLE_ATEXIT_HACK
#include<iostream>
#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<math.h>

using namespace std;
void line(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,1.0);
	glBegin(GL_POINTS);
	float y,m,c;
	int x1=250,y1=100,x2=356,y2=180;
	float dx=x2-x1;
	float dy=y2-y1;
	m=dy/dx;
	c=y1-m*x1;
	if(m<1)
	{
		for(int x=x1;x<=x2;x++)
		{
			y=m*x+c;
			glVertex2f(x,y);
		}
	}
	else
	{
		for(int y=y1;y<=y2;y++)
		{
			int x=(y-c)/m;
			glVertex2f(x,y);
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
	glutDisplayFunc(line);
	
	myinit();
	glutMainLoop();
	return 0;
}
