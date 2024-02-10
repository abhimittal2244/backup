#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
void myInit()
{
	glClearColor(1.0,1.0,1.0,1.0);
	glColor3f(1.0,0.0,0.0);
	glPointSize(10.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,499.0,0.0,499.0);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
		glColor3f(1.0f,0.0f,0.0f);
		glVertex2f(10.0,10.0);
		glVertex2f(10.0,110.0);
		glVertex2f(210.0,110.0);
		glVertex2f(210.0,10.0);
		glVertex2f(110.0,190.0);
	glEnd();
	
glFlush();
}

int main(int argc,char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB);
	glutCreateWindow("Palak");
	glutInitWindowSize(500,250);
	glutInitWindowPosition(0,0);
	glutDisplayFunc(display);
	myInit();
	glutMainLoop();
	return 0;
	
}

