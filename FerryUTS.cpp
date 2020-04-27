#include <iostream>
#include<stdlib.h>
#include<glut.h>
#include <math.h>

float a = 0;
float b = 0;
int i;
const double PI = 3.14;
void lingkaran(int jari2, int jumlah_titik, int x_tengah, int y_tengah) {
    glBegin(GL_POLYGON);
    for (i = 0; i <= 360; i++) {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + jari2 * cos(sudut);
        float y = y_tengah + jari2 * sin(sudut);
        glVertex2f(x, y);
    }
    glEnd();
}
void userdraw() {//langit
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 200);
    glVertex2f(-20, 20);
    glVertex2f(20, 20);
    glColor3f(0.5, 1.0, 1.0);
    glVertex2f(20, -20);
    glVertex2f(-20, -20);
    glEnd();
}

void draw() {  //burung
    glColor3f(0, 1, 1);//kepala
    lingkaran(1, 60, -17, 2);
    glColor3f(0.0, 1.0, 1.0);//paruh
    glBegin(GL_TRIANGLES);
    glVertex2f(-15.5, 1.5);
    glVertex2f(-16.5, 2.2);
    glVertex2f(-16.5, 1);
    glEnd();
    //sayap
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-18.5, 1.5);
    glVertex2f(-17.5, 1.5);
    glVertex2f(-18, 0.5);
    glVertex2f(-19.5, 0.5);
    glEnd();
    glColor3f(0.0, 1.0, 1.0);//badan
    glBegin(GL_POLYGON);
    glVertex2f(-17.7, 1.5);
    glVertex2f(-16.3, 1.5);
    glVertex2f(-17.2, -0.8);
    glVertex2f(-18.5, -1);
    glEnd();
    glColor3f(0.0, 1.0, 1.0);//ekor
    glBegin(GL_TRIANGLES);
    glVertex2f(-18, -1);
    glVertex2f(-19.2, -0.5);
    glVertex2f(-19.2, -1);
    glEnd();
}

void renderScene()
{
    glClear(GL_COLOR_BUFFER_BIT);
    userdraw();
    //tiang dari kanan ke kiri
    //atas
    glColor3f(0.2, 0.9, 0.2);
    glBegin(GL_POLYGON);
    glVertex2i(17, 20);
    glVertex2i(15, 20);
    glVertex2i(15, 2);
    glVertex2i(17, 2);
    glEnd();
    glColor3f(0.2, 0.9, 0.2);
    glBegin(GL_POLYGON);
    glVertex2i(12, 20);
    glVertex2i(10, 20);
    glVertex2i(10, 6);
    glVertex2i(12, 6);
    glEnd();
    glColor3f(0.2, 0.9, 0.2);
    glBegin(GL_POLYGON);
    glVertex2i(7, 20);
    glVertex2i(5, 20);
    glVertex2i(5, 4);
    glVertex2i(7, 4);
    glEnd();
    glColor3f(0.2, 0.9, 0.2);
    glBegin(GL_POLYGON);
    glVertex2i(2, 20);
    glVertex2i(0, 20);
    glVertex2i(0, 6);
    glVertex2i(2, 6);
    glEnd();
    glColor3f(0.2, 0.9, 0.2);
    glBegin(GL_POLYGON);
    glVertex2i(-6, 20);
    glVertex2i(-4, 20);
    glVertex2i(-4, 3);
    glVertex2i(-6, 3);
    glEnd();
    glColor3f(0.2, 0.9, 0.2);
    glBegin(GL_POLYGON);
    glVertex2i(-11, 20);
    glVertex2i(-9, 20);
    glVertex2i(-9, 6);
    glVertex2i(-11, 6);
    glEnd();
    glColor3f(0.2, 0.9, 0.2);
    glBegin(GL_POLYGON);
    glVertex2i(-16, 20);
    glVertex2i(-14, 20);
    glVertex2i(-14, 4);
    glVertex2i(-16, 4);
    glEnd();
    //bawah
    glColor3f(0.2, 0.9, 0.2);
    glBegin(GL_POLYGON);
    glVertex2i(16, -3);
    glVertex2i(14, -3);
    glVertex2i(14, -20);
    glVertex2i(16, -20);
    glEnd();
    glColor3f(0.2, 0.9, 0.2);
    glBegin(GL_POLYGON);
    glVertex2i(11, 0);
    glVertex2i(9, 0);
    glVertex2i(9, -20);
    glVertex2i(11, -20);
    glEnd();
    glColor3f(0.2, 0.9, 0.2);
    glBegin(GL_POLYGON);
    glVertex2i(6, -2);
    glVertex2i(4, -2);
    glVertex2i(4, -20);
    glVertex2i(6, -20);
    glEnd();
    glColor3f(0.2, 0.9, 0.2);
    glBegin(GL_POLYGON);
    glVertex2i(1, 0);
    glVertex2i(-1, 0);
    glVertex2i(-1, -20);
    glVertex2i(1, -20);
    glEnd();
    glColor3f(0.2, 0.9, 0.2);
    glBegin(GL_POLYGON);
    glVertex2i(-7, -3);
    glVertex2i(-5, -3);
    glVertex2i(-5, -20);
    glVertex2i(-7, -20);
    glEnd();
    glColor3f(0.2, 0.9, 0.2);
    glBegin(GL_POLYGON);
    glVertex2i(-12, 0);
    glVertex2i(-10, 0);
    glVertex2i(-10, -20);
    glVertex2i(-12, -20);
    glEnd();
    glColor3f(0.2, 0.9, 0.2);
    glBegin(GL_POLYGON);
    glVertex2i(-17, -2);
    glVertex2i(-15, -2);
    glVertex2i(-15, -20);
    glVertex2i(-17, -20);
    glEnd();

    glPushMatrix();
    glTranslatef(a, b, 0);
    draw();
    glPopMatrix();
    glFlush();
}

void myKeyboard(unsigned char key, int x, int y) {
    if (key == 'a') a -= 1;
    else if (key == 'd') a += 1;
    else if (key == 'w') b += 1;
    else if (key == 's') b -= 1;
}

void update(int value) {
    glutPostRedisplay();
    glutTimerFunc(50, update, 0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(600, 400);
    glutCreateWindow("Burung Go!");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    gluOrtho2D(-20., 20., -20.0, 20.0);
    glutDisplayFunc(renderScene);
    glutKeyboardFunc(myKeyboard);
    glutTimerFunc(1000, update, 0);
    glutMainLoop();
}