#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <GL/glut.h>
#include<math.h> 

const double PI = 3.141592653589793;
float twoPI = 2 * PI;

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
	glColor3f(0.133, 0.545, 0.133);
    glBegin(GL_POLYGON);
    glVertex2i(256, 600);
    glVertex2i(0, 300);
    glVertex2i(512, 300);
    glVertex2i(512, 350);
    glEnd();	
   	
   	//gunung 2
   	glColor3f(0.000, 0.502, 0.000);
    glBegin(GL_TRIANGLES);
    //glVertex2i(768, 600);
    glVertex2i(1024, 300);
    glVertex2i(350, 300);
    glVertex2i(768, 600);
    
    glEnd();	
   	
   	
	//matahari
    glColor3f(1.000, 0.843, 0.000);
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
	
	//sawah
	glColor3f(0.678, 1.000, 0.184);
    glBegin(GL_POLYGON);
    glVertex2i(0, 300);
    glVertex2i(488, 300);
    glVertex2i(462, 0);
    glVertex2i(0, 0);
    glEnd();
	
	//garis-garis sawah
	int bawah_x = 0;
	int atas_x = 150;
	for(int i=0; i<4; i++){
	    glColor3f(0.545, 0.271, 0.075); 
		glLineWidth(3);
			glBegin(GL_LINES);
		    glVertex2f(bawah_x,0);
		    glVertex2f(atas_x,300);
		glEnd();		
		bawah_x = bawah_x+100;
		atas_x = atas_x+100;
	}
	
	glColor3f(0.545, 0.271, 0.075); 
	glLineWidth(3);
		glBegin(GL_LINES);
		glVertex2f(0,100);
	    glVertex2f(512,100);
	glEnd();
	
	glColor3f(0.545, 0.271, 0.075); 
	glLineWidth(3);
		glBegin(GL_LINES);
		glVertex2f(0,200);
	    glVertex2f(512,200);
	glEnd();
	//akhir garis-garis sawah
		
	
	//tanah rumah
	glColor3f(0.565, 0.933, 0.565);
	glBegin(GL_POLYGON);
	glVertex2i(536, 300);
    glVertex2i(1024, 300);
    glVertex2i(1024, 0);
    glVertex2i(550, 0);
    glEnd();
    
    //pohon
    glColor3f(0.000, 0.392, 0.000);
	glBegin(GL_TRIANGLES);
	glVertex2i(600, 270);
    glVertex2i(625, 200);
    glVertex2i(575, 200);
    glEnd();
    
    glColor3f(0.000, 0.502, 0.000);
	glBegin(GL_TRIANGLES);
    glVertex2i(600, 270);
    glVertex2i(575, 200);
    glVertex2i(600, 200);
    glEnd();
    
    glColor3f(0.627, 0.322, 0.176);
	glBegin(GL_POLYGON);
    glVertex2i(595, 200);
    glVertex2i(605, 200);
    glVertex2i(605, 170);
    glVertex2i(595, 170);
    glEnd();
    
    //pohon 2
    glColor3f(0.000, 0.392, 0.000);
	glBegin(GL_TRIANGLES);
	glVertex2i(650, 280);
    glVertex2i(675, 210);
    glVertex2i(625, 210);
    glEnd();
    
    glColor3f(0.000, 0.502, 0.000);
	glBegin(GL_TRIANGLES);
    glVertex2i(650, 280);
    glVertex2i(625, 210);
    glVertex2i(650, 210);
    glEnd();
    
    glColor3f(0.627, 0.322, 0.176);
	glBegin(GL_POLYGON);
    glVertex2i(645, 210);
    glVertex2i(655, 210);
    glVertex2i(655, 180);
    glVertex2i(645, 180);
    glEnd();
    
    //rumah balok
    glColor3f(1.000, 0.871, 0.678);
	glBegin(GL_POLYGON);
    glVertex2i(700, 150);
    glVertex2i(950, 150);
    glVertex2i(950, 30);
    glVertex2i(700, 30);
    glEnd();
    
    glColor3f(0.871, 0.722, 0.529);
	glBegin(GL_POLYGON);
    glVertex2i(950, 150);
    glVertex2i(990, 200);
    glVertex2i(990, 80);
    glVertex2i(950, 30);
    glEnd();
    
    //atap
    
    glColor3f(0.804, 0.361, 0.361);
	glBegin(GL_POLYGON);
    glVertex2i(700, 150);
    glVertex2i(730, 250);
    glVertex2i(980, 250);
    glVertex2i(950, 150);
    glEnd();
    
    glColor3f(0.824, 0.706, 0.54);
	glBegin(GL_TRIANGLES);
    glVertex2i(950, 150);
    glVertex2i(980, 250);
    glVertex2i(990, 200);
    
    glEnd();
    	
	//jalan
	glColor3f(0.502, 0.502, 0.502);
    glBegin(GL_POLYGON);
    glVertex2i(488, 300);
    glVertex2i(536, 300);
    glVertex2i(560, 0);
    glVertex2i(462, 0);
    glEnd();
    
	//garis putus putus
	glColor3f(248, 248, 255);
    glBegin(GL_LINES);
    for(int i=0; i<10; i++){
    	glVertex2i(512, 300 - (i*30));
    }
	glEnd();
    
    //pintu
    glColor3f(0.824, 0.706, 0.54);
	glBegin(GL_POLYGON);
    glVertex2i(840, 120);
    glVertex2i(920, 120);
    glVertex2i(920, 30);
    glVertex2i(840, 30);
    glEnd();
    
    //garis pintu
    glColor3f(1.000, 0.871, 0.678);
    glBegin(GL_LINES);
    glLineWidth(1);
    glVertex2i(880, 120);
    glVertex2i(880, 30);
    glEnd();
    
    //gagang pintu
    
    glColor3f(0.737, 0.561, 0.561);
	glBegin(GL_POLYGON);
    glVertex2i(870, 80);
    glVertex2i(875, 80);
    glVertex2i(875, 50);
    glVertex2i(870, 50);
    glEnd();
    
    glColor3f(0.737, 0.561, 0.561);
	glBegin(GL_POLYGON);
    glVertex2i(885, 80);
    glVertex2i(890, 80);
    glVertex2i(890, 50);
    glVertex2i(885, 50);
    glEnd();
    
    //jendela rumah 1
    glColor3f(0.678, 0.847, 0.902);
	glBegin(GL_POLYGON);
    glVertex2i(720, 120);
    glVertex2i(760, 120);
    glVertex2i(760, 60);
    glVertex2i(720, 60);
    glEnd();
    
    glColor3f(1.000, 0.871, 0.678); 
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2f(740,120);
	glVertex2f(740,60);
	glEnd();
	
	glColor3f(1.000, 0.871, 0.678); 
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2f(720,90);
	glVertex2f(760,90);
	glEnd();
    
    //akhir jendela rumah 1
    
    //jendela rumah 2
    glColor3f(0.678, 0.847, 0.902);
	glBegin(GL_POLYGON);
    glVertex2i(773, 120);
    glVertex2i(820, 120);
    glVertex2i(820, 60);
    glVertex2i(773, 60);
    glEnd();
    
    glColor3f(1.000, 0.871, 0.678); 
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2f(796,120);
	glVertex2f(796,60);
	glEnd();
	
	glColor3f(1.000, 0.871, 0.678); 
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2f(773,90);
	glVertex2f(820,90);
	glEnd();
    
    //akhir jendela rumah 2
    
    //pagar
    
    glColor3f(0.980, 0.980, 0.824);
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2i(650, 75);
    glVertex2i(1024, 75);
    glEnd();
    
    //pagar 2
    glColor3f(0.980, 0.980, 0.824);
    for(int i=0; i<15; i++){
    	glBegin(GL_LINES);
    	glVertex2i(650+(i*25), 75);
    	glVertex2i(650+(i*25), 0);
    	glEnd();
    }
    
    //traktor
    glColor3f(0.698, 0.133, 0.133);
	glBegin(GL_POLYGON);
    glVertex2i(320, 200);
    glVertex2i(350, 200);
    glVertex2i(350, 120);
    glVertex2i(300, 120);
    glVertex2i(300, 160);
    glEnd();
    
    glColor3f(0.863, 0.078, 0.235);
	glBegin(GL_POLYGON);
    glVertex2i(220, 160);
    glVertex2i(300, 160);
    glVertex2i(300, 120);
    glVertex2i(220, 120);
    glEnd();
    
    //ban traktor
    
    glColor3f(0,0,0);
    glLineWidth(3);
	glBegin(GL_LINES);
    for(int i=0;i<=60;i++){
    	float sudut = i+(PI/360);
    	float x = 30*cos(sudut);
    	float y = 30*sin(sudut);
    	glVertex2f(x+310,y+120);
    }
    glEnd();
    
    glColor3f(0,0,0);
    glLineWidth(3);
	glBegin(GL_LINES);
    for(int i=0;i<=60;i++){
    	float sudut = i+(PI/360);
    	float x = 20*cos(sudut);
    	float y = 20*sin(sudut);
    	glVertex2f(x+245,y+120);
    }
    glEnd();
    
    //jendela traktor
    
    glColor3f(0.678, 0.847, 0.902);
	glBegin(GL_POLYGON);
    glVertex2i(325, 190);
    glVertex2i(340, 190);
    glVertex2i(340, 160);
    glVertex2i(310, 160);
    glEnd();
    
    //cerobong traktor
    glColor3f(0,0,0);
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2i(345, 200);
    glVertex2i(355, 220);
    glEnd();
    
    glColor3f(0,0,0);
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2i(354, 220);
    glVertex2i(358, 220);
    glEnd();
    
    //asap cerobong traktor
    glColor3f(0.863, 0.863, 0.863);
    glLineWidth(3);
	glBegin(GL_POLYGON);
    for(int i=0;i<=360;i++){
    	float sudut = i+(PI/360);
    	float x = 10*cos(sudut);
    	float y = 10*sin(sudut);
    	glVertex2f(x+396,y+230);
    }
    glEnd();
    
    glColor3f(0.863, 0.863, 0.863);
    glLineWidth(3);
	glBegin(GL_POLYGON);
    for(int i=0;i<=360;i++){
    	float sudut = i+(PI/360);
    	float x = 8*cos(sudut);
    	float y = 8*sin(sudut);
    	glVertex2f(x+410,y+240);
    }
    glEnd();
    
    glColor3f(0.863, 0.863, 0.863);
    glLineWidth(3);
	glBegin(GL_POLYGON);
    for(int i=0;i<=360;i++){
    	float sudut = i+(PI/360);
    	float x = 12*cos(sudut);
    	float y = 12*sin(sudut);
    	glVertex2f(x+380,y+225);
    }
    glEnd();
    
    //ufo
    
    glColor3f(0.878, 1.000, 1.000);
	glBegin(GL_POLYGON);
    for(int i=0;i<=360;i++){
    	float sudut = i+(PI/360);
    	float x = 40*cos(sudut);
    	float y = 10*sin(sudut);
    	glVertex2f(x+150,y+725);
    }
    glEnd();
    
    glColor3f(1.000, 1.000, 0.000);
	glBegin(GL_POLYGON);
    glVertex2i(135, 745);
    glVertex2i(165, 745);
    glVertex2i(175, 725);
    glVertex2i(125, 725);
    glEnd();
    
    //garis
    glColor3f(1,1,1);
    glLineWidth(1);
    
    for(int i=0; i<3; i++){
    	glBegin(GL_LINES);
    	glVertex2i(180 + (i * 10), 740 - (i * 10));
    	glVertex2i(358 + (i * 10), 740 - (i * 10));
    	glEnd();
	}
	
	glColor3f(0.502, 0.502, 0.502);
	glBegin(GL_POLYGON);
    for(int i=0;i<=360;i++){
    	float sudut = i+(PI/360);
    	float x = 20*cos(sudut);
    	float y = 20*sin(sudut);
    	glVertex2f(x+630,y+140);
    }
    glEnd();
    
    glColor3f(0.412, 0.412, 0.412);
	glBegin(GL_POLYGON);
    for(int i=0;i<=360;i++){
    	float sudut = i+(PI/360);
    	float x = 25*cos(sudut);
    	float y = 25*sin(sudut);
    	glVertex2f(x+600,y+140);
    }
    glEnd();
    
    glColor3f(0.565, 0.933, 0.565);
	glBegin(GL_POLYGON);
	glVertex2i(550, 140);
	glVertex2i(700, 140);
	glVertex2i(640, 40);
	glVertex2i(630, 40);
    glEnd();
    //akhir batu
    
    //cerobong asap
    glColor3f(0.412, 0.412, 0.412);
	glBegin(GL_POLYGON);
    glVertex2i(900, 280);
    glVertex2i(950, 280);
    glVertex2i(950, 250);
    glVertex2i(900, 250);
    glEnd();
    
    glColor3f(0.502, 0.502, 0.502);
	glBegin(GL_POLYGON);
    glVertex2i(889, 290);
    glVertex2i(961, 290);
    glVertex2i(961, 270);
    glVertex2i(889, 270);
    glEnd();
    //akhir cerobong asap
    
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
