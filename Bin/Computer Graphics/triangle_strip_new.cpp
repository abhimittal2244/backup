#define GLUT_DISABLE_ATEXIT_HACK
#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	/*
	glBegin(GL_TRIANGLE_STRIP);
		glColor3f(1.0f,0.0f,1.0f);
		glVertex2f(100.0,100.0);
		glVertex2f(200.0,100.0);
		glVertex2f(200.0,300.0);
		glVertex2f(150.0,400.0);
		glVertex2f(100.0,450.0);
		glVertex2f(50.0,150.0);
	glEnd();
	*/
	glBegin(GL_TRIANGLE_STRIP);
		glColor3f(1.0f,0.0f,0.0f);



		
		glVertex2f(50.0,200.0);
		glColor3f(1.0f,0.0f,1.0f);
		glVertex2f(50.0,100.0);	
		glColor3f(0.0f,1.0f,0.0f);	
		glVertex2f(100.0,50.0);
		glColor3f(0.0f,1.0f,1.0f);
		glVertex2f(200.0,50.0);
		glColor3f(0.0f,0.0f,1.0f);
		glVertex2f(250.0,100.0);
		glColor3f(1.0f,1.0f,1.0f);
		glVertex2f(250.0,200.0);
		glColor3f(1.0f,1.0f,0.0f);
		glVertex2f(200.0,250.0);
		glColor3f(0.0f,0.0f,0.0f);
		glVertex2f(100.0,250.0);
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
	gluOrtho2D(0.0, 999.0, 0.0, 999.0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("Palak1");
	glutInitWindowSize(780, 640);
	glutInitWindowPosition(0, 100);
	glutDisplayFunc(display);
	
	myinit();
	glutMainLoop();
	return 0;
}
