#define GLUT_DISABLE_ATEXIT_HACK
#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857
void line(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,1.0);
	glBegin(GL_POINTS);
		int x1=250,y1=100,x2=356,y2=180;
		float y=y1,m,c,x;
		float dx=x2-x1;
		float dy=y2-y1;
		m=dy/dx;
		if(m<=1)
		{
			for(int x=x1;x<=x2;x++)
			{
				glVertex2f(x,y);
				y=y+m;
			}
		}
		else
		{
			for(int y=y1;y<=y2;y++)
			{
				glVertex2f(x,y);
				x=x+1/m;
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
	glutCreateWindow("Palak1");
	glutInitWindowSize(1000, 1000);
	glutInitWindowPosition(0, 100);
	glutDisplayFunc(line);
	
	myinit();
	glutMainLoop();
	return 0;
}

