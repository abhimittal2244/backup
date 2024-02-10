#define GLUT_DISABLE_ATEXIT_HACK
#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
void display()
{
	glBegin(GL_TRIANGLES);
	glVertex2f(50.0, 50.0);
	glVertex2f(50.0, 450.0);
	glVertex2f(450.0,50.0);
	glVertex2f(450.0,450.0);
	glEnd();
	glFlush();
	
}
void myinit()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(10.0);
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
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();
	return 0;
}
