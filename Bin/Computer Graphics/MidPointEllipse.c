#include<iostream>
#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<math.h>
using namespace std;
int xc, yc, a, b;

void plot(int x, int y)
{
	glBegin(GL_POINTS);
		glVertex2f(xc + x, yc + y);
		glVertex2f(xc + x, yc - y);
		glVertex2f(xc - x, yc - y);
		glVertex2f(xc - x, yc + y);
	glEnd();
}

void ellipse(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,1.0);
	int x = 0, y = b;
	float m;
	m = ((pow(b, 2)*x)/(pow(a, 2)*y));
	int di;
	while(x<a && y > b)
	{
		if(m<1)
		{
			di = pow(b, 2) - (pow(a, 2))*b + (pow(a, 2))/4;
			if(di < 0)
			{
				plot(x, y);
				di += 2*(pow(b, 2))*x + 3*pow(b, 2);
				x++;
			}
			else
			{
				plot(x, y);
				di += 2*((pow(b, 2))*x - (pow(a, 2))*y) + 2*pow(a, 2) + 3*pow(b, 2);
				x++;
				y--;
			}
		}
		else
		{
			di = (pow(b, 2))*pow(x+0.5, 2) + (pow(a, 2))*pow(y-1, 2) - ((pow(a, 2))*(pow(b, 2)));
			if(di < 0)
			{
				plot(x, y);
				di += 2*pow(b, 2) + 2*(pow(b, 2))*x + 3*pow(a, 2) - 2*(pow(a, 2))*y;
				x++;
				y--;
			}
			else
			{
				plot(x, y);
				di += 3*pow(a, 2) - 2*(pow(a, 2))*y;
				y--;
			}
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
	glutCreateWindow("Palak");
	glutInitWindowSize(1000, 1000);
	glutInitWindowPosition(0, 100);
	cout << "Enter xc, yc: ";
	cin >> xc >> yc;
	cout << "Enter a: ";
	cin >> a;
	
	cout << "Enter b: ";
	cin >> b;
	
	glutDisplayFunc(ellipse);
	
	myinit();
	glutMainLoop();
	return 0;
}
