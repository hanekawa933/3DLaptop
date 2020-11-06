#include <GL/glut.h>

char title[] = "2018104313 - Muhammad Iqbal Ramadhan";
GLfloat rotasi_laptop = 0.0f;
int refreshMills = 15;

void initGL() {
glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 
glClearDepth(1.0f); 
glEnable(GL_DEPTH_TEST); 
glDepthFunc(GL_LEQUAL); 
glShadeModel(GL_SMOOTH);
glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void keyboard_caps(float vertex_kiri, float vertex_kanan, float ditambah, float z_atas, float z_bawah){
// Bagian Pertama Keyboard Caps Pada Laptop (Keyboard Caps)
glColor3f(0.0f, 0.0f, 0.0f);
glVertex3f(vertex_kanan+ditambah, -0.1001f,	z_atas);
glVertex3f(vertex_kiri+ditambah, -0.1001f,	z_atas);
glVertex3f(vertex_kiri+ditambah, -0.1001f, z_bawah);
glVertex3f(vertex_kanan+ditambah, -0.1001f, z_bawah);
}


void display() {
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glMatrixMode(GL_MODELVIEW);

// Render Laptop
glLoadIdentity();
glTranslatef(0.0f, 0.0f, -7.0f);
glRotatef(rotasi_laptop, 1.0f, 0.0f, 0.0f);
glRotatef(rotasi_laptop, 1.0f, 1.0f, 0.0f);
glRotatef(rotasi_laptop, 1.0f, 0.0f, 1.0f);

glBegin(GL_QUADS);
// mendefinisikan vertex secara counter-clockwise (CCW) 
// Bagian Bawah Laptop
glColor3f(0.0f, 0.0f, 0.0f);
glVertex3f( 3.0f, 0.1f, -1.0f);
glVertex3f(-1.0f, 0.1f, -1.0f);
glVertex3f(-1.0f, 0.1f,	1.0f); 
glVertex3f( 3.0f, 0.1f,	1.0f);

// Bagian Atas Laptop (Keyboard)
glColor3f(1.0f, 0.0f, 0.0f);
glVertex3f( 3.0f, -0.1f,	1.0f);
glVertex3f(-1.0f, -0.1f,	1.0f);
glVertex3f(-1.0f, -0.1f, -1.0f);
glVertex3f( 3.0f, -0.1f, -1.0f);

keyboard_caps(-0.8f, -0.5f, 0, 0.7f, 0.5f);
keyboard_caps(-0.8f, -0.5f, 0.4, 0.7f, 0.5f);
keyboard_caps(-0.8f, -0.5f, 0.8, 0.7f, 0.5f);
keyboard_caps(-0.8f, -0.5f, 1.2, 0.7f, 0.5f);
keyboard_caps(-0.8f, -0.5f, 1.6, 0.7f, 0.5f);
keyboard_caps(-0.8f, -0.5f, 2.0, 0.7f, 0.5f);
keyboard_caps(-0.8f, -0.5f, 2.4, 0.7f, 0.5f);
keyboard_caps(-0.8f, -0.5f, 2.8, 0.7f, 0.5f);
keyboard_caps(-0.8f, -0.5f, 3.2, 0.7f, 0.5f);

keyboard_caps(-0.8f, -0.5f, 0, 0.4f, 0.2f);
keyboard_caps(-0.8f, -0.5f, 0.4, 0.4f, 0.2f);
keyboard_caps(-0.8f, -0.5f, 0.8, 0.4f, 0.2f);
keyboard_caps(-0.8f, -0.5f, 1.2, 0.4f, 0.2f);
keyboard_caps(-0.8f, -0.5f, 1.6, 0.4f, 0.2f);
keyboard_caps(-0.8f, -0.5f, 2.0, 0.4f, 0.2f);
keyboard_caps(-0.8f, -0.5f, 2.4, 0.4f, 0.2f);
keyboard_caps(-0.8f, -0.5f, 2.8, 0.4f, 0.2f);
keyboard_caps(-0.8f, -0.5f, 3.2, 0.4f, 0.2f);

keyboard_caps(-0.8f, -0.5f, 0, 0.1f, -0.1f);
keyboard_caps(-0.8f, -0.5f, 0.4, 0.1f, -0.1f);
keyboard_caps(-0.8f, -0.5f, 0.8, 0.1f, -0.1f);
keyboard_caps(-0.8f, -0.5f, 1.2, 0.1f, -0.1f);
keyboard_caps(-0.8f, -0.5f, 1.6, 0.1f, -0.1f);
keyboard_caps(-0.8f, -0.5f, 2.0, 0.1f, -0.1f);
keyboard_caps(-0.8f, -0.5f, 2.4, 0.1f, -0.1f);
keyboard_caps(-0.8f, -0.5f, 2.8, 0.1f, -0.1f);
keyboard_caps(-0.8f, -0.5f, 3.2, 0.1f, -0.1f);

keyboard_caps(-0.8f, -0.5f, 0, -0.2f, -0.4f);
keyboard_caps(-0.8f, -0.5f, 0.4, -0.2f, -0.4f);
keyboard_caps(-0.8f, -0.5f, 0.8, -0.2f, -0.4f);
keyboard_caps(-0.8f, -0.5f, 1.2, -0.2f, -0.4f);
keyboard_caps(-0.8f, -0.5f, 1.6, -0.2f, -0.4f);
keyboard_caps(-0.8f, -0.5f, 2.0, -0.2f, -0.4f);
keyboard_caps(-0.8f, -0.5f, 2.4, -0.2f, -0.4f);
keyboard_caps(-0.8f, -0.5f, 2.8, -0.2f, -0.4f);
keyboard_caps(-0.8f, -0.5f, 3.2, -0.2f, -0.4f);

// Touchpad 
glColor3f(0.0f, 0.0f, 0.0f);
glVertex3f( 0.4f, -0.1001f, -0.5);
glVertex3f(1.5f, -0.1001f,	-0.5);
glVertex3f(1.5f, -0.1001f, -0.9);
glVertex3f( 0.4f, -0.1001f, -0.9);

// Bagian Belakang Laptop
glColor3f(0.0f, 0.0f, 0.0f);
glVertex3f( 3.0f,	0.0f, 1.0f); 
glVertex3f(-1.0f,	0.0f, 1.0f);
glVertex3f(-1.0f, -2.0f, 1.0f);
glVertex3f( 3.0f, -2.0f, 1.0f);

// Bagian Depan Laptop (Monitor)
glColor3f(0.0f, 0.0f, 0.0f); 
glVertex3f( 3.0f, -2.0f, 0.9f);
glVertex3f(-1.0f, -2.0f, 0.9f);
glVertex3f(-1.0f,	0.0f, 0.9f);
glVertex3f( 3.0f,	0.0f, 0.9f);

// Bagian Depan Laptop (LCD)
glColor3f(0.0f, 0.0f, 0.0f); 
glVertex3f( 2.8f, -1.9f, 0.89f);
glVertex3f(-0.8f, -1.9f, 0.89f);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex3f(-0.8f, -0.3f, 0.89f);
glVertex3f( 2.8f,	-0.3f, 0.89f);

// Sisi Samping Kiri Laptop
glColor3f(0.5f, 0.5f, 0.5f);	
glVertex3f(-1.0f,	0.1f,	1.0f);
glVertex3f(-1.0f,	0.1f, -1.0f);
glVertex3f(-1.0f, -0.1f, -1.0f);
glVertex3f(-1.0f, -0.1f,	1.0f);

// Sisi Samping Kanan Laptop
glColor3f(0.5f, 0.5f, 0.5f);	
glVertex3f(3.0f,	0.1f, -1.0f); 
glVertex3f(3.0f,	0.1f,	1.0f); 
glVertex3f(3.0f, -0.1f,	1.0f);
glVertex3f(3.0f, -0.1f, -1.0f); 

// Bagian Belakang Laptop (Kipas)
glColor3f(1.0f, 0.0f, 0.0f);	
glVertex3f( 3.0f,	0.1f, 1.001f); 
glVertex3f(-1.0f,	0.1f, 1.001f);
glVertex3f(-1.0f, -0.1f, 1.001f);
glVertex3f( 3.0f, -0.1f, 1.001f);

// Bagian Depan Laptop (Sisi 3D)
glColor3f(0.5f, 0.5f, 0.5f);
glVertex3f( 3.0f, -0.1f, -1.0f);
glVertex3f(-1.0f, -0.1f, -1.0f);
glVertex3f(-1.0f,	0.1f, -1.0f);
glVertex3f( 3.0f,	0.1f, -1.0f);

// Bagian Samping Kiri Layar Laptop 
glColor3f(0.5f, 0.5f, 0.5f);	
glVertex3f(-1.0f,	0.1f,	0.9f);
glVertex3f(-1.0f,	0.1f, 1.0f);
glVertex3f(-1.0f, -2.0f, 1.0f);
glVertex3f(-1.0f, -2.0f,	0.9f);

// Bagian Samping Kanan Layar Laptop
glColor3f(0.5f, 0.5f, 0.5f);	
glVertex3f(3.0f,	-0.1f, 0.9f); 
glVertex3f(3.0f,	-0.1f,	1.0f); 
glVertex3f(3.0f, -2.0f,	1.0f);
glVertex3f(3.0f, -2.0f, 0.9f); 

// Bagian Atas Layar Laptop 
glColor3f(0.5f, 0.5f, 0.5f);
glVertex3f( 3.0f, -2.0f, 1.0);
glVertex3f(-1.0f, -2.0f, 1.0f);
glVertex3f(-1.0f, -2.0f, 0.9);
glVertex3f( 3.0f, -2.0f, 0.9f);
glEnd();

glutSwapBuffers();
rotasi_laptop -= 0.5;
rotasi_laptop += 1.0;
}

void timer(int value) { 
glutPostRedisplay(); 
glutTimerFunc(refreshMills, timer, 0);
}

void reshape(GLsizei width, GLsizei height) { 
if (height == 0) height = 1;
GLfloat aspect = (GLfloat)width / (GLfloat)height; 
glViewport(0, 0, width, height); glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(45.0f, aspect, 0.1f, 100.0f);
}

int main(int argc, char** argv) { 
glutInit(&argc, argv); 
glutInitDisplayMode(GLUT_DOUBLE); 
glutInitWindowSize(1280, 780);
glutInitWindowPosition(50, 50); 
glutCreateWindow(title); 
glutDisplayFunc(display); 
glutReshapeFunc(reshape); initGL();
glutTimerFunc(0, timer, 0); 
glutMainLoop();
return 0;
}


