#define GLUT_DISABLE_ATEXIT_HACK
#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<math.h>
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	// points
	/*
	glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(20.0,80.0);
	glVertex2f(100.0,80.0);
	glVertex2f(60.0,40.0);
	glVertex2f(60.0,120.0);
	glEnd();
	
	// lines
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(200.0,40.0);
	glVertex2f(290.0,100.0);
	glVertex2f(200.0,100.0);
	glVertex2f(290.0,160.0);
	
	glEnd();
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(390.0,160.0);
	glVertex2f(450.0,160.0);
	glVertex2f(390.0,100.0);
	glVertex2f(450.0,100.0);
	
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(20.0,200.0);
	glVertex2f(100.0,200.0);
	glVertex2f(20.0,300.0);
	glVertex2f(100.0,300.0);
	
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(200.0,200.0);
	glVertex2f(200.0,300.0);
	glVertex2f(250.0,300.0);
	glVertex2f(300.0,200.0);
	
	glEnd();
	*/
	/*glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(400.0,200.0);
	glVertex2f(100.0,200.0);
	glVertex2f(20.0,300.0);
	glVertex2f(100.0,300.0);
	
	glEnd();
	*/
	/*
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(100.5f,100.5f);
	glVertex2f(100.5f,200.5f);
	glVertex2f(200.5f,200.5f);
	glVertex2f(250.5,100.5);
	glEnd();
	*/
	/*
	glBegin(GL_QUAD_STRIP);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(400.0f,200.0f);
	glVertex2f(400.0f,300.0f);
	glVertex2f(450.0f,300.0f);
	glVertex2f(500.0f ,200.0f);
	glEnd();
	*/
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(100.5f,200.5f);
	glVertex2f(200.5f,200.5f);
	glVertex2f(150.5,100.5);
	glVertex2f(100.5f,200.5f);
	glVertex2f(200.5f,200.5f);
	glVertex2f(150.5,100.5);
	
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
