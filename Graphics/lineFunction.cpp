#define GLUT_DISABLE_ATEXIT_HACK
#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<math.h>

void line()
{
	glClear(GL_COLOR_BUFFER_BIT);
	int x1 = 50, y1=50, x2=500, y2=500;
	float m = (y2-y1)/(x2-x1);
	float c = y1 - m*x1;
	glBegin(GL_POINTS);
	if(m<1)
	{
		while(x1<=x2)
		{
			int y = m*x1 + c;
			
			glVertex2f(x1, y);
			x1++;
		}
	}
	else
	{
		while(y1<=y2)
		{
			int x = (y1 - c)/m;
			
			glVertex2f(x, y1);
			y1++;
		}
	}
	
	glEnd();
	glFlush();
}


void myinit()
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glColor3f(1.0, 0.0, 1.0);
	glPointSize(10.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 780.0, 0.0, 640.0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("Palak1");
	glutInitWindowSize(780, 640);
	glutInitWindowPosition(0, 100);
	glutDisplayFunc(line);
	
	myinit();
	glutMainLoop();
	return 0;
}
