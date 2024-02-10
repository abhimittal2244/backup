#define GLUT_DISABLE_ATEXIT_HACK
#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	// points
	glBegin(GL_POINTS);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(50.0, 50.0);
	glVertex2f(50.0, 450.0);
	glVertex2f(450.0,50.0);
	glVertex2f(450.0,450.0);
	glVertex2f(250.0,800.0);
	glEnd();
	// outer hut lines
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(50.0, 50.0);
	glVertex2f(50.0, 450.0);
	glVertex2f(250.0,800.0);
	glVertex2f(450.0,450.0);
	glVertex2f(450.0,50.0);
	glEnd();
	// gates
	glBegin(GL_LINES);
		glVertex2f(100.0,50.0);
		glVertex2f(100.0,400.0);
		glVertex2f(200.0,50.0);
		glVertex2f(200.0,400.0);
		glVertex2f(100.0,400.0);
		glVertex2f(200.0,400.0);
		glVertex2f(50.0,450.0); // line of outer hut
		glVertex2f(450.0,450.0);// line of outer hut
		glEnd();
		glBegin(GL_LINE_STRIP);
		glColor3f(1.0f, 0.0f, 1.0f);
		glVertex2f(200.0,400.0);
		glVertex2f(170.0,225.0);
		glVertex2f(200.0,50.0);
		glEnd();
		glBegin(GL_LINE_STRIP);
		glColor3f(1.0f, 0.0f, 1.0f);
		glVertex2f(100.0,400.0);
		glVertex2f(130.0,225.0);
		glVertex2f(100.0,50.0);
		glEnd();
		//window
		glBegin(GL_LINE_LOOP);
		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex2f(300.0,200.0);
		glVertex2f(300.0,275.0);
		glVertex2f(300.0,350.0);
		glVertex2f(350.0,350.0);
		glVertex2f(400.0,350.0);
		glVertex2f(400.0,275.0);
		glVertex2f(400.0,200.0);
		glVertex2f(350.0,200.0);
		glEnd();
		glBegin(GL_LINES);
		glColor3f(1.0f,0.0f,0.0f);
		glVertex2f(300.0,275.0);
		glVertex2f(400.0,275.0);
		glVertex2f(350.0,350.0);
		glVertex2f(350.0,200.0);
		glEnd();
		//Triangle
		glBegin(GL_TRIANGLES);
		glColor3f(1.0f,0.0f,1.0f);
		glVertex2f(350.0,200.0);
		glVertex2f(300.0,150.0);
		glVertex2f(400.0,150.0);
		glEnd();
		glBegin(GL_QUADS);
		glColor3f(1.0f,0.0f,0.0f);
		glVertex2f(300.0,200.0);
		glVertex2f(300.0,350.0);
		glVertex2f(400.0,350.0);
		glVertex2f(400.0,200.0);
		glEnd();
		glBegin(GL_QUAD_STRIP);
		glColor3f(0.0f,1.0f,1.0f);
		glVertex2f(300.0,200.0);
		glVertex2f(300.0,350.0);
		glVertex2f(400.0,350.0);
		glVertex2f(400.0,200.0);
		glEnd();
		
		//Chimney
		glBegin(GL_LINE_STRIP);
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(380.0,575.0);
		glVertex2f(380.0,850.0);
		glVertex2f(420.0,850.0);
		glVertex2f(420.0,500.0);
		glEnd();
		// lines under roof
		glBegin(GL_LINES);
		glVertex2f(250.0,800.0);
		glVertex2f(250.0,450.0);
	//	glVertex2f(190.0,695.0);
	//	glVertex2f(190.0,450.0);
	//	glVertex2f(130.0,590.0);
	//	glVertex2f(130.0,450.0);
	//	glVertex2f(70.0,485.5);
	//	glVertex2f(70.0,450.0);
	//	glVertex2f(390.0,555.0);
	//	glVertex2f(390.0,450.0);
		
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
