#define GLUT_DISABLE_ATEXIT_HACK
#include<windows.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<math.h>
//void line()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	int x1 = 650, y1=500, x2=400, y2=650;
//	int dy = y2-y1;
//	int dx=x2-x1;
//	float m = dy/dx;
//	glBegin(GL_POINTS);
//	if(m>1)
//	{
//		float di = 2*dx - dy;
//		int x = x1;
//		for(int y = y1; y<=y2; y++)
//		{
//			glVertex2f(x, y);
//			if(di<0)
//			{
//				di += 2*dx;
//			}
//			else
//			{
//				x++;
//				di += 2*dx - 2*dy;
//			}
//		}
//	}
//	glEnd();
//	glFlush();
//
//}
//int xc = 250, yc = 250, r=200;
//void plot(int x, int y)
//{
//	glBegin(GL_POINTS);
//		glColor3f(1.0f, 0.0f, 1.0f);
//		glVertex2f(xc + x, yc + y);
//		glVertex2f(xc + y, yc + x);
//		glVertex2f(xc + y, yc - x);
//		glVertex2f(xc + x, yc - y);
//		glVertex2f(xc - x, yc - y);
//		glVertex2f(xc - y, yc - x);
//		glVertex2f(xc - y, yc + x);
//		glVertex2f(xc - x, yc + y);
//	glEnd();
//}
//void circle()
//{

//	plot(x,y);
//	glClear(GL_COLOR_BUFFER_BIT);
//	int x=0, y=r;
//	float di = 3 - 2*r;
//	while(x<=y)
//	{
//		plot(x, y);
//		if(di<0)
//		{
//			di+= 4*x + 2;
//		}
//		else
//		{
//			y--;
//			di+=4*x - 4*y + 2;
//		}
//		x++;
//	}
//	glClear(GL_COLOR_BUFFER_BIT);
//	int x=0, y=r;
//	float di = 3 - 2*r;
//	while(x<=y)
//	{
//		plot(x, y);
//		if(di<0)
//		{
//			di+= 4*x + 2;
//		}
//		else
//		{
//			y--;
//			di+=4*x - 4*y + 2;
//		}
//		x++;
//	}
//	glFlush();
//}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLE_STRIP);
		glColor3f(1.0f,0.0f,1.0f);
		glVertex2f(250.0,250.0);
		glVertex2f(100.0,200.0);
		glVertex2f(50.0,250.0);
		glVertex2f(100.0,300.0);
		glVertex2f(250.0,250.0);
		glColor3f(1.0f,1.0f,1.0f);
		glVertex2f(250.0,250.0);
		glVertex2f(200.0,100.0);
		glVertex2f(250.0,50.0);
		glVertex2f(300.0,100.0);
		glVertex2f(250.0,250.0);
		glColor3f(0.0f,0.0f,1.0f);
		glVertex2f(250.0,250.0);
		glVertex2f(200.0,400.0);
		glVertex2f(250.0,450.0);
		glVertex2f(300.0,400.0);
		glVertex2f(250.0,250.0);
		glColor3f(0.0f,0.0f,0.0f);
		glVertex2f(250.0,250.0);
		glVertex2f(400.0,300.0);
		glVertex2f(450.0,250.0);
		glVertex2f(400.0,200.0);
		glVertex2f(250.0,250.0);
	glEnd();
		glFlush();
}

void myinit()
{
	glClearColor(1.0, 1.0, 0.0, 1.0);
	glColor3f(1.0, 1.0, 0.0);
	glColor3f(0.0,1.0,0.0);
	glPointSize(5.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 999.0, 0.0, 999.0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("Palak1");
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(0, 100);
	glutDisplayFunc(display);
//	glutDisplayFunc(line);
	
	myinit();
	glutMainLoop();
	return 0;
}
