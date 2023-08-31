#include <GL/glut.h>
 #include <math.h>

void inicio(){
glMatrixMode(GL_PROJECTION);
 gluortho2D(-15,15,-15,15);
glClearColor(0.0,0.0,0.0,0.0);

}

void dibujar(){
glClear (GL_COLOR_BUFFER_BIT); 
glPointSize(3);

glBegin(GL_LINES);
glColor3f(1.0,1.0,1.0);
 glVertex2i(15,0);
glVertex2i(-15,0);
glVertex2i(0,15);
 glVertex2i(0,-15);
glEnd();

glBegin(GL_POINTS);
glColor3f(1.0, 1.0, 1.0);
glVertex2i(2,4);
glVertex2i(6,4);
 glVertex2i(7,6);
glVertex2i(12,7);
 glEnd();

glBegin(GL_LINE_STRIP);
glColor3f (1.0,0.0,0.0);
 float x,y;
for (x-2.0;x<-6.0;x+=0.01){
y=(0*x)+4;
 glVertex2f(x,y);
 }
 glEnd();

glBegin(GL_LINE_STRIP); 
glColor3f(1.0,0.0,0.0); 
float x2,y2; 
for (x2-6.0;x2<=7.0;x2+=0.01){
 y2=(2*x2)-8;
  glVertex2f(x2,y2);
}
glEnd();

glBegin(GL_LINE_STRIP);
 glColor3f(1.0, 0.0,0.0);
  float x3,y3; 
  for (x3=7-0;x3<=12.0;x3+=0.01){ 
  y3=((0.2)*x3)+(4.6);
   glVertex2f(x3,y3);
}
glEnd();

glBegin(GL_LINE_STRIP);//Verde
 glColor3f(0.192,8.952,0.988);
 float xc,yc;
  for (xc=2.0; xc<=6.8;xc+=0.01){
   yc=0*pow(xc, 2)+0*xc+4;
    glVertex2f(xc.yc);
}
glEnd();

glBegin(GL_LINE_STRIP)/Azul 
glColor3f(0.192,0.952,0.988); 
float xc2,yc2; 
for(xc2=6.8;xc2<=7.0;xc2+=0.01){ 
yc2=2*pow(xc2,2)-24*xc2+76;
 glVertex2f(xc2,yc2);
}
glEnd();


glBegin(GL_LINE_STRIP);//Rojo
 glColor3f(8.192,8.952,0.988);
float xc3, yc3;
for (xc3=7.0;xc3<=12.0; xc3+=0.01{  
yc3=-0.76*pow(xc3,2)+14.64*xc3-59.24; 
glVertex2f(xc3, yc3);
}
glEnd();
 glFlush();
}

int main(int a, char*arg[]{
glutInit(&a, arg);
glutInitWindowSize (640,480);
glutinitWindowPosition (10,10);
glutInitDisplayMode (GLUT_RGB | GLUT SINGLE);
glutCreateWindow("Grafica");
inicio();
glutDisplayFunc(dibujar); 
glutMainLoop();
 return EXIT_SUCCESS;
