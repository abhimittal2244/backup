#define GLUT_DISABLE_ATEXIT_HACK
#include<iostream>
#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857
using namespace std;
void line(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,1.0);
	glBegin(GL_POINTS);
	int x1=100,y1=100,x2=180,y2=400;
	float x=x1, y=y1,m,c;
	float dx=x2-x1;
	float dy=y2-y1;
	m=dy/dx;
	if(m<1)
	{
		float di = 2*dy - dx;
		for(x=x1; x <= x2; x++)
		{
			if(di < 0)
			{
				glVertex2f(x,y);
				di=di+2*dy;
			}
			else
			{
				glVertex2f(x,y);
				di=di+2*dy-2*dx;
				y++;
			}
		}
	}
	else
	{
		float di = 2*dx - dy;
		for(y=y1; y <= y2; y++)
		{
			if(di < 0)
			{
				glVertex2f(x,y);
				di=di+2*dx;
			}
			else
			{
				glVertex2f(x,y);
				di=di+2*dx-2*dy;
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
	glutCreateWindow("Palak");
	glutInitWindowSize(1000, 1000);
	glutInitWindowPosition(0, 100);
	glutDisplayFunc(line);
	
	myinit();
	glutMainLoop();
	return 0;
}
