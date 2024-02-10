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
	// points
	glBegin(GL_POINTS);
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex2f(50.0, 50.0);
		glVertex2f(500.0, 50.0);
		glVertex2f(50.0, 550.0);
		glVertex2f(500.0, 550.0);
		glVertex2f(275.0, 900.0);
	glEnd();
	// outer hut lines
	glBegin(GL_LINE_LOOP);
		glColor3f(0.0f, 0.0f, 1.0f);
		glVertex2f(50.0, 50.0);
		glVertex2f(50.0, 550.0);
		glVertex2f(275.0, 900.0);
		glVertex2f(500.0, 550.0);
		glVertex2f(500.0, 50.0);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(50.0, 550.0);
		glVertex2f(500.0, 550.0);
	glEnd();
	
	// chimney
	glBegin(GL_LINE_STRIP);
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(350, 785);
		glVertex2f(350, 930);
		glVertex2f(390, 930);
		glVertex2f(390, 723);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(350, 910);
		glVertex2f(340, 910);
		glVertex2f(340, 950);
		glVertex2f(400, 950);
		glVertex2f(400, 910);
		glVertex2f(390, 910);
	glEnd();
	
	// gate
	glBegin(GL_LINE_STRIP);
		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex2f(100.0, 50.0);
		glVertex2f(100.0, 350.0);
		glVertex2f(200.0, 350.0);
		glVertex2f(200.0, 50.0);
	glEnd();
	
	glBegin(GL_LINES);
		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex2f(150.0, 290.0);
		glVertex2f(150.0, 110.0);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex2f(100.0, 350.0);
		glVertex2f(150.0, 290.0);
		glVertex2f(200.0, 350.0);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex2f(100.0, 50.0);
		glVertex2f(150.0, 110.0);
		glVertex2f(200.0, 50.0);
	glEnd();
	// window
	glBegin(GL_LINE_LOOP);
		glColor3f(1.0f, 0.0f, 1.0f);
		glVertex2f(310, 450);
		glVertex2f(415, 450);
		glVertex2f(415, 290);
		glVertex2f(310, 290);	
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(362.5, 450);
		glVertex2f(362.5, 290);
		glVertex2f(310, 370);
		glVertex2f(415, 370);
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
