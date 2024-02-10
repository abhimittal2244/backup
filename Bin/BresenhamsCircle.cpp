#define GLUT_DISABLE_ATEXIT_HACK
#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<math.h>
int xc = 500, yc = 500, r=100;
void plot(int x, int y)
{
	glBegin(GL_POINTS);
		glColor3f(1.0f, 0.0f, 1.0f);
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

void circle()
{
	glClear(GL_COLOR_BUFFER_BIT);
	int x=0, y=r;
	float di = 3 - 2*r;
	while(x<=y)
	{
		plot(x, y);
		if(di<0)
		{
			di+= 4*x + 2;
		}
		else
		{
			y--;
			di+=4*x - 4*y + 2;
		}
		x++;
	}
	
//	float di = 2*pow(x+1, 2) + 2*y*y - 2*y - 2*r*r + 1;
	
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
	glutDisplayFunc(circle);
	
	myinit();
	glutMainLoop();
	return 0;
}
