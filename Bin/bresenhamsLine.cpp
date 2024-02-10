#define GLUT_DISABLE_ATEXIT_HACK
#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<math.h>

void line()
{
	glClear(GL_COLOR_BUFFER_BIT);
	int x1 = 50, y1=700, x2=500, y2=700;
	int dy = y2-y1;
	int dx=x2-x1;
	float m = dy/dx;
	glBegin(GL_POINTS);
	if(m<1)
	{	
		float di = 2*dy - dx;
		int y = y1;
		for(int x = x1; x<=x2; x++)
		{
			glVertex2f(x, y);
			if(di<0)
			{
				di += 2*dy;
			}
			else
			{
				y++;
				di += 2*dy - 2*dx;
			}
		}
	}
	else
	{
		float di = 2*dx - dy;
		int x = x1;
		for(int y = y1; y<=y2; y++)
		{
			glVertex2f(x, y);
			if(di<0)
			{
				di += 2*dx;
			}
			else
			{
				x++;
				di += 2*dx - 2*dy;
			}
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
