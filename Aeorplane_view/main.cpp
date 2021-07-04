#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display1() {
	glClearColor(0.0f, 0.5f, 0.9f, 1.0f);//blue color


    glClear(GL_COLOR_BUFFER_BIT);

    //grass
    glBegin(GL_QUADS);

    glColor3ub(0, 148, 63);

    glVertex3f(-1,-0.8,0.0);
    glVertex3f(-1,-1,0.0);
    glVertex3f(1,-1,0.0);
    glVertex3f(1,-0.8,0.0);
    glEnd();

     //road
    glBegin(GL_QUADS);

    glColor3ub(106, 108,107) ;

    glVertex3f(-1,-0.2,0.0);
    glVertex3f(-1,-0.8,0.0);
    glVertex3f(1,-0.8,0.0);
    glVertex3f(1,-0.2,0.0);

    glEnd();

    //windmill
    glBegin(GL_QUADS);

    glColor3ub(80, 44, 25 ) ;

    glVertex3f(.45,0.0,0.0);
    glVertex3f(.45,-0.2,0.0);
    glVertex3f(.55,-0.2,0.0);
    glVertex3f(.55,0.0,0.0);

    glEnd();

     glBegin(GL_QUADS);

    glColor3ub(80, 44, 25 ) ;

    glVertex3f(.48,0.06,0.0);
    glVertex3f(.48,0.0,0.0);
    glVertex3f(.52,0.0,0.0);
    glVertex3f(.52,0.06,0.0);

    glEnd();

  //building
  glBegin(GL_QUADS);

    glColor3ub(211, 84, 0 ) ;

    glVertex3f(-.6,0.3,0.0);
    glVertex3f(-.6,0.0,0.0);
    glVertex3f(-.5,0.0,0.0);
    glVertex3f(-.5,0.3,0.0);

    glEnd();


	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display1);
	glutMainLoop();
	return 0;
}
