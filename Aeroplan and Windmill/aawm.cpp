
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>

# define PI           3.14159265358979323846

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

GLfloat j = 0.1f;//wind mill roatation
GLfloat k = 0.1f;//wind mill roatation


//clock
GLfloat s = 0.0f;
GLfloat m = 0.0f;
GLfloat h = 0.0f;


void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

void display() {
	glClearColor(0.0f, 0.5f, 0.9f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)





    //Green garden
    glBegin(GL_QUADS);
    glColor3ub(16, 176, 6);
    glVertex2f(-1.0f,-0.8f);
    glVertex2f(-1.0f,-1.0f);
    glVertex2f(1.0f,-1.0f);
    glVertex2f(1.0f,-0.8f);
    glEnd();

    //Airport Road
    glBegin(GL_QUADS);
    glColor3ub(136, 143, 136);
    glVertex2f(-1.0f,-0.2f);
    glVertex2f(-1.0f,-0.8f);
    glVertex2f(1.0f,-0.8f);
    glVertex2f(1.0f,-0.2f);
    glEnd();

      //plane
    glBegin(GL_QUADS);
    glColor3ub(240, 243, 244);
    glVertex2f(-0.8f,-0.4f);
    glVertex2f(-0.8f,-0.6f);
    glVertex2f(-0.3f,-0.6f);
    glVertex2f(-0.3f,-0.4f);
    glEnd();

int i;

	GLfloat x=-.3f; GLfloat y=-.5f; GLfloat radius =.1f;
	int triangleAmount = 21; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(240, 243, 244);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//plane triangle

     glBegin(GL_TRIANGLES);
    glColor3ub(240, 243, 244);
    glVertex2f(-0.8f,-0.3f);
    glVertex2f(-0.8f,-0.4f);
    glVertex2f(-0.7f,-0.4f);
    glEnd();

       //plane winges lower
    glBegin(GL_QUADS);
    glColor3ub(240, 243, 244);
    glVertex2f(-0.5f,-0.5f);
    glVertex2f(-0.66f,-0.7f);
    glVertex2f(-0.6f,-0.7f);
    glVertex2f(-0.4f,-0.5f);
    glEnd();

       //plane winges upper
    glBegin(GL_QUADS);
    glColor3ub(240, 243, 244);
    glVertex2f(-0.6f,-0.3f);
    glVertex2f(-0.5f,-0.45f);
    glVertex2f(-0.4f,-0.45f);
    glVertex2f(-0.55f,-0.3f);
    glEnd();

      //plane wheel stanf left
    glBegin(GL_QUADS);
    glColor3ub(240, 243, 244);
    glVertex2f(-0.74f,-0.6f);
    glVertex2f(-0.74f,-0.65f);
    glVertex2f(-0.73f,-0.65f);
    glVertex2f(-0.73f,-0.6f);
    glEnd();

    //plane wheel
    int w;

	GLfloat x1=-.735f; GLfloat y1=-.66f; GLfloat radius1 =.020f;
	int triangleAmount1 = 9; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x1, y1); // center of circle
		for(w = 0; w <= triangleAmount1;w++) {
			glVertex2f(
		            x1 + (radius1 * cos(w *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(w * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


      //plane wheel stand right
    glBegin(GL_QUADS);
    glColor3ub(240, 243, 244);
    glVertex2f(-0.44f,-0.6f);
    glVertex2f(-0.44f,-0.65f);
    glVertex2f(-0.43f,-0.65f);
    glVertex2f(-0.43f,-0.6f);
    glEnd();

     //plane wheel 2
    int wr;

	GLfloat x2=-.435f; GLfloat y2=-0.66f; GLfloat radius2 =.020f;
	int triangleAmount2 = 12; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x2, y2); // center of circle
		for(wr = 0; wr <= triangleAmount2;wr++) {
			glVertex2f(
		            x2 + (radius2 * cos(wr *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(wr * twicePi2 / triangleAmount2))
			);
		}
	glEnd();



    //Bilding 1

     glBegin(GL_QUADS);
    glColor3ub(40, 55, 71);
    glVertex2f(-0.8f,0.3f);
    glVertex2f(-0.8f,-0.2f);
    glVertex2f(-0.5f,-0.2f);
    glVertex2f(-0.5f,0.3f);
    glEnd();

    //window 1 2 3 4

         glBegin(GL_QUADS);
    glColor3ub(240, 243, 244);
    glVertex2f(-0.75f,0.25f);
    glVertex2f(-0.75f,0.15f);
    glVertex2f(-0.55f,0.15f);
    glVertex2f(-0.55f,0.25f);
    glEnd();

             glBegin(GL_QUADS);
    glColor3ub(240, 243, 244);
    glVertex2f(-0.75f,0.05f);
    glVertex2f(-0.75f,-0.05f);
    glVertex2f(-0.55f,-0.05f);
    glVertex2f(-0.55f,0.05f);
    glEnd();

             glBegin(GL_QUADS);
    glColor3ub(240, 243, 244);
    glVertex2f(-0.7f,-0.1f);
    glVertex2f(-0.7f,-0.2f);
    glVertex2f(-0.6f,-0.2f);
    glVertex2f(-0.6f,-0.1f);
    glEnd();

    //Bilding 2 with circle

     glBegin(GL_QUADS);
    glColor3ub(211, 84, 0);
    glVertex2f(-0.4f,0.2f);
    glVertex2f(-0.4f,-0.2f);
    glVertex2f(-0.3f,-0.2f);
    glVertex2f(-0.3f,0.2f);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(240, 243, 244);
    glVertex2f(-0.45f,0.25f);
    glVertex2f(-0.45f,0.2f);
    glVertex2f(-0.25f,0.2f);
    glVertex2f(-0.25f,0.25f);
    glEnd();

      //building circle
    int bc;//building circle

	GLfloat x3=-.35f; GLfloat y3=0.35f; GLfloat radius3 =.1f;
	int triangleAmount3 = 9; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(40, 55, 71);
		glVertex2f(x3, y3); // center of circle
		for(bc = 0; bc <= triangleAmount3;bc++) {
			glVertex2f(
		            x3 + (radius3 * cos(bc *  twicePi3 / triangleAmount3)),
			    y3 + (radius3 * sin(bc * twicePi3 / triangleAmount3))
			);
		}
	glEnd();



    //windmill
    //stand

     glBegin(GL_QUADS);
    glColor3ub(231, 76, 60);
    glVertex2f(-0.02f,0.2f);
    glVertex2f(-0.02f,-0.2f);
    glVertex2f(0.0f,-0.2f);
    glVertex2f(0.0f,0.2f);
    glEnd();

    //fan left

     //rotation
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack,
glTranslatef(-0.01f,0.21f,0.0f);
    glRotatef(k,0.0,0.0,1.0);//

    glBegin(GL_TRIANGLES);
    glColor3ub(240, 243, 244);
    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.16f,0.2f);
    glVertex2f(-0.16f,0.22f);

    glEnd();
    glPopMatrix();
    glLoadIdentity();
    k+=0.1f;

//-------------------------------------------------


    //rotation
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack,
    glTranslatef(-0.01f,0.21f,0.0f);
    glRotatef(-j,0.0,0.0,1.0);//i=how many degree you want to rotate around an axis

    //fan right

    glBegin(GL_TRIANGLES);

    glColor3ub(240, 243, 244);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.14f,0.2f);
    glVertex2f(0.14f,0.22f);
    glEnd();
    glPopMatrix();//glPopMatrix pops the top matrix off the stack
    j+=0.1f;//i=i+.1=.2
    glLoadIdentity();
    //--------------------------------------

    //clock
    //minute


    //---------------

  glBegin(GL_QUADS);
    glColor3ub(240, 243, 244);
    glVertex2f(0.4f,0.7f);
    glVertex2f(0.4f,0.2f);
    glVertex2f(0.9f,0.2f);
    glVertex2f(0.9f,0.7f);
    glEnd();

    ////

     glPushMatrix();
     glTranslatef(0.65f,0.45f,0.0f);
     glScalef(.28f,.28f,0.0f);
    glRotatef(s,0.0,0.0,0.1);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f); // second
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.65f, 0.65f);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.65f,0.45f,0.0f);
    glScalef(.2f,.3f,0.0f);
    glRotatef(m,0.0,0.0,0.1);
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);  //minute
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.10f, 0.45f);

    glEnd();
    glPopMatrix();
    glLoadIdentity();



    glPushMatrix();
    glTranslatef(0.65f,0.45f,0.0f);
    glScalef(.3f,.2f,0.0f);
    glRotatef(h,0.0,0.0,0.1);
    glLineWidth(5.0f);
    glBegin(GL_LINES);
    glColor3ub(120, 255, 255);  // Hour
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.65f, 0.25f);


    glEnd();
    glPopMatrix();

     s-=0.0075f;
    if(s<=-360)
        {
            if(m<=-360)
            {
                h-=5.0f;     //check if the minutes dials complete 360 rotation
                s=0.0f;
                m=0.0f;
            }
            else
                {
                    m-=6.0f;
                    s=0.0f;
            }

         }



glFlush();  // Render now
}





/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
