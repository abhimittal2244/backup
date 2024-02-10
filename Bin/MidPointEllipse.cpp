#define GLUT_DISABLE_ATEXIT_HACK
#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<math.h>
int xc = 500, yc = 500, a=50, b=150;
void plot(int x, int y)
{
	glBegin(GL_POINTS);
		glColor3f(1.0f, 0.0f, 1.0f);
		glVertex2f(xc + x, yc + y);
		glVertex2f(xc + x, yc - y);
		glVertex2f(xc - x, yc - y);
		glVertex2f(xc - x, yc + y);
	glEnd();
}

void ellipse()
{
	glClear(GL_COLOR_BUFFER_BIT);
	int x=0, y=b;
	float di = b*b - a*a*b + a*a/4;
	while(b*b*x < a*a*y)
	{
		plot(x, y);
		if(di<0)
		{
			di+= b*b*(2*x + 3);
		}
		else
		{
			y--;
			di+= b*b*(2*x + 3) - a*a*(2*y - 3);
		}
		x++;
	}
	di = b*b*pow(x + 0.5, 2) + a*a*pow(y-1, 2) - a*a*b*b;
	while(y>= 0)
	{
		plot(x, y);
		if(di < 0)
		{
			x++;
			di += b*b*(2*x + 2) - a*a*(2*y - 3);
		}
		else
		{
			di+= 3*a*a - 2*a*a*y;
		}
		y--;
	}
	
	glFlush();
}




void myinit()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
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
	glutDisplayFunc(ellipse);
	
	myinit();
	glutMainLoop();
	return 0;
}
