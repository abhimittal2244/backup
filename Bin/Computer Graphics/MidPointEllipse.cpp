#include<iostream>
#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<math.h>
using namespace std;
int xc=500, yc=500, a=200, b=50;



void plot(int x, int y)
{
	glBegin(GL_POINTS);
		glVertex2f(xc + x, yc + y);
		glVertex2f(xc + x, yc - y);
		glVertex2f(xc - x, yc - y);
		glVertex2f(xc - x, yc + y);
	glEnd();
}



void rotate(float& x, float& y, float angle) {
    float new_x = x * cos(angle) - y * sin(angle);
    float new_y = x * sin(angle) + y * cos(angle);
    x = new_x;
    y = new_y;
//    plot2(x, y);
}

void plot2(int x, int y)
{
    glBegin(GL_POINTS);
    float rotated_x = x, rotated_y = y;
    rotate(rotated_x, rotated_y, 1.5708); // Rotate each point
    glVertex2f(xc + rotated_x, yc + rotated_y);
    glVertex2f(xc + rotated_x, yc - rotated_y);
    glVertex2f(xc - rotated_x, yc - rotated_y);
    glVertex2f(xc - rotated_x, yc + rotated_y);
    glEnd();
}

void scale(float& x, float& y, float sx, float sy) {
    x *= sx;
    y *= sy;
}

void plot3(int x, int y)
{
    glBegin(GL_POINTS);
    float scaled_x = x, scaled_y = y;
    scale(scaled_x, scaled_y, 3, 3); // Scale each point
    glVertex2f(xc + scaled_x, yc + scaled_y);
    glVertex2f(xc + scaled_x, yc - scaled_y);
    glVertex2f(xc - scaled_x, yc - scaled_y);
    glVertex2f(xc - scaled_x, yc + scaled_y);
    glEnd();
}

void ellipse(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,1.0);
	int x = 0, y = b;
	int aa = a*a;
	int bb = b*b;
	int di = bb - (aa)*b + (aa)/4;
	while(bb*x<aa*y)
	{
		plot3(x, y);
		x++;
		if(di < 0)
		{		
			di += 2*(bb)*x + 3*bb;
		}
		else
		{
			y--;
			di += 2*((bb)*x - (aa)*y) + 2*aa + 3*bb;
		}
	}
	di = (bb)*pow(x+0.5, 2) + (aa)*pow(y-1, 2) - ((aa)*(bb));
	while(y>=0)
	{
		plot3(x, y);
		y--;
		if(di < 0)
		{
			x++;
			di += 2*bb + 2*(bb)*x + 3*aa - 2*(aa)*y;
		}
		else
		{
			di += 3*aa - 2*(aa)*y;
		}
	}
	glFlush();
}

void myinit()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 999.0, 0.0, 999.0);
}



int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("Ellipse drawing algo");
	glutInitWindowSize(1000, 1000);
	glutInitWindowPosition(0, 100);
//	cout << "Enter xc, yc: ";
//	cin >> xc >> yc;
//	cout << "Enter a: ";
//	cin >> a;
//	
//	cout << "Enter b: ";
//	cin >> b;
	glutDisplayFunc(ellipse);
	
	myinit();
	glutMainLoop();
	return 0;
}
