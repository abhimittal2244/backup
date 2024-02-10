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
	glBegin(GL_POINTS);
	if(m<1)
	{	
		float y = y1;	
		for(int x = x1; x<=x2; x++)
		{
			float y = y + m;
			glVertex2f(x, y);
		}
	}
	else
	{
		float x = x1;
		for(int y = y1; y<=y2; y++)
		{
			x = x + 1/m;
			glVertex2f(x, y);
		}
	}
	glEnd();
	glFlush();
}




void myinit()
{
	glClearColor(1.0, 0.0, 0.0, 1.0);
	glColor3f(1.0, 0.0, 1.0);
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
	glutInitWindowSize(780, 640);
	glutInitWindowPosition(0, 100);
	glutDisplayFunc(line);
	
	myinit();
	glutMainLoop();
	return 0;
}
