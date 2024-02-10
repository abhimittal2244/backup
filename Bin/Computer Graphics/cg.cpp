#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
    //glColor3f(0.0f,1.0f,0.0f)
    glVertex2f(10.0,10.0);
    glVertex2f(150.0,80.0);
    glVertex2f(100.0,20.0);
    glVertex2f(200.0,100.0);
    glEnd();
    glFlush();
}
void myinit()
{
	glClearColor(1.0,0.0,1.0,1.0);
	glColor3f(1.0,1.0,0.0);
	glPointSize(5.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,499.0,0.0,499.0);
}

int main(int argc,char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("palak");
    glutInitWindowSize(500,500);
    glutInitWindowPosition(0,0);
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
	
}
