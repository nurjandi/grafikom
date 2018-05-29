#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <GL/glut.h>
#include<math.h> 

const double PI = 3.141592653589793;

void init()
{
    // warna background menggunakan RGBA
    glClearColor(0.196078, 0.6, 0.8, 0.0);
    
    glMatrixMode(GL_PROJECTION);
    //set gambar 2D
    gluOrtho2D(0.0, 1024, 0.0, 768);
}

void Tampilan (void)
{	
	glClear(GL_COLOR_BUFFER_BIT);
	//gunung 1
	glColor3f(0.137255, 0.556863, 0.137255);
    glBegin(GL_POLYGON);
    glVertex2i(256, 600);
    glVertex2i(0, 300);
    glVertex2i(512, 300);
    glVertex2i(512, 350);
    glEnd();	
   	
   	//gunung 2
   	glColor3f(0.137255, 0.556863, 0.137255);
    glBegin(GL_POLYGON);
    glVertex2i(768, 600);
    glVertex2i(512, 350);
    glVertex2i(512, 300);
    glVertex2i(1024, 300);
    glEnd();	
   	
   	
	//matahari
    glColor3f(1.0, 1.0,0.0);
	glBegin(GL_POLYGON);
    for(int i=0;i<=360;i++){
    	float sudut = i+(PI/360);
    	float x = 45*cos(sudut);
    	float y = 45*sin(sudut);
    	glVertex2f(x+500,y+600);
    }
    glEnd();
    glColor3f(1.0,0.5,0.0);
    glLineWidth(3);
	glBegin(GL_LINES);
    for(int i=0;i<=60;i++){
    	float sudut = i+(PI/360);
    	float x = 50*cos(sudut);
    	float y = 50*sin(sudut);
    	glVertex2f(x+500,y+600);
    }
    glEnd();
    
    //awan 1
    glColor3f(248, 248, 255);
    glBegin(GL_POLYGON);
    for(int i=0;i<=360;i++){
    	float sudut = i+(PI/360);
    	float x = 50*cos(sudut);
    	float y = 20*sin(sudut);
    	glVertex2f(x+200,y+650);
    }
    glEnd();
    glColor3f(248, 248, 255);
    glBegin(GL_POLYGON);
    for(int i=0;i<=360;i++){
    	float sudut = i+(PI/360);
    	float x = 50*cos(sudut);
    	float y = 20*sin(sudut);
    	glVertex2f(x+250,y+680);
    }
    glEnd();
    glColor3f(248, 248, 255);
    glBegin(GL_POLYGON);
    for(int i=0;i<=360;i++){
    	float sudut = i+(PI/360);
    	float x = 20*cos(sudut);
    	float y = 10*sin(sudut);
    	glVertex2f(x+230,y+670);
    }
    glEnd();
    
    //awan 2
    glColor3f(248, 248, 255);
    glBegin(GL_POLYGON);
    for(int i=0;i<=360;i++){
    	float sudut = i+(PI/360);
    	float x = 50*cos(sudut);
    	float y = 10*sin(sudut);
    	glVertex2f(x+660,y+650);
    }
    glEnd();
    glColor3f(248, 248, 255);
    glBegin(GL_POLYGON);
    for(int i=0;i<=360;i++){
    	float sudut = i+(PI/360);
    	float x = 60*cos(sudut);
    	float y = 10*sin(sudut);
    	glVertex2f(x+750,y+630);
    }
    glEnd();
    
    //burung
    glColor3f(0, 0, 0); 
	glLineWidth(3);
		glBegin(GL_LINES);
	    glVertex2f(720,700);
	    glVertex2f(730,720);
	glEnd();
	glLineWidth(3);
		glBegin(GL_LINES);
	    glVertex2f(730,720);
	    glVertex2f(750,700);
	glEnd();
	glLineWidth(3);
		glBegin(GL_LINES);
	    glVertex2f(750,700);
	    glVertex2f(770,720);
	glEnd();
	glLineWidth(3);
		glBegin(GL_LINES);
	    glVertex2f(770,720);
	    glVertex2f(780,700);
	glEnd();
	
	//burung 2
	 glColor3f(0, 0, 0); 
	glLineWidth(3);
		glBegin(GL_LINES);
	    glVertex2f(800,640);
	    glVertex2f(820,660);
	glEnd();
	glLineWidth(3);
		glBegin(GL_LINES);
	    glVertex2f(820,660);
	    glVertex2f(840,640);
	glEnd();
	glLineWidth(3);
		glBegin(GL_LINES);
	    glVertex2f(840,640);
	    glVertex2f(860,660);
	glEnd();
	glLineWidth(3);
		glBegin(GL_LINES);
	    glVertex2f(860,660);
	    glVertex2f(880,640);
	glEnd();
	
	//jalan
	glColor3f(0.502, 0.502, 0.502);
    glBegin(GL_POLYGON);
    glVertex2i(488, 300);
    glVertex2i(536, 300);
    glVertex2i(560, 0);
    glVertex2i(462, 0);
    glEnd();
	
    glFlush();
}
int main(int argc, char ** argv)
{
    // Initialize GLUT
    glutInit(&argc, argv);
    // Set display mode
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    // Set top - left display window position.
    glutInitWindowPosition(0, 0);
    // Set display window width and height
    glutInitWindowSize(1024, 768);
    // Create display window with the given title
    glutCreateWindow("UAS GRAFIKA KOMPUTER - B - Nurjandi Abdillah(1157050124) - M Adam Dzulqarnain (1157050100)");
    // Execute initialization procedure
    init();
    // Send graphics to display window
    glutDisplayFunc(Tampilan);
    // Display everything and wait.
    glutMainLoop();
}

