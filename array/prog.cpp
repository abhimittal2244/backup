#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857

void myinit()
{
	glClearColor(1.0,1.0,1.0,1.0);
	glColor3f(1.0,0.0,0.0);
	glPointSize(5.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,499.0,0.0,499.0);
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POINTS);
glColor3f(0.0f, 1.0f, 0.0f);
glVertex2f(10.0, 10.0);
glVertex2f(10.0, 200.0);
glVertex2f(200.0, 200.0);
glVertex2f(200.0, 10.0);
glVertex2f(400, 10);
glVertex2f(400, 200);
glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 1.0, 0.0);
glVertex2f(10, 10);
glVertex2f(200, 200);
glVertex2f(200, 200);
glVertex2f(400, 10);
glVertex2f(400, 10);
glVertex2f(10, 200);
glEnd();

glBegin(GL_LINE_STRIP);
glColor3f(0.0, 0.0, 1.0);
glVertex2f(10, 200);
glVertex2f(200, 10);
glVertex2f(400, 200);
glVertex2f(10, 10);
glEnd();

glBegin(GL_LINE_LOOP);
glColor3f(0.0, 1.0, 1.0);
glVertex2f(10, 200);
glVertex2f(200, 200);
glVertex2f(400, 200);
glVertex2f(400, 10);
glVertex2f(200, 10);
glVertex2f(10, 10);
glEnd();

glFlush();

}

int main(int argc,char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode;
	(GLUT_SINGLE| GLUT_RGB);
	glutCreateWindow("Palak");
	glutInitWindowSize(500,250);
	glutInitWindowPosition(0,100);
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();
	return 0;
	
}

