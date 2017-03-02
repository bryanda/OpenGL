//Bryanda Garcia
//Spring 2017
//CSCI 4360
//Assignment 1

#include <GL\glew.h>
#include <GL\freeglut.h>

void displayMe(void) {
	glClear(GL_COLOR_BUFFER_BIT);

	//House body
	glBegin(GL_POLYGON);
	glColor3f(.8, .45, .65);
	glVertex2f(-.8, -.4);		//botton left
	glVertex2f(.2, -.4);		//bottom right
	glVertex2f(.2, .2);			//top right
	glVertex2f(-.8, .2);		//top left
	glEnd();

	//House Door
	glBegin(GL_POLYGON);
	glColor3f(.5, .3, 0);
	glVertex2f(-.3, -.4);
	glVertex2f(0, -.4);
	glVertex2f(0, 0);
	glVertex2f(-.1, .05);
	glVertex2f(-.2, .05);
	glVertex2f(-.3, 0);
	glEnd();

	//House Roof
	glBegin(GL_POLYGON);
	glColor3f(.9, .4, 0);
	glVertex2f(-.9, .2);			//botton left
	glVertex2f(.3, .2);				//bottom right
	glVertex2f(0, .4);				//top right
	glVertex2f(-.6, .4);			//top left
	glColor3f(.75, .45, .65);
	glEnd();

	//House grass
	glBegin(GL_POLYGON);
	glColor3f(.1, .8, .3);
	glVertex2f(-1, -1);			//botton left
	glVertex2f(1, -1);			//bottom right
	glVertex2f(1, -.4);			//top right
	glVertex2f(-1, -.4);		//top left
	glEnd();
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(600, 600);				//window size
	glutInitWindowPosition(200, 200);			//distance from top-left screen
	glutCreateWindow("Bryanda's House");		//message displayed on top bar window
	glutDisplayFunc(displayMe);
	glutMainLoop();

	return 0;
}