#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857
#include<iostream>
using namespace std;
void myInit ()
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 700, 0, 800, -10.0, 10.0);
}

void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)///radius_x,radius_y,centre_position_x,centre_position_y///
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    for(int i=0; i<=360; i++)
    {
        float angle = 3.1416f * i/180;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);
        glVertex2f((x+cx),(y+cy));
    }
    glEnd();


}

float p = -10;
int i= -700;
float j= -250;
float k= -100;

void display ()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 147);
    glVertex2f(0,100);
    glVertex2f(800,100);
    glColor3ub(255, 145, 77);
    glVertex2f(800,800);
    glVertex2f(0,800);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(90,147,48);
    glVertex2f(0,100);        ///2nd building font area
    glVertex2f(800,100);
    glVertex2f(800,119.5);
    glVertex2f(0,119.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2,0.2,0.2);
    glVertex2f(0,30);
    glVertex2f(800,30);
    glVertex2f(800,80);
    glVertex2f(0,80);
    glEnd();

    glBegin(GL_LINES);//Road top bar
    glLineWidth(2);
	glColor3f(1.0,1.0,1.0);
    glVertex2i(0,81);
    glVertex2i(800,81);
    glEnd();

    glBegin(GL_LINES);//Road middle bar
    glLineWidth(2);
	glColor3f(1.0,1.0,1.0);
    glVertex2i(0,62);
    glVertex2i(800,62);
    glEnd();

    glBegin(GL_LINES);//Road Bottop bar
    glLineWidth(2);
	glColor3f(1.0,1.0,1.0);
    glVertex2i(0,39);
    glVertex2i(800,39);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(90, 147, 48);
    glVertex2f(0,82);
    glVertex2f(800,82);
    glVertex2f(800,90);
    glVertex2f(0,90);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(90, 147, 48);
    glVertex2f(0,38);
    glVertex2f(800,38);
    glVertex2f(800,0);
    glVertex2f(0,0);
    glEnd();


    glBegin(GL_TRIANGLE_FAN);  ///Bottom tree1   ///
    glColor3ub(75,35,5);
    glVertex3f(680,0,0);
    glVertex3f(685,0,0);
    glVertex3f(685,20,0);
    glVertex3f(680,20,0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(675,10,0);
    glVertex3f(690,10,0);
    glVertex3f(682.5,40,0);
    glVertex3f(682.5,40,0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(676,15,0);
    glVertex3f(689,15,0);
    glVertex3f(682.5,45,0);
    glVertex3f(682.5,45,0);
    glEnd();


    glBegin(GL_TRIANGLE_FAN);  ///Bottom tree2   ///
    glColor3ub(75,35,5);
    glVertex3f(580,0,0);
    glVertex3f(585,0,0);
    glVertex3f(585,20,0);
    glVertex3f(580,20,0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(575,10,0);
    glVertex3f(590,10,0);
    glVertex3f(582.5,40,0);
    glVertex3f(582.5,40,0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(576,15,0);
    glVertex3f(589,15,0);
    glVertex3f(582.5,45,0);
    glVertex3f(582.5,45,0);
    glEnd();

     glBegin(GL_TRIANGLE_FAN);  ///Bottom tree3   ///
    glColor3ub(75,35,5);
    glVertex3f(480,0,0);
    glVertex3f(485,0,0);
    glVertex3f(485,20,0);
    glVertex3f(480,20,0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(475,10,0);
    glVertex3f(490,10,0);
    glVertex3f(482.5,40,0);
    glVertex3f(482.5,40,0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(476,15,0);
    glVertex3f(489,15,0);
    glVertex3f(482.5,45,0);
    glVertex3f(482.5,45,0);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);  ///Bottom tree4   ///
    glColor3ub(75,35,5);
    glVertex3f(380,0,0);
    glVertex3f(385,0,0);
    glVertex3f(385,20,0);
    glVertex3f(380,20,0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(375,10,0);
    glVertex3f(390,10,0);
    glVertex3f(382.5,40,0);
    glVertex3f(382.5,40,0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(376,15,0);
    glVertex3f(389,15,0);
    glVertex3f(382.5,45,0);
    glVertex3f(382.5,45,0);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);  ///Bottom tree5   ///
    glColor3ub(75,35,5);
    glVertex3f(280,0,0);
    glVertex3f(285,0,0);
    glVertex3f(285,20,0);
    glVertex3f(280,20,0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(275,10,0);
    glVertex3f(290,10,0);
    glVertex3f(282.5,40,0);
    glVertex3f(282.5,40,0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(276,15,0);
    glVertex3f(289,15,0);
    glVertex3f(282.5,45,0);
    glVertex3f(282.5,45,0);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);  ///Bottom tree6   ///
    glColor3ub(75,35,5);
    glVertex3f(180,0,0);
    glVertex3f(185,0,0);
    glVertex3f(185,20,0);
    glVertex3f(180,20,0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(175,10,0);
    glVertex3f(190,10,0);
    glVertex3f(182.5,40,0);
    glVertex3f(182.5,40,0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(176,15,0);
    glVertex3f(189,15,0);
    glVertex3f(182.5,45,0);
    glVertex3f(182.5,45,0);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);  ///Bottom tree7   ///
    glColor3ub(75,35,5);
    glVertex3f(80,0,0);
    glVertex3f(85,0,0);
    glVertex3f(85,20,0);
    glVertex3f(80,20,0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(75,10,0);
    glVertex3f(90,10,0);
    glVertex3f(82.5,40,0);
    glVertex3f(82.5,40,0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex3f(76,15,0);
    glVertex3f(89,15,0);
    glVertex3f(82.5,45,0);
    glVertex3f(82.5,45,0);
    glEnd();
    ///End///


    /////////
    glBegin(GL_QUADS);//shade grey
    glColor3ub(96,96,96);
    glVertex3i(21,40,0);
    glVertex3i(6,40,0);
    glVertex3i(6,46,0);
    glVertex3i(21,46,0);
    glEnd();

    glBegin(GL_QUADS);//shade grey+green 1
    glColor3ub(0,204,0);
    glVertex3i(23,40,0);
    glVertex3i(21,40,0);
    glVertex3i(21,46,0);
    glVertex3i(23,46,0);
    glEnd();

    glBegin(GL_QUADS);//shade grey+green 2
    glColor3ub(0,204,0);
    glVertex3f(6.5,40,0);
    glVertex3f(4.5,40,0);
    glVertex3f(4.5,46,0);
    glVertex3f(6.5,46,0);
    glEnd();


    glBegin(GL_QUADS);//green rectangle 1
    glColor3ub(0,204,0);
    glVertex3i(7,40,0);
    glVertex3i(9,40,0);
    glVertex3i(9,43,0);
    glVertex3i(7,43,0);
    glEnd();

    glBegin(GL_QUADS);//green rectangle 2
    glColor3ub(0,204,0);
    glVertex3i(11,46,0);
    glVertex3i(9,46,0);
    glVertex3i(9,43,0);
    glVertex3i(11,43,0);
    glEnd();

    glBegin(GL_QUADS);//green rectangle 3
    glColor3ub(0,204,0);
    glVertex3i(11,40,0);
    glVertex3i(13,40,0);
    glVertex3i(13,43,0);
    glVertex3i(11,43,0);
    glEnd();

    glBegin(GL_QUADS);//green rectangle 4
    glColor3ub(0,204,0);
    glVertex3i(15,46,0);
    glVertex3i(13,46,0);
    glVertex3i(13,43,0);
    glVertex3i(15,43,0);
    glEnd();

    glBegin(GL_QUADS);//green rectangle 5
    glColor3ub(0,204,0);
    glVertex3i(15,40,0);
    glVertex3i(17,40,0);
    glVertex3i(17,43,0);
    glVertex3i(15,43,0);
    glEnd();

    glBegin(GL_QUADS);//green rectangle 6
    glColor3ub(0,204,0);
    glVertex3i(19,46,0);
    glVertex3i(17,46,0);
    glVertex3i(17,43,0);
    glVertex3i(19,43,0);
    glEnd();
    glBegin(GL_QUADS);//green rectangle 7
    glColor3ub(0,204,0);
    glVertex3i(19,40,0);
    glVertex3i(21,40,0);
    glVertex3i(21,43,0);
    glVertex3i(19,43,0);
    glEnd();



    glBegin(GL_LINES);//horizontal shade
    glColor3ub(0,0,0);
    glVertex3i(23,43,0);
    glVertex3f(4.5,43,0);
    glEnd();

    glBegin(GL_LINES);//horiz line 1
    glColor3ub(0,0,0);
    glVertex3i(23,40,0);
    glVertex3f(4.5,40,0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 2
    glColor3ub(0,0,0);
    glVertex3i(23,46,0);
    glVertex3f(4.5,46,0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 3
    glColor3ub(0,0,0);
    glVertex3i(23,40,0);
    glVertex3i(23,46,0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 4
    glColor3ub(0,0,0);
    glVertex3i(21,40,0);
    glVertex3i(21,46,0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 5
    glColor3ub(0,0,0);
    glVertex3i(19,40,0);
    glVertex3i(19,46,0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 6
    glColor3ub(0,0,0);
    glVertex3i(17,40,0);
    glVertex3i(17,46,0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 7
    glColor3ub(0,0,0);
    glVertex3i(15,40,0);
    glVertex3i(15,46,0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 8
    glColor3ub(0,0,0);
    glVertex3i(13,40,0);
    glVertex3i(13,46,0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 9
    glColor3ub(0,0,0);
    glVertex3i(11,40,0);
    glVertex3i(11,46,0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 10
    glColor3ub(0,0,0);
    glVertex3i(9,40,0);
    glVertex3i(9,46,0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 11
    glColor3ub(0,0,0);
    glVertex3i(7,40,0);
    glVertex3i(7,46,0);
    glEnd();


    glBegin(GL_LINES);//horizontal line 12
    glColor3ub(0,0,0);
    glVertex3i(5,40,0);
    glVertex3i(5,46,0);
    glEnd();



    glBegin(GL_QUADS);//body building up part
    glColor3ub(192,192,192);
    glVertex3i(22,32,0);
    glVertex3f(5.5,32,0);
    glVertex3f(5.5,40,0);
    glVertex3i(22,40,0);
    glEnd();

    glBegin(GL_LINES);//body building up part line 1
    glColor3ub(0,0,0);
    glVertex3i(22,32,0);
    glVertex3i(22,40,0);
    glEnd();

    glBegin(GL_LINES);//body building up part line 2
    glColor3ub(0,0,0);
    glVertex3f(5.5,32,0);
    glVertex3f(5.5,40,0);
    glEnd();

    glBegin(GL_LINES);//body building up part line 3
    glColor3ub(255,255,255);
    glVertex3f(13.5,32,0);
    glVertex3f(13.5,40,0);
    glEnd();

    glBegin(GL_LINES);//body building up part line 4
    glColor3ub(255,255,255);
    glVertex3f(17.75,32,0);
    glVertex3f(17.75,40,0);
    glEnd();

    glBegin(GL_LINES);//body building up part line 5
    glColor3ub(255,255,255);
    glVertex3f(9.25,32,0);
    glVertex3f(9.25,40,0);
    glEnd();




    glBegin(GL_QUADS);//body building 2
    glColor3ub(204,0,0);
    glVertex3f(22.5,25,0);
    glVertex3i(5,25,0);
    glVertex3i(5,32,0);
    glVertex3f(22.5,32,0);
    glEnd();
//left door//
    glBegin(GL_QUADS); //main door
    glColor3ub(0,153,153);
    glVertex3f(19, 25, 0);
    glVertex3f(16, 25, 0);
    glVertex3f(16, 33, 0);
    glVertex3f(19, 33, 0);
    glEnd();
    glBegin(GL_LINES); //main door line 1
    glColor3ub(0,0,0);
    glVertex3f(19, 25, 0);
    glVertex3f(16, 25, 0);
    glEnd();
    glBegin(GL_LINES); //main door line 2
    glColor3ub(0,0,0);
    glVertex3f(16, 25, 0);
    glVertex3f(16, 33, 0);
    glEnd();
    glBegin(GL_LINES); //main doorline 3
    glColor3ub(0,0,0);
    glVertex3f(16, 33, 0);
    glVertex3f(19, 33, 0);
    glEnd();
    glBegin(GL_LINES); //main doorline 4
    glColor3ub(0,0,0);
    glVertex3f(19, 25, 0);
    glVertex3f(19, 33, 0);
    glEnd();

    glBegin(GL_LINES); //main doorline 5
    glColor3ub(0,0,0);
    glVertex3f(17.5, 25, 0);
    glVertex3f(17.5, 33, 0);
    glEnd();

    //right door//

    glBegin(GL_QUADS); //main door
    glColor3ub(0,153,153);
    glVertex3f(11, 25, 0);
    glVertex3f(8, 25, 0);
    glVertex3f(8, 33, 0);
    glVertex3f(11, 33, 0);
    glEnd();
    glBegin(GL_LINES); //main door line 1
    glColor3ub(0,0,0);
    glVertex3f(11, 25, 0);
    glVertex3f(8, 25, 0);
    glEnd();
    glBegin(GL_LINES); //main door line 2
    glColor3ub(0,0,0);
    glVertex3f(8, 25, 0);
    glVertex3f(8, 33, 0);
    glEnd();
    glBegin(GL_LINES); //main doorline 3
    glColor3ub(0,0,0);
    glVertex3f(8, 33, 0);
    glVertex3f(11, 33, 0);
    glEnd();
    glBegin(GL_LINES); //main doorline 4
    glColor3ub(0,0,0);
    glVertex3f(11, 25, 0);
    glVertex3f(11, 33, 0);
    glEnd();

    glBegin(GL_LINES); //main doorline 5
    glColor3ub(0,0,0);
    glVertex3f(9.5, 25, 0);
    glVertex3f(9.5, 33, 0);
    glEnd();



    ///...1st Building main part-1
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(50,90);
    glVertex2f(110,90);
    glVertex2f(110,475);
    glVertex2f(50,475);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(52.5,90);        //1st Building main part 2
    glVertex2f(106,90);
    glVertex2f(106,460);
    glVertex2f(52.5,460);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(110,90);         //1st Building 2nd part 2
    glVertex2f(140,90);
    glVertex2f(140,420);
    glVertex2f(110,420);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(110,90);         //1st Building 2nd part 1
    glVertex2f(137.5,90);
    glVertex2f(137.5,410);
    glVertex2f(110,410);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(113,370);   //part 2 1st Building 6th floor2..........outlook
    glVertex2f(137.5,370);
    glVertex2f(137.5,400);
    glVertex2f(113,400);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(113,365);   //part 2 1st Building 6th floor2..........outlook
    glVertex2f(123,365);
    glVertex2f(123,400);
    glVertex2f(113,400);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(118,365);   //Door 1st Building 6th floor2..........outlook-1
    glVertex2f(119,365);
    glVertex2f(119,392);
    glVertex2f(118,392);
    glEnd();

/////////////****
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(90,90);  //1st Building 1st floor1
    glVertex2f(197,90);
    glVertex2f(197,145);
    glVertex2f(90,145);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(90,145);   //1st Building 2nd floor1
    glVertex2f(197,145);
    glVertex2f(197,200);
    glVertex2f(90,200);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(90,200);   //1st Building 3rd floor1
    glVertex2f(197,200);
    glVertex2f(197,255);
    glVertex2f(90,255);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(90,255);   //1st Building 4th floor1
    glVertex2f(197,255);
    glVertex2f(197,310);
    glVertex2f(90,310);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(90,310);   //1st Building 5th floor1
    glVertex2f(197,310);
    glVertex2f(197,365);
    glVertex2f(90,365);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(90,365);   //1st Building 6th floor1
    glVertex2f(197,365);
    glVertex2f(197,420);
    glVertex2f(90,420);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(90,420);   //1st Building 7th floor1
    glVertex2f(197,420);
    glVertex2f(197,475);
    glVertex2f(90,475);
    glEnd();



    glColor3ub(0, 0, 255);
    glRasterPos2i(133,465);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'U');
    glColor3ub(0, 0, 255);
    glRasterPos2i(139,465);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'H');
    glColor3ub(0, 0, 255);
    glRasterPos2i(145,465);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'A');
    glColor3ub(0, 0, 255);
    glRasterPos2i(151,465);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'M');
    glColor3ub(0, 0, 255);
    glRasterPos2i(157,465);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'K');
    glColor3ub(0, 0, 255);
    glRasterPos2i(163,465);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'A');


    glBegin(GL_QUADS);              ///SIRI GHORE.//
    glColor3ub(204, 204, 204);
    glVertex2f(90,475);
    glVertex2f(120,475);
    glVertex2f(120,515);
    glVertex2f(90,515);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(92,475);
    glVertex2f(118,475);
    glVertex2f(118,510);
    glVertex2f(92,510);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(100,475);
    glVertex2f(110,475);
    glVertex2f(110,505);
    glVertex2f(100,505);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(105,483);
    glVertex2f(106,483);
    glVertex2f(106,492);
    glVertex2f(105,492);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(140, 140, 140);
    glVertex2f(65,475);
    glVertex2f(66,475);
    glVertex2f(66,600);
    glVertex2f(65,600);
    glEnd();

    glColor3ub(102, 102, 102);
    circle(3,6,64,580);
    glColor3ub(217, 217, 217);
    circle(2.5,5,64,580);
    glColor3ub(102, 102, 102);
    circle(2,4,67,565);
    glColor3ub(217, 217, 217);
    circle(1.5,3,67,565);

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(110,420);   //part 2 1st Building 7th floor2 white
    glVertex2f(194,420);
    glVertex2f(194,460);
    glVertex2f(110,460);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(140,365);   //part 2 1st Building 6th floor2
    glVertex2f(194,365);
    glVertex2f(194,405);
    glVertex2f(140,405);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(140,310);   //part 2 1st Building 5th floor2
    glVertex2f(194,310);
    glVertex2f(194,350);
    glVertex2f(140,350);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(140,255);   //part 2 1st Building 4th floor2
    glVertex2f(194,255);
    glVertex2f(194,295);
    glVertex2f(140,295);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(140,200);   //part 2 1st Building 3rd floor2
    glVertex2f(194,200);
    glVertex2f(194,240);
    glVertex2f(140,240);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(140,145);   //part 2 1st Building 2nd floor2
    glVertex2f(194,145);
    glVertex2f(194,185);
    glVertex2f(140,185);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(140,90);  //part 2 1st Building 1st floor2
    glVertex2f(194,90);
    glVertex2f(194,130);
    glVertex2f(140,130);
    glEnd();



    ///design of main building....red and glass..............

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(52.5,420);  //7 1st Building main part3
    glVertex2f(67,420);
    glVertex2f(67,460);
    glVertex2f(52.5,460);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(52.5,365);  //6 1st Building main part3
    glVertex2f(67,365);
    glVertex2f(67,405);
    glVertex2f(52.5,405);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(52.5,310);  //5 1st Building main part3
    glVertex2f(67,310);
    glVertex2f(67,350);
    glVertex2f(52.5,350);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(52.5,255);  //4 1st Building main part3
    glVertex2f(67,255);
    glVertex2f(67,295);
    glVertex2f(52.5,295);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(52.5,200);  //3 1st Building main part3
    glVertex2f(67,200);
    glVertex2f(67,240);
    glVertex2f(52.5,240);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(52.5,145);  //2 1st Building main part3
    glVertex2f(67,145);
    glVertex2f(67,185);
    glVertex2f(52.5,185);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(52.5,90);  //1 1st Building main part3
    glVertex2f(67,90);
    glVertex2f(67,130);
    glVertex2f(52.5,130);
    glEnd();
    /////////.....................
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(95,420);  //7 1st Building main part3
    glVertex2f(106,420);
    glVertex2f(106,460);
    glVertex2f(95,460);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(95,365);  //6 1st Building main part3
    glVertex2f(106,365);
    glVertex2f(106,405);
    glVertex2f(95,405);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(95,310);  //5 1st Building main part3
    glVertex2f(106,310);
    glVertex2f(106,350);
    glVertex2f(95,350);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(95,255);  //4 1st Building main part3
    glVertex2f(106,255);
    glVertex2f(106,295);
    glVertex2f(95,295);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(95,200);  //3 1st Building main part3
    glVertex2f(106,200);
    glVertex2f(106,240);
    glVertex2f(95,240);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(95,145);  //2 1st Building main part3
    glVertex2f(106,145);
    glVertex2f(106,185);
    glVertex2f(95,185);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(85,90);  //door
    glVertex2f(106,90);
    glVertex2f(106,130);
    glVertex2f(85,130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 77);
    glVertex2f(95,90);  //door 1 main
    glVertex2f(96,90);
    glVertex2f(96,130);
    glVertex2f(95,130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(96,100);  //door 1 main
    glVertex2f(97,100);
    glVertex2f(97,120);
    glVertex2f(96,120);
    glEnd();

    //////////............................

    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,420);  //7 1st Building main part3
    glVertex2f(110,420);
    glVertex2f(110,421);
    glVertex2f(50,421);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,365);  //6 1st Building main part3
    glVertex2f(137.5,365);
    glVertex2f(137.5,366);
    glVertex2f(50,366);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,310);  //5 1st Building main part3
    glVertex2f(110,310);
    glVertex2f(110,311);
    glVertex2f(50,311);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,255);  //4 1st Building main part3
    glVertex2f(110,255);
    glVertex2f(110,256);
    glVertex2f(50,256);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,199);  //3 1st Building main part3
    glVertex2f(110,199);
    glVertex2f(110,200);
    glVertex2f(50,200);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,145);  //2 1st Building main part3
    glVertex2f(110,145);
    glVertex2f(110,146);
    glVertex2f(50,146);
    glEnd();

    ///////...............................
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,405);  //7 1st Building main part3
    glVertex2f(110,405);
    glVertex2f(110,406);
    glVertex2f(50,406);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,350);  //6 1st Building main part3
    glVertex2f(110,350);
    glVertex2f(110,351);
    glVertex2f(50,351);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,295);  //5 1st Building main part3
    glVertex2f(110,295);
    glVertex2f(110,296);
    glVertex2f(50,296);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,240);  //4  main part3
    glVertex2f(110,240);
    glVertex2f(110,241);
    glVertex2f(50,241);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,185);  //3 1st Building main part3
    glVertex2f(110,185);
    glVertex2f(110,186);
    glVertex2f(50,186);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(50,130);  //2 1st Building main part3
    glVertex2f(110,130);
    glVertex2f(110,131);
    glVertex2f(50,131);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(89, 89, 89);
    glVertex2f(140,90);  // part2
    glVertex2f(141,90);
    glVertex2f(141,420);
    glVertex2f(140,420);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(110,365);  //6 1st Building main part3
    glVertex2f(120,365);
    glVertex2f(120,385);
    glVertex2f(110,385);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(128,365);  //6 1st Building main part3
    glVertex2f(137.5,365);
    glVertex2f(137.5,385);
    glVertex2f(128,385);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(57,80,80);
    glVertex2f(120,370);  //6 1st Building main part3
    glVertex2f(128,370);
    glVertex2f(128.5,372);
    glVertex2f(120,372);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(57,80,80);
    glVertex2f(120,379);  //6 1st Building main part3
    glVertex2f(128,379);
    glVertex2f(128.5,381);
    glVertex2f(120,381);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(110,310);  //5 2nd part2
    glVertex2f(137.5,310);
    glVertex2f(137.5,350);
    glVertex2f(110,350);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(110,255);  //4 2nd part3
    glVertex2f(137.5,255);
    glVertex2f(137.5,295);
    glVertex2f(110,295);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(110,200);  //3 2nd part3
    glVertex2f(137.5,200);
    glVertex2f(137.5,240);
    glVertex2f(110,240);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(110,145);  //2 2nd part3
    glVertex2f(137.5,145);
    glVertex2f(137.5,185);
    glVertex2f(110,185);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(110,90);  //1 1st Building main part3
    glVertex2f(137.5,90);
    glVertex2f(137.5,130);
    glVertex2f(110,130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 77);
    glVertex2f(117,90);  //1 1st Building main part3
    glVertex2f(118,90);
    glVertex2f(118,130);
    glVertex2f(117,130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 77);
    glVertex2f(127,90);  //1 1st Building main part3
    glVertex2f(128,90);
    glVertex2f(128,130);
    glVertex2f(127,130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(118,100);  //1 1st Building main part3
    glVertex2f(119,100);
    glVertex2f(119,120);
    glVertex2f(118,120);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(128,100);  //1 1st Building main part3
    glVertex2f(129,100);
    glVertex2f(129,120);
    glVertex2f(128,120);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 26, 51);
    glVertex2f(110,90);   //partation
    glVertex2f(111,90);
    glVertex2f(111,475);
    glVertex2f(110,475);
    glEnd();

    //..7th Floor design...................

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(113,425);   //part 2 1st Building 7th floor2
    glVertex2f(191,425);
    glVertex2f(191,455);
    glVertex2f(113,455);
    glEnd();

    //....door.....window
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(113,420);   //d1 1st Building 7th floor2
    glVertex2f(123,420);
    glVertex2f(123,455);
    glVertex2f(113,455);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(118,430);   //d1 1st Building 7th floor2
    glVertex2f(119,430);
    glVertex2f(119,445);
    glVertex2f(118,445);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(133,432);   //w1 1st Building 7th floor2
    glVertex2f(153,432);
    glVertex2f(153,448);
    glVertex2f(133,448);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(133.5,433);   //w1 1st Building 7th floor2
    glVertex2f(152.5,433);
    glVertex2f(152.5,447);
    glVertex2f(133.5,447);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(143,432);   //w1 1st Building 7th floor2
    glVertex2f(144,432);
    glVertex2f(144,448);
    glVertex2f(143,448);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(163,432);   //w2 1st Building 7th floor2
    glVertex2f(183,432);
    glVertex2f(183,448);
    glVertex2f(163,448);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(163.5,433);   //w2 1st Building 7th floor2
    glVertex2f(182.5,433);
    glVertex2f(182.5,447);
    glVertex2f(163.5,447);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(173,432);   //w2 1st Building 7th floor2
    glVertex2f(174,432);
    glVertex2f(174,448);
    glVertex2f(173,448);
    glEnd();


    //....6th Floor Design..........Door window

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(141,370);   //part 2 1st Building 6th floor2..........Inlook
    glVertex2f(191,370);
    glVertex2f(191,400);
    glVertex2f(141,400);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(141,377);   //w1 1st Building 6th floor2
    glVertex2f(153,377);
    glVertex2f(153,393);
    glVertex2f(141,393);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(141,378);   //w1 1st Building 6th floor2
    glVertex2f(152.5,378);
    glVertex2f(152.5,392);
    glVertex2f(141,392);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(143,377);   //w1 1st Building 6th floor2
    glVertex2f(144,377);
    glVertex2f(144,393);
    glVertex2f(143,393);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(163,377);   //w2 1st Building 6th floor2
    glVertex2f(183,377);
    glVertex2f(183,393);
    glVertex2f(163,393);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(163.5,378);   //w2 1st Building 6th floor2
    glVertex2f(182.5,378);
    glVertex2f(182.5,392);
    glVertex2f(163.5,392);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(173,377);   //w2 1st Building 6th floor2
    glVertex2f(174,377);
    glVertex2f(174,393);
    glVertex2f(173,393);
    glEnd();


    ///5th floor......design

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(141,315);   //part 2 1st Building 5th floor2.........
    glVertex2f(191,315);
    glVertex2f(191,345);
    glVertex2f(141,345);
    glEnd();


    ///....door.....window


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(141,322);   //w1 1st Building 5th floor2
    glVertex2f(153,322);
    glVertex2f(153,338);
    glVertex2f(141,338);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(141,323);   //w1 1st Building 5th floor2
    glVertex2f(152.5,323);
    glVertex2f(152.5,337);
    glVertex2f(141,337);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(143,322);   //w1 1st Building 5th floor2
    glVertex2f(144,322);
    glVertex2f(144,338);
    glVertex2f(143,338);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(163,322);   //w2 1st Building 5th floor2
    glVertex2f(183,322);
    glVertex2f(183,338);
    glVertex2f(163,338);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(163.5,323);   //w2 1st Building 5th floor2
    glVertex2f(182.5,323);
    glVertex2f(182.5,337);
    glVertex2f(163.5,337);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(173,322);   //w2 1st Building 5th floor2
    glVertex2f(174,322);
    glVertex2f(174,338);
    glVertex2f(173,338);
    glEnd();


    ///....4TH floor design............

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(141,260);   //part 2 1st Building 5th floor2.........
    glVertex2f(191,260);
    glVertex2f(191,290);
    glVertex2f(141,290);
    glEnd();


    ///....door.....window


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(141,267);   //w1 1st Building 4th floor2
    glVertex2f(153,267);
    glVertex2f(153,283);
    glVertex2f(141,283);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(141,268);   //w1 1st Building 4th floor2
    glVertex2f(152.5,268);
    glVertex2f(152.5,282);
    glVertex2f(141,282);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(143,267);   //w1 1st Building 4th floor2
    glVertex2f(144,267);
    glVertex2f(144,283);
    glVertex2f(143,283);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(163,267);   //w2 1st Building 4th floor2
    glVertex2f(183,267);
    glVertex2f(183,283);
    glVertex2f(163,283);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(163.5,268);   //w2 1st Building 4th floor2
    glVertex2f(182.5,268);
    glVertex2f(182.5,282);
    glVertex2f(163.5,282);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(173,267);   //w2 1st Building 4th floor2
    glVertex2f(174,267);
    glVertex2f(174,283);
    glVertex2f(173,283);
    glEnd();


    ///....3TH floor design............

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(141,205);   //part 2 1st Building 3th floor2.........
    glVertex2f(191,205);
    glVertex2f(191,235);
    glVertex2f(141,235);
    glEnd();

    ///....door.....window


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(141,212);   //w1 1st Building 3rd floor2
    glVertex2f(153,212);
    glVertex2f(153,228);
    glVertex2f(141,228);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(141,213);   //w1 1st Building 3rd floor2
    glVertex2f(152.5,213);
    glVertex2f(152.5,227);
    glVertex2f(141,227);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(143,212);   //w1 1st Building 3rd floor2
    glVertex2f(144,212);
    glVertex2f(144,228);
    glVertex2f(143,228);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(163,212);   //w2 1st Building 3rd floor2
    glVertex2f(183,212);
    glVertex2f(183,228);
    glVertex2f(163,228);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(163.5,213);   //w2 1st Building 3rd floor2
    glVertex2f(182.5,213);
    glVertex2f(182.5,227);
    glVertex2f(163.5,227);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(173,212);   //w2 1st Building 3rd floor2
    glVertex2f(174,212);
    glVertex2f(174,228);
    glVertex2f(173,228);
    glEnd();


    ///....2nd floor design............

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(141,150);   //part 2 1st Building 2nd floor2.........
    glVertex2f(191,150);
    glVertex2f(191,180);
    glVertex2f(141,180);
    glEnd();


    ///....door.....window


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(141,157);   //w1 1st Building 2nd floor2
    glVertex2f(153,157);
    glVertex2f(153,173);
    glVertex2f(141,173);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(141,158);   //w1 1st Building 2nd floor2
    glVertex2f(152.5,158);
    glVertex2f(152.5,172);
    glVertex2f(141,172);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(143,157);   //w1 1st Building 2nd floor2
    glVertex2f(144,157);
    glVertex2f(144,173);
    glVertex2f(143,173);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(163,157);   //w2 1st Building 2nd floor2
    glVertex2f(183,157);
    glVertex2f(183,173);
    glVertex2f(163,173);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(163.5,158);   //w2 1st Building 2nd floor2
    glVertex2f(182.5,158);
    glVertex2f(182.5,172);
    glVertex2f(163.5,172);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(173,157);   //w2 1st Building 2nd floor2
    glVertex2f(174,157);
    glVertex2f(174,173);
    glVertex2f(173,173);
    glEnd();


    ///....1st floor design............

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(141,95);   //part 2 1st Building 1st floor red.........
    glVertex2f(191,95);
    glVertex2f(191,125);
    glVertex2f(141,125);
    glEnd();


    ///....door.....window

    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(196,90);   //d2 AB2 1st floor
    glVertex2f(206,90);
    glVertex2f(206,125);
    glVertex2f(196,125);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(201,100);   //d2 1st Building 1st floor
    glVertex2f(202,100);
    glVertex2f(202,115);
    glVertex2f(201,115);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(141,102);   //w1 1st Building 1st floor2
    glVertex2f(153,102);
    glVertex2f(153,118);
    glVertex2f(141,118);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(141,103);   //w1 1st Building 1st floor2
    glVertex2f(152.5,103);
    glVertex2f(152.5,117);
    glVertex2f(141,117);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(143,102);   //w1 1st Building 1st floor2
    glVertex2f(144,102);
    glVertex2f(144,118);
    glVertex2f(143,118);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(163,102);   //w2 1st Building 1st floor2
    glVertex2f(183,102);
    glVertex2f(183,118);
    glVertex2f(163,118);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(163.5,103);   //w2 1st Building 1st floor2
    glVertex2f(182.5,103);
    glVertex2f(182.5,117);
    glVertex2f(163.5,117);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(173,102);   //w2 1st Building 1st floor2
    glVertex2f(174,102);
    glVertex2f(174,118);
    glVertex2f(173,118);
    glEnd();

    /////////////////
    ///2nd building main part/////
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(200,120);
    glVertex2f(287,120);
    glVertex2f(287,395);
    glVertex2f(200,395);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(202.5,120);        //2nd building main part 2
    glVertex2f(284,120);
    glVertex2f(284,380);
    glVertex2f(202.5,380);
    glEnd();

   ///....1st floor design............

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(205,125);   //part 2 2nd building 1st floor red.........
    glVertex2f(281,125);
    glVertex2f(281,155);
    glVertex2f(205,155);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(281,125);   //part 2 2nd building 1st floor.......red
    glVertex2f(267,125);
    glVertex2f(267,155);
    glVertex2f(281,155);
    glEnd();

    //Door and window
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(205,120);   //d2 2nd building 1st floor
    glVertex2f(215,120);
    glVertex2f(215,155);
    glVertex2f(205,155);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(209,132);   //d2 2nd building 1st floor
    glVertex2f(210,132);
    glVertex2f(210,147);
    glVertex2f(209,147);
    glEnd();

        glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(223,131);   //w1 2nd building 1st floor2
    glVertex2f(243,131);
    glVertex2f(243,147);
    glVertex2f(223,147);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,197,215);
    glVertex2f(223.5,132);   //w1 2nd building 1st floor2
    glVertex2f(242.5,132);
    glVertex2f(242.5,146);
    glVertex2f(223.5,146);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(233.1,131);   //w1 2nd building 1st floor2
    glVertex2f(234,131);
    glVertex2f(234,147);
    glVertex2f(233.1,147);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(253,131);   //w2 2nd building 1st floor2
    glVertex2f(273,131);
    glVertex2f(273,147);
    glVertex2f(253,147);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,197,215);
    glVertex2f(253.5,132);   //w2 2nd building 1st floor2
    glVertex2f(272.5,132);
    glVertex2f(272.5,146);
    glVertex2f(253.5,146);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(263.1,131);   //w2 2nd building 1st floor2
    glVertex2f(264,131);
    glVertex2f(264,147);
    glVertex2f(263.1,147);
    glEnd();

    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(202.5,160);  //2nd building 1st floor1
    glVertex2f(284,160);
    glVertex2f(284,175);
    glVertex2f(202.5,175);
    glEnd();

       ///....2nd floor design............///y+55 korchi

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(205,180);   //part 2 2nd building 2nd floor red.........
    glVertex2f(281,180);
    glVertex2f(281,210);
    glVertex2f(205,210);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(281,180);   //part 2 2nd building 2nd floor.......red
    glVertex2f(264,180);
    glVertex2f(264,210);
    glVertex2f(281,210);
    glEnd();

    //Door and window
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(205,175);   //d2 2nd building 2nd floor
    glVertex2f(215,175);
    glVertex2f(215,210);
    glVertex2f(205,210);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(209,187);   //d2 2nd building 2nd floor
    glVertex2f(210,187);
    glVertex2f(210,202);
    glVertex2f(209,202);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(223,186);   //w1 2nd building 2nd floor2
    glVertex2f(243,186);
    glVertex2f(243,202);
    glVertex2f(223,202);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,197,215);
    glVertex2f(223.5,187);   //w1 2nd building 2nd floor2
    glVertex2f(242.5,187);
    glVertex2f(242.5,201);
    glVertex2f(223.5,201);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(233.1,186);   //w1 2nd building 2nd floor2
    glVertex2f(234,186);
    glVertex2f(234,202);
    glVertex2f(233.1,202);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(253,186);   //w2 2nd building 2nd floor2
    glVertex2f(273,186);
    glVertex2f(273,202);
    glVertex2f(253,202);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,197,215);
    glVertex2f(253.5,187);   //w2 2nd building 2nd floor2
    glVertex2f(272.5,187);
    glVertex2f(272.5,201);
    glVertex2f(253.5,201);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(263.1,186);   //w2 2nd building 2nd floor2
    glVertex2f(264,186);
    glVertex2f(264,202);
    glVertex2f(263.1,202);
    glEnd();

    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(202.5,215);  //2nd building 2nd floor1
    glVertex2f(284,215);
    glVertex2f(284,230);
    glVertex2f(202.5,230);
    glEnd();

    ///....3rd floor design............///y+55 korchi

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(205,235);   //part 2 2nd building 3rd floor red.........
    glVertex2f(281,235);
    glVertex2f(281,265);
    glVertex2f(205,265);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(281,235);   //part 2 2nd building 3rd floor.......red
    glVertex2f(264,235);
    glVertex2f(264,265);
    glVertex2f(281,265);
    glEnd();

    //Door and window
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(205,230);   //d2 2nd building 3rd floor
    glVertex2f(215,230);
    glVertex2f(215,265);
    glVertex2f(205,265);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(209,242);   //d2 2nd building 2nd floor
    glVertex2f(210,242);
    glVertex2f(210,257);
    glVertex2f(209,257);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(223,241);   //w1 2nd building 3rd floor2
    glVertex2f(243,241);
    glVertex2f(243,257);
    glVertex2f(223,257);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,197,215);
    glVertex2f(223.5,242);   //w1 2nd building 2nd floor2
    glVertex2f(242.5,242);
    glVertex2f(242.5,256);
    glVertex2f(223.5,256);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(233.1,241);   //w1 2nd building 3rd floor2
    glVertex2f(234,241);
    glVertex2f(234,257);
    glVertex2f(233.1,257);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(253,241);   //w2 2nd building 3rd floor2
    glVertex2f(273,241);
    glVertex2f(273,257);
    glVertex2f(253,257);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,197,215);
    glVertex2f(253.5,242);   //w2 2nd building 3rd floor2
    glVertex2f(272.5,242);
    glVertex2f(272.5,256);
    glVertex2f(253.5,256);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(263.1,241);   //w2 2nd building 3rd floor2
    glVertex2f(264,241);
    glVertex2f(264,257);
    glVertex2f(263.1,257);
    glEnd();

    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(202.5,270);  //2nd building 3rd floor1
    glVertex2f(284,270);
    glVertex2f(284,285);
    glVertex2f(202.5,285);
    glEnd();

    ///....4th floor design............///y+55 korchi

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(205,290);   //part 2 2nd building 4th floor red.........
    glVertex2f(281,290);
    glVertex2f(281,320);
    glVertex2f(205,320);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(281,290);   //part 2 2nd building 4th floor.......red
    glVertex2f(264,290);
    glVertex2f(264,320);
    glVertex2f(281,320);
    glEnd();

    //Door and window
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(205,285);   //d2 2nd building 4th floor
    glVertex2f(215,285);
    glVertex2f(215,320);
    glVertex2f(205,320);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(209,297);   //d2 2nd building 5th floor
    glVertex2f(210,297);
    glVertex2f(210,312);
    glVertex2f(209,312);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(223,296);   //w1 2nd building 4th floor2
    glVertex2f(243,296);
    glVertex2f(243,312);
    glVertex2f(223,312);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,197,215);
    glVertex2f(223.5,297);   //w1 2nd building 4th floor2
    glVertex2f(242.5,297);
    glVertex2f(242.5,311);
    glVertex2f(223.5,311);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(233.1,296);   //w1 2nd building 4th floor2
    glVertex2f(234,296);
    glVertex2f(234,312);
    glVertex2f(233.1,312);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(253,297);   //w2 2nd building 4th floor2
    glVertex2f(273,297);
    glVertex2f(273,312);
    glVertex2f(253,312);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,197,215);
    glVertex2f(253.5,297);   //w2 2nd building 4th floor2
    glVertex2f(272.5,297);
    glVertex2f(272.5,311);
    glVertex2f(253.5,311);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(263.1,297);   //w2 2nd building 4th floor2
    glVertex2f(264,297);
    glVertex2f(264,312);
    glVertex2f(263.1,312);
    glEnd();

     //floor divided
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(202.5,325);  //2nd building 4th floor1
    glVertex2f(284,325);
    glVertex2f(284,340);
    glVertex2f(202.5,340);
    glEnd();

    ///....5th floor design............///y+55 korchi

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(205,345);   //part 2 2nd building 5th floor red.........
    glVertex2f(281,345);
    glVertex2f(281,375);
    glVertex2f(205,375);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(281,345);   //part 2 2nd building 5th floor.......red
    glVertex2f(264,345);
    glVertex2f(264,375);
    glVertex2f(281,375);
    glEnd();

    //Door and window
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(205,340);   //d2 2nd building 5th floor
    glVertex2f(215,340);
    glVertex2f(215,375);
    glVertex2f(205,375);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(209,352);   //d2 2nd building 5th floor
    glVertex2f(210,352);
    glVertex2f(210,367);
    glVertex2f(209,367);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(223,351);   //w1 2nd building 5th floor2
    glVertex2f(243,351);
    glVertex2f(243,367);
    glVertex2f(223,367);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,197,215);
    glVertex2f(223.5,352);   //w1 2nd building 5th floor2
    glVertex2f(242.5,352);
    glVertex2f(242.5,366);
    glVertex2f(223.5,366);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(233.1,351);   //w1 2nd building 5th floor2
    glVertex2f(234,351);
    glVertex2f(234,367);
    glVertex2f(233.1,367);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(253,352);   //w2 2nd building 4th floor2
    glVertex2f(273,352);
    glVertex2f(273,367);
    glVertex2f(253,367);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,197,215);
    glVertex2f(253.5,352);   //w2 2nd building 5th floor2
    glVertex2f(272.5,352);
    glVertex2f(272.5,366);
    glVertex2f(253.5,366);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(263.1,352);   //w2 2nd building 5th floor2
    glVertex2f(264,352);
    glVertex2f(264,367);
    glVertex2f(263.1,367);
    glEnd();
    ///End 2nd building//

    ///Tower 2nd Building//
    glBegin(GL_QUADS);
    glColor3ub(140, 140, 140);
    glVertex2f(273,395);
    glVertex2f(274,395);
    glVertex2f(274,520);
    glVertex2f(273,520);
    glEnd();

    glColor3ub(102, 102, 102);
    circle(3,6,273,500);
    glColor3ub(217, 217, 217);
    circle(2.5,5,273,500);
    glColor3ub(102, 102, 102);
    circle(2,4,276,485);
    glColor3ub(217, 217, 217);
    circle(1.5,3,276,485);
    //Tower End//

    glBegin(GL_TRIANGLE_FAN); ///triangle tree 2nd Building///
    glColor3ub(75,35,5);
    glVertex2f(290,90);
    glVertex2f(295,90);
    glVertex2f(295,120);
    glVertex2f(290,120);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(139, 146, 22);
    glVertex2f(280,120);
    glVertex2f(305,120);
    glVertex2f(292.5,180);
    glVertex2f(292.5,180);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(139, 146, 22);
    glVertex2f(281,135);
    glVertex2f(304,135);
    glVertex2f(292.5,190);
    glVertex2f(292.5,190);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(139, 146, 22);
    glVertex2f(282,150);
    glVertex2f(303,150);
    glVertex2f(292.5,180);
    glVertex2f(292.5,180);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(139, 146, 22);
    glVertex2f(283,160);
    glVertex2f(302,160);
    glVertex2f(292.5,190);
    glVertex2f(292.5,190);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(139, 146, 22);
    glVertex2f(284,170);
    glVertex2f(301,170);
    glVertex2f(292.5,200);
    glVertex2f(292.5,200);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(139, 146, 22);
    glVertex2f(285,180);
    glVertex2f(300,180);
    glVertex2f(292.5,210);
    glVertex2f(292.5,210);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(139, 146, 22);
    glVertex2f(286,190);
    glVertex2f(299,190);
    glVertex2f(292.5,260);
    glVertex2f(292.5,260);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(139, 146, 22);
    glVertex2f(286,200);
    glVertex2f(299,200);
    glVertex2f(292.5,270);
    glVertex2f(292.5,270);
    glEnd();



    ///3rd Building Design///
///white part///
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(575,90);
    glVertex2f(635,90);
    glVertex2f(635,475);
    glVertex2f(575,475);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(577.5,90);        //3rd Building main part 2
    glVertex2f(631,90);
    glVertex2f(631,460);
    glVertex2f(577.5,460);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(635,90);         //3rd Building 2nd part 2
    glVertex2f(665,90);
    glVertex2f(665,420);
    glVertex2f(635,420);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(635,90);         //3rd Building 2nd part 1
    glVertex2f(662.5,90);
    glVertex2f(662.5,410);
    glVertex2f(635,410);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(637,370);   //part 2 3rd Building 6th floor2..........outlook
    glVertex2f(662.5,370);
    glVertex2f(662.5,400);
    glVertex2f(637,400);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(638,365);   //part 2 3rd Building 6th floor2..........outlook
    glVertex2f(648,365);
    glVertex2f(648,400);
    glVertex2f(638,400);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(643,365);   //Door 3rd Building 6th floor2..........outlook-1
    glVertex2f(644,365);
    glVertex2f(644,392);
    glVertex2f(643,392);
    glEnd();

/////////////****
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(615,90); //3rd Building 3rd Building floor1
    glVertex2f(667,90);
    glVertex2f(667,145);
    glVertex2f(615,145);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(615,145);   //3rd Building 2nd floor1
    glVertex2f(667,145);
    glVertex2f(667,200);
    glVertex2f(615,200);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(615,200);   //3rd Building 3rd floor1
    glVertex2f(667,200);
    glVertex2f(667,255);
    glVertex2f(615,255);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(615,255);   //3rd Building 4th floor1
    glVertex2f(667,255);
    glVertex2f(667,310);
    glVertex2f(615,310);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(615,310);   //3rd Building 5th floor1
    glVertex2f(667,310);
    glVertex2f(667,365);
    glVertex2f(615,365);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(615,365);   //3rd Building 6th floor1
    glVertex2f(667,365);
    glVertex2f(667,420);
    glVertex2f(615,420);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(615,420);   //3rd Building 7th floor1
    glVertex2f(667,420);
    glVertex2f(667,475);
    glVertex2f(615,475);
    glEnd();

     ///design of main building....red and glass....

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(577.5,420);  //7 3rd Building main part3
    glVertex2f(592,420);
    glVertex2f(592,460);
    glVertex2f(577.5,460);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(577.5,365);  //6 3rd Building main part3
    glVertex2f(592,365);
    glVertex2f(592,405);
    glVertex2f(577.5,405);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(577.5,310);  //5 3rd Building main part3
    glVertex2f(592,310);
    glVertex2f(592,350);
    glVertex2f(577.5,350);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(577.5,255);  //4 3rd Building main part3
    glVertex2f(592,255);
    glVertex2f(592,295);
    glVertex2f(577.5,295);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(577.5,200);  //3 3rd Building main part3
    glVertex2f(592,200);
    glVertex2f(592,240);
    glVertex2f(577.5,240);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(577.5,145);  //2 3rd Building main part3
    glVertex2f(592,145);
    glVertex2f(592,185);
    glVertex2f(577.5,185);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(577.5,90);  //1 3rd Building main part3
    glVertex2f(592,90);
    glVertex2f(592,130);
    glVertex2f(577.5,130);
    glEnd();
    /////////.....................
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(620,420);  //7 3rd Building main part3
    glVertex2f(631,420);
    glVertex2f(631,460);
    glVertex2f(620,460);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(620,365);  //6 3rd Building main part3
    glVertex2f(631,365);
    glVertex2f(631,405);
    glVertex2f(620,405);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(620,310);  //5 3rd Building main part3
    glVertex2f(631,310);
    glVertex2f(631,350);
    glVertex2f(620,350);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(620,255);  //4 3rd Building main part3
    glVertex2f(631,255);
    glVertex2f(631,295);
    glVertex2f(620,295);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(620,200);  //3 3rd Building main part3
    glVertex2f(631,200);
    glVertex2f(631,240);
    glVertex2f(620,240);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(620,145);  //2 3rd Building main part3
    glVertex2f(631,145);
    glVertex2f(631,185);
    glVertex2f(620,185);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(610,90);  //door
    glVertex2f(631,90);
    glVertex2f(631,130);
    glVertex2f(610,130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 77);
    glVertex2f(620,90);  //door 1 main
    glVertex2f(621,90);
    glVertex2f(621,130);
    glVertex2f(620,130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(621,100);  //door 1 main
    glVertex2f(622,100);
    glVertex2f(622,120);
    glVertex2f(621,120);
    glEnd();

    //////////............................

    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(575,420);  //7 3rd Building main part3
    glVertex2f(635,420);
    glVertex2f(635,421);
    glVertex2f(575,421);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(575,365);  //6 3rd Building main part3
    glVertex2f(662.5,365);
    glVertex2f(662.5,366);
    glVertex2f(575,366);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(575,310);  //5 3rd Building main part3
    glVertex2f(635,310);
    glVertex2f(635,311);
    glVertex2f(575,311);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(575,255);  //4 3rd Building main part3
    glVertex2f(635,255);
    glVertex2f(635,256);
    glVertex2f(575,256);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(575,199);  //3 3rd Building main part3
    glVertex2f(635,199);
    glVertex2f(635,200);
    glVertex2f(575,200);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(575,145);  //2 3rd Building main part3
    glVertex2f(635,145);
    glVertex2f(635,146);
    glVertex2f(575,146);
    glEnd();

    ///////...............................
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(575,405);  //7 3rd Building main part3
    glVertex2f(635,405);
    glVertex2f(635,406);
    glVertex2f(575,406);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(575,350);  //6 3rd Building main part3
    glVertex2f(635,350);
    glVertex2f(635,351);
    glVertex2f(575,351);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(575,295);  //5 3rd Building main part3
    glVertex2f(635,295);
    glVertex2f(635,296);
    glVertex2f(575,296);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(575,240);  //4 3rd Building main part3
    glVertex2f(635,240);
    glVertex2f(635,241);
    glVertex2f(575,241);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(575,185);  //3 3rd Building main part3
    glVertex2f(635,185);
    glVertex2f(635,186);
    glVertex2f(575,186);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(575,130);  //2 3rd Building main part3
    glVertex2f(635,130);
    glVertex2f(635,131);
    glVertex2f(575,131);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(89, 89, 89);
    glVertex2f(665,90);  // part2 last black line
    glVertex2f(666,90);
    glVertex2f(666,460);
    glVertex2f(665,460);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(635,420);  //7 2nd part3
    glVertex2f(662.5,420);
    glVertex2f(662.5,460);
    glVertex2f(635,460);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(635,365);  //6 2nd part3
    glVertex2f(662.5,365);
    glVertex2f(662.5,405);
    glVertex2f(635,405);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(635,310);  //5 part3
    glVertex2f(662.5,310);
    glVertex2f(662.5,350);
    glVertex2f(635,350);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(635,255);  //4 2nd part3
    glVertex2f(662.5,255);
    glVertex2f(662.5,295);
    glVertex2f(635,295);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(635,200);  //3 2nd part3
    glVertex2f(662.5,200);
    glVertex2f(662.5,240);
    glVertex2f(635,240);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(635,145);  //2 2nd part3
    glVertex2f(662.5,145);
    glVertex2f(662.5,185);
    glVertex2f(635,185);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(635,90);  //1 3rd Building main part3
    glVertex2f(662.5,90);
    glVertex2f(662.5,130);
    glVertex2f(635,130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 77);
    glVertex2f(642,90);  //1 main part3
    glVertex2f(643,90);
    glVertex2f(643,130);
    glVertex2f(642,130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 77);
    glVertex2f(652,90);  //1 main part3
    glVertex2f(653,90);
    glVertex2f(653,130);
    glVertex2f(652,130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(643,100);  //1 main part3
    glVertex2f(644,100);
    glVertex2f(644,120);
    glVertex2f(643,120);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(653,100);  ///1 main part3
    glVertex2f(654,100);
    glVertex2f(654,120);
    glVertex2f(653,120);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 26, 51);
    glVertex2f(635,90);   ///partation of Blue line
    glVertex2f(636,90);
    glVertex2f(636,460);
    glVertex2f(635,460);
    glEnd();

///End 3rd Building//

///Tower 2nd Building//
    glBegin(GL_QUADS);
    glColor3ub(140, 140, 140);
    glVertex2f(635,475);
    glVertex2f(636,475);
    glVertex2f(636,600);
    glVertex2f(635,600);
    glEnd();

    glColor3ub(102, 102, 102);
    circle(3,6,635,577);
    glColor3ub(217, 217, 217);
    circle(2.5,5,635,577);
    glColor3ub(102, 102, 102);
    circle(2,4,638,560);
    glColor3ub(217, 217, 217);
    circle(1.5,3,638,560);
    ///Tower End//

      ///4th Building Design///Top
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);///4th Building main part 2
    glVertex2f(483.5,440);
    glVertex2f(555.2,440);
    glVertex2f(555.2,472);
    glVertex2f(483.5,472);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(483.5,440);        ///4th Building main part 2
    glVertex2f(555.2,440);
    glVertex2f(555.2,467);
    glVertex2f(483.5,467);
    glEnd();
///white part///
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);///4th Building main part 2
    glVertex2f(475,119);
    glVertex2f(563.5,119);
    glVertex2f(563.5,442);
    glVertex2f(475,442);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(477.5,119);        ///4th Building main part 2
    glVertex2f(561,119);
    glVertex2f(561,434);
    glVertex2f(477.5,434);
    glEnd();

    ///floor divided y+40//
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(475,150);  ///4th Building 1st floor1
    glVertex2f(563,150);
    glVertex2f(563,154);
    glVertex2f(475,154);
    glEnd();
    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(475,190);  ///4th Building 2nd floor1
    glVertex2f(563,190);
    glVertex2f(563,193);
    glVertex2f(475,193);
    glEnd();
    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(475,230);  ///4th Building 3rd floor1
    glVertex2f(563,230);
    glVertex2f(563,234);
    glVertex2f(475,234);
    glEnd();
    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(475,270);  ///4th Building 4th floor1
    glVertex2f(563,270);
    glVertex2f(563,273);
    glVertex2f(475,273);
    glEnd();
    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(475,310);  ///4th Building 5th floor1
    glVertex2f(563,310);
    glVertex2f(563,314);
    glVertex2f(475,314);
    glEnd();
    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(475,310);  ///4th Building 6th floor1
    glVertex2f(563,310);
    glVertex2f(563,314);
    glVertex2f(475,314);
    glEnd();
    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(475,350);  ///4th Building 7th floor1
    glVertex2f(563,350);
    glVertex2f(563,353);
    glVertex2f(475,353);
    glEnd();
    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(475,390);  ///4th Building 8th floor1
    glVertex2f(563,390);
    glVertex2f(563,394);
    glVertex2f(475,394);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(491,119);  /// 4th Building white line vertical
    glVertex2f(491.5,119);
    glVertex2f(491.5,440);
    glVertex2f(491,440);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(505,119);  /// 4th Building white line vertical
    glVertex2f(505.5,119);
    glVertex2f(505.5,440);
    glVertex2f(505,440);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(519,119);  /// 4th Building white line vertical
    glVertex2f(519.5,119);
    glVertex2f(519.5,440);
    glVertex2f(519,440);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(533,119);  /// 4th Building white line vertical
    glVertex2f(533.5,119);
    glVertex2f(533.5,440);
    glVertex2f(533,440);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(547,119);  /// 4th Building white line vertical
    glVertex2f(547.5,119);
    glVertex2f(547.5,440);
    glVertex2f(547,440);
    glEnd();

    ///Door
    glBegin(GL_QUADS);
    glColor3ub(0, 26, 51);
    glVertex2f(505,140);  ///4th Building 1st floor1
    glVertex2f(533,140);
    glVertex2f(533,144);
    glVertex2f(505,144);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 26, 51);
    glVertex2f(532,119);  /// 4th Building white line vertical
    glVertex2f(533.6,119);
    glVertex2f(533.6,140);
    glVertex2f(532,140);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 26, 51);
    glVertex2f(518,119);  /// 4th Building white line vertical
    glVertex2f(519.6,119);
    glVertex2f(519.6,140);
    glVertex2f(518,140);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 26, 51);
    glVertex2f(505,119);  ///4th Building white line vertical
    glVertex2f(506.6,119);
    glVertex2f(506.6,140);
    glVertex2f(505,140);
    glEnd();
    ///End 4th Building///

    ///Hospital signboard

    glColor3ub(255, 145, 77);
    glRasterPos2i(504,453);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'H');
    glColor3ub(255, 145, 77);
    glRasterPos2i(509,453);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'O');
    glColor3ub(255, 145, 77);
    glRasterPos2i(513,453);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'S');
    glColor3ub(255, 145, 77);
    glRasterPos2i(517,453);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'P');
    glColor3ub(255, 145, 77);
    glRasterPos2i(521,453);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'I');
    glColor3ub(255, 145, 77);
    glRasterPos2i(525,453);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'T');
    glColor3ub(255, 145, 77);
    glRasterPos2i(529,453);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'A');
    glColor3ub(255, 145, 77);
    glRasterPos2i(534,453);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'L');
    ///End//

    /// Gedung Fakultas Teknik ////
    glBegin(GL_QUADS);
    glColor3ub(0, 94, 196); //background bawah biru
    glVertex2f(320,90);
    glVertex2f(450,90);
    glVertex2f(450,140);
    glVertex2f(320,140);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255); //depan background bawah putih
    glVertex2f(325,95);
    glVertex2f(445,95);
    glVertex2f(445,135);
    glVertex2f(325,135);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(125, 147, 143); //background pintu abu
    glVertex2f(360,95);
    glVertex2f(410,95);
    glVertex2f(410,135);
    glVertex2f(360,135);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115); //pintu abu tua
    glVertex2f(370,90);
    glVertex2f(400,90);
    glVertex2f(400,135);
    glVertex2f(370,135);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217); //jendela bawah kiri
    glVertex2f(330,100);
    glVertex2f(340,100);
    glVertex2f(340,123);
    glVertex2f(330,123);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217); //jendela bawah kiri
    glVertex2f(330,124);
    glVertex2f(340,124);
    glVertex2f(340,130);
    glVertex2f(330,130);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217); //jendela bawah kiri
    glVertex2f(345,100);
    glVertex2f(355,100);
    glVertex2f(355,123);
    glVertex2f(345,123);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217); //jendela bawah kiri
    glVertex2f(345,124);
    glVertex2f(355,124);
    glVertex2f(355,130);
    glVertex2f(345,130);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217); //jendela bawah kanan
    glVertex2f(415,100);
    glVertex2f(425,100);
    glVertex2f(425,123);
    glVertex2f(415,123);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217); //jendela bawah kanan
    glVertex2f(415,124);
    glVertex2f(425,124);
    glVertex2f(425,130);
    glVertex2f(415,130);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217); //jendela bawah kanan
    glVertex2f(430,100);
    glVertex2f(440,100);
    glVertex2f(440,123);
    glVertex2f(430,123);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217); //jendela bawah kanan
    glVertex2f(430,124);
    glVertex2f(440,124);
    glVertex2f(440,130);
    glVertex2f(430,130);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255); //background atas putih
    glVertex2f(314,140);
    glVertex2f(456,140);
    glVertex2f(456,520);
    glVertex2f(314,520);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 94, 196); //tengah biru atas
    glVertex2f(366,157);
    glVertex2f(404,157);
    glVertex2f(404,535);
    glVertex2f(366,535);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217); //kaca kiri atas
    glVertex2f(320,140);
    glVertex2f(360,140);
    glVertex2f(360,480);
    glVertex2f(320,480);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(246, 246, 246); //gariskaca kiri atas
    glVertex2f(327,140);
    glVertex2f(330,140);
    glVertex2f(330,500);
    glVertex2f(327,500);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(246, 246, 246); //gariskaca kiri atas
    glVertex2f(339,140);
    glVertex2f(342,140);
    glVertex2f(342,500);
    glVertex2f(339,500);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(246, 246, 246); //gariskaca kiri atas
    glVertex2f(350,140);
    glVertex2f(353,140);
    glVertex2f(353,500);
    glVertex2f(350,500);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217); //kaca kanan atas
    glVertex2f(404,140);
    glVertex2f(450,140);
    glVertex2f(450,480);
    glVertex2f(404,480);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255); //gariskaca kanan atas
    glVertex2f(415,140);
    glVertex2f(420,140);
    glVertex2f(420,480);
    glVertex2f(415,480);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 94, 196); //jendela kanan atas biru
    glVertex2f(420,180);
    glVertex2f(450,180);
    glVertex2f(450,240);
    glVertex2f(420,240);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 94, 196); //jendela kanan atas biru
    glVertex2f(420,280);
    glVertex2f(450,280);
    glVertex2f(450,340);
    glVertex2f(420,340);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 94, 196); //jendela kanan atas biru
    glVertex2f(420,380);
    glVertex2f(450,380);
    glVertex2f(450,440);
    glVertex2f(420,440);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255); //gariskaca kanan atas
    glVertex2f(434,140);
    glVertex2f(437,140);
    glVertex2f(437,480);
    glVertex2f(434,480);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255); //rooftop putih
    glVertex2f(420,520);
    glVertex2f(456,520);
    glVertex2f(456,550);
    glVertex2f(420,550);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 94, 196); //untuk nama tengah biru
    glVertex2f(355,140);
    glVertex2f(415,140);
    glVertex2f(415,155);
    glVertex2f(355,155);
    glEnd();

    glColor3ub(255, 255, 255);
    glRasterPos2i(371,142);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'T');
    glRasterPos2i(376,142);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'E');
    glRasterPos2i(381,142);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'K');
    glRasterPos2i(386,142);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');
    glRasterPos2i(391,142);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'I');
    glRasterPos2i(396,142);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'K');

    /// END Gedung Teknik ///

    ///....Right side circle tree in Food court.....6 ///
    glColor3ub(139, 146, 22);
    circle(3,6,468,101);
    glColor3ub(139, 146, 22);
    circle(5,12,463,111);
    glColor3ub(139, 146, 22);
    circle(5,12,473,111);
    glColor3ub(139, 146, 22);
    circle(5,12,478,106);
    glColor3ub(139, 146, 22);
    circle(5,12,458,121);


    glColor3ub(181, 106, 76);
    circle(5,12,463,123);
    glColor3ub(139, 146, 22);
    circle(5,12,464,123);
    glColor3ub(139, 146, 22);
    circle(5,12,468,141);
    glColor3ub(139, 146, 22);
    circle(4,10,463,136);
    glColor3ub(181, 106, 76);
    circle(4,10,465,134);

    glColor3ub(139, 146, 22);
    circle(4,10,466,133);

    glColor3ub(139, 146, 22);
    circle(5,12,478,131);
    glColor3ub(139, 146, 22);
    circle(5,12,473,131);
    glColor3ub(181, 106, 76);
    circle(5,12,472,126);
    glColor3ub(139, 146, 22);
    circle(5,12,471,125);
    glColor3ub(139, 146, 22);
    circle(5,12,483,121);
    glColor3ub(181, 106, 76);
    circle(5,12,478,116);
    glColor3ub(139, 146, 22);
    circle(5,12,477,116);
    glColor3ub(139, 146, 22);
    circle(5,12,468,119);
    glColor3ub(139, 146, 22);
    circle(5,12,480,141);



    glColor3ub(227, 91, 137);         ///Full..........Food court .........comp.
    circle(1,2,468,119);
    glColor3ub(227, 91, 137);
    circle(1,2,468,133);
    glColor3ub(227, 91, 137);
    circle(1,2,478,133);
    glColor3ub(227, 91, 137);
    circle(1,2,483,128);
    glColor3ub(227, 91, 137);
    circle(1,2,457,119);
    glColor3ub(227, 91, 137);
    circle(1,2.5,463,134);
    glColor3ub(227, 91, 137);
    circle(1,1.5,464,110);
    glColor3ub(227, 91, 137);
    circle(1,2.5,478,106);
    glColor3ub(227, 91, 137);
    circle(1,3,483,119);
    glColor3ub(227, 91, 137);
    circle(1,3,473,103);


    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside Food Court ........6   ///
    glColor3ub(75, 35, 5);
    glVertex2f(473,90);
    glVertex2f(476,90);
    glVertex2f(475,100);
    glVertex2f(470,130);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside Food Court........6   ///
    glColor3ub(75, 35, 5);
    glVertex2f(473,90);
    glVertex2f(476,90);
    glVertex2f(472,100);
    glVertex2f(466,110);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);  ///tree.........Food Court........6   ///
    glColor3ub(75, 35, 5);
    glVertex2f(472,90);
    glVertex2f(476,90);
    glVertex2f(477,110);
    glVertex2f(480,140);
    glEnd();
///End Right side circle tree///

///....Left side circle tree in Food court.....6 ///
    glColor3ub(139, 146, 22);
    circle(3,6,280,101);
    glColor3ub(139, 146, 22);
    circle(5,12,275,111);
    glColor3ub(139, 146, 22);
    circle(5,12,285,111);
    glColor3ub(139, 146, 22);
    circle(5,12,290,106);
    glColor3ub(139, 146, 22);
    circle(5,12,270,121);


    glColor3ub(181, 106, 76);
    circle(5,12,275,123);
    glColor3ub(139, 146, 22);
    circle(5,12,276,123);
    glColor3ub(139, 146, 22);
    circle(5,12,280,141);
    glColor3ub(139, 146, 22);
    circle(4,10,275,136);
    glColor3ub(181, 106, 76);
    circle(4,10,277,134);

    glColor3ub(139, 146, 22);
    circle(4,10,278,133);

    glColor3ub(139, 146, 22);
    circle(5,12,290,131);
    glColor3ub(139, 146, 22);
    circle(5,12,285,131);
    glColor3ub(181, 106, 76);
    circle(5,12,284,126);
    glColor3ub(139, 146, 22);
    circle(5,12,283,125);
    glColor3ub(139, 146, 22);
    circle(5,12,295,121);
    glColor3ub(181, 106, 76);
    circle(5,12,290,116);
    glColor3ub(139, 146, 22);
    circle(5,12,289,116);
    glColor3ub(139, 146, 22);
    circle(5,12,280,119);
    glColor3ub(139, 146, 22);
    circle(5,12,292,141);



    glColor3ub(227, 91, 137);         ///Full..........Food court .........comp.
    circle(1,2,280,119);
    glColor3ub(227, 91, 137);
    circle(1,2,280,133);
    glColor3ub(227, 91, 137);
    circle(1,2,290,133);
    glColor3ub(227, 91, 137);
    circle(1,2,295,128);
    glColor3ub(227, 91, 137);
    circle(1,2,269,119);
    glColor3ub(227, 91, 137);
    circle(1,2.5,275,134);
    glColor3ub(227, 91, 137);
    circle(1,1.5,276,110);
    glColor3ub(227, 91, 137);
    circle(1,2.5,290,106);
    glColor3ub(227, 91, 137);
    circle(1,3,295,119);
    glColor3ub(227, 91, 137);
    circle(1,3,285,103);


    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside Food Court ........6   ///
    glColor3ub(75, 35, 5);
    glVertex2f(285,90);
    glVertex2f(288,90);
    glVertex2f(287,100);
    glVertex2f(282,130);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside Food Court........6   ///
    glColor3ub(75, 35, 5);
    glVertex2f(285,90);
    glVertex2f(288,90);
    glVertex2f(284,100);
    glVertex2f(278,110);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);  ///tree.........Food Court........6   ///
    glColor3ub(75, 35, 5);
    glVertex2f(284,90);
    glVertex2f(288,90);
    glVertex2f(289,110);
    glVertex2f(292,140);
    glEnd();
///End Left side circle tree///



    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside 4th Building........2   ///
    glColor3ub(75,35,05);
    glVertex2f(545,119);
    glVertex2f(550,119);
    glVertex2f(550,139);
    glVertex2f(545,139);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(139, 146, 22);
    glVertex2f(535,139);
    glVertex2f(560,139);
    glVertex2f(547.5,169);
    glVertex2f(547.5,169);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(139, 146, 22);
    glVertex2f(536,149);
    glVertex2f(559,149);
    glVertex2f(547.5,189);
    glVertex2f(547.5,189);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(139, 146, 22);
    glVertex2f(537,159);
    glVertex2f(558,159);
    glVertex2f(547.5,209);
    glVertex2f(547.5,209);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(139, 146, 22);
    glVertex2f(537.5,169);
    glVertex2f(557.5,169);
    glVertex2f(547.5,214);
    glVertex2f(547.5,214);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(139, 146, 22);
    glVertex2f(538,179);
    glVertex2f(557,179);
    glVertex2f(547.5,224);
    glVertex2f(547.5,224);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(139, 146, 22);
    glVertex2f(540.5,189);
    glVertex2f(554.5,187);
    glVertex2f(547.5,237);
    glVertex2f(549.5,239);
    glEnd();

    ///Lamp post///
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(83, 131, 131);
    glVertex2f(133,81);
    glVertex2f(134,81);
    glVertex2f(134,197);
    glVertex2f(133,197);
    glEnd();
     glBegin(GL_TRIANGLE_FAN);
    glColor3ub(83, 131, 131);
    glVertex2f(233,81);
    glVertex2f(234,81);
    glVertex2f(234,197);
    glVertex2f(233,197);
    glEnd();
     glBegin(GL_TRIANGLE_FAN);
    glColor3ub(83, 131, 131);
    glVertex2f(333,81);
    glVertex2f(334,81);
    glVertex2f(334,197);
    glVertex2f(333,197);
    glEnd();
     glBegin(GL_TRIANGLE_FAN);
    glColor3ub(83, 131, 131);
    glVertex2f(433,81);
    glVertex2f(434,81);
    glVertex2f(434,197);
    glVertex2f(433,197);
    glEnd();
     glBegin(GL_TRIANGLE_FAN);
    glColor3ub(83, 131, 131);
    glVertex2f(533,81);
    glVertex2f(534,81);
    glVertex2f(534,197);
    glVertex2f(533,197);
    glEnd();
     glBegin(GL_TRIANGLE_FAN);
    glColor3ub(83, 131, 131);
    glVertex2f(633,81);
    glVertex2f(634,81);
    glVertex2f(634,197);
    glVertex2f(633,197);
    glEnd();

    ///End//


    glColor3ub(64, 64, 64);
    glRasterPos2i(315,770);

    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'A');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,' ');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'P');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'R');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'O');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'J');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'E');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'C');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'T');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,' ');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'B');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'Y');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,' ');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,' ');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'K');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'E');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'L');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'O');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'M');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'P');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'O');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'K');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,' ');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,' ');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'1');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'1');



    glColor3ub(139, 146, 22);
    circle(8,22,0,150);
    glColor3ub(139, 146, 22);
    circle(8,22,10,170);
    glColor3ub(139, 146, 22);
    circle(8,22,13,140);
    glColor3ub(139, 146, 22);
    circle(7,25,22,150);
    glColor3ub(139, 146, 22);
    circle(8,22,30,150);
    glColor3ub(139, 146, 22);
    circle(10,40,0,250);

    glColor3ub(139, 146, 22);
    circle(9,22,30,295);
    glColor3ub(139, 146, 22);
    circle(8,15,30,293);

    glColor3ub(139, 146, 22);
    circle(9,22,45,285);
    glColor3ub(139, 146, 22);
    circle(9,22,45,280);
    glColor3ub(139, 146, 22);
    circle(8,15,45,275);

    glColor3ub(139, 146, 22);
    circle(9,22,55,235);
    glColor3ub(139, 146, 22);
    circle(9,32,50,255);

    glColor3ub(139, 146, 22);
    circle(9,22,59,225);
    glColor3ub(139, 146, 22);
    circle(9,22,56,255);
    glColor3ub(139, 146, 22);
    circle(9,22,63,195);
    glColor3ub(139, 146, 22);
    circle(9,22,50,180);
    glColor3ub(139, 146, 22);
    circle(9,22,58,165);
    glColor3ub(139, 146, 22);
    circle(9,22,49,150);
    glColor3ub(139, 146, 22);
    circle(9,22,38,140);


    glColor3ub(0, 77, 26);
    circle(10,20,55,190);
    glColor3ub(139, 146, 22);
    circle(9.5,19,55,190);


    glColor3ub(0, 77, 26);
    circle(10,20,55,205);
    glColor3ub(139, 146, 22);
    circle(9.5,20,55,205);


    glColor3ub(0, 77, 26);
    circle(10,20,50,218);
    glColor3ub(139, 146, 22);
    circle(9.5,20,50,218);


    glColor3ub(139, 146, 22);
    circle(10,20,27,130);


    glColor3ub(139, 146, 22);
    circle(35,70,20,200);
    glColor3ub(139, 146, 22);    ///
    circle(15,30,30,255);


    glColor3ub(0, 77, 26);
    circle(10,20,42,225);
    glColor3ub(139, 146, 22);
    circle(9.5,20,42,224);


    glColor3ub(0, 77, 26);
    circle(10,20,30,225);
    glColor3ub(139, 146, 22);
    circle(10,20,30,224);


    glColor3ub(0, 77, 26);
    circle(10,18,42,263);
    glColor3ub(139, 146, 22);
    circle(10,18,42,262);


    glColor3ub(0, 77, 26);
    circle(10,20,30,180);
    glColor3ub(139, 146, 22);
    circle(10,20,30,179);

    glColor3ub(0, 77, 26);
    circle(10,20,20,180);
    glColor3ub(139, 146, 22);
    circle(10,20,20,179);

    glColor3ub(0, 77, 26);
    circle(10,20,40,155);
    glColor3ub(139, 146, 22);
    circle(10,20,40,156);


    glColor3ub(139, 146, 22);
    circle(9,22,20,280);
    glColor3ub(0, 77, 26);
    circle(9,21,20,270);
    glColor3ub(139, 146, 22);
    circle(9,21,20,269);


    glColor3ub(139, 146, 22);
    circle(9,22,10,255);
    glColor3ub(0, 77, 26);
    circle(9,20,10,245);
    glColor3ub(139, 146, 22);
    circle(9,20,10.5,244);


    ///........Tree........D-1........///
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(75,35,5);
    glVertex2f(15,90);
    glVertex2f(22,90);
    glVertex2f(21,100);
    glVertex2f(20,110);
    glVertex2f(18,120);
    glVertex2f(16,130);
    glVertex2f(17,140);
    glVertex2f(18,145);
    glVertex2f(20,150);
    glVertex2f(22,150);
    glVertex2f(21,147);
    glVertex2f(20,145);
    glVertex2f(18,140);
    glVertex2f(16,130);
    glVertex2f(13,120);
    glVertex2f(16,130);
    glVertex2f(18,140);
    glVertex2f(20,145);
    glVertex2f(22,150);
    glVertex2f(22,160);
    glVertex2f(18,150);
    glEnd();


    glBegin(GL_TRIANGLE_FAN);  ///........Tree........D-2.......///
    glColor3ub(75,35,5);
    glVertex2f(15,125);
    glVertex2f(19,130);
    glVertex2f(14,140);
    glVertex2f(14,150);
    glVertex2f(13,160);
    glVertex2f(10,170);
    glVertex2f(12,170);
    glVertex2f(12,160);
    glVertex2f(11,150);
    glVertex2f(11,140);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);   ///tree...................D-3 p2  ///
    glColor3ub(75,35,5);
    glVertex2f(31,140);
    glVertex2f(29,140);
    glVertex2f(28,120);
    glVertex2f(25,120);
    glEnd();


    glBegin(GL_TRIANGLE_FAN);  ///tree..................D-3 p1   ///
    glColor3ub(75,35,5);
    glVertex2f(16,100);
    glVertex2f(21,100);
    glVertex2f(24.5,120);
    glVertex2f(28,120);
    glEnd();


    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside 3rd Building........1   ///
    glColor3ub(139,99,47);
    glVertex2f(670,90);
    glVertex2f(675,90);
    glVertex2f(675,120);
    glVertex2f(670,120);
    glEnd();


    glBegin(GL_TRIANGLE_FAN);  ///triangle tree 1.........beside 3rd building........1   ///
    glColor3ub(0,99,47);
    glVertex2f(660,120);
    glVertex2f(685,120);
    glVertex2f(672.5,180);
    glVertex2f(672.5,180);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,99,47);
    glVertex2f(661,135);
    glVertex2f(684,135);
    glVertex2f(672.5,190);
    glVertex2f(672.5,190);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,99,47);
    glVertex2f(662,150);
    glVertex2f(683,150);
    glVertex2f(672.5,180);
    glVertex2f(672.5,180);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,99,47);
    glVertex2f(663,160);
    glVertex2f(682,160);
    glVertex2f(672.5,190);
    glVertex2f(672.5,190);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,99,47);
    glVertex2f(664,170);
    glVertex2f(681,170);
    glVertex2f(672.5,200);
    glVertex2f(672.5,200);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,99,47);
    glVertex2f(665,180);
    glVertex2f(680,180);
    glVertex2f(672.5,210);
    glVertex2f(672.5,210);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,99,47);
    glVertex2f(666,190);
    glVertex2f(679,190);
    glVertex2f(672.5,260);
    glVertex2f(672.5,260);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,99,47);
    glVertex2f(666,200);
    glVertex2f(679,200);
    glVertex2f(672.5,270);
    glVertex2f(672.5,270);
    glEnd();


    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside 3rd Building........2   ///
    glColor3ub(139,99,47);
    glVertex2f(650,90);
    glVertex2f(655,90);
    glVertex2f(655,110);
    glVertex2f(650,110);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,99,47);
    glVertex2f(640,110);
    glVertex2f(665,110);
    glVertex2f(652.5,140);
    glVertex2f(652.5,140);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,99,47);
    glVertex2f(641,120);
    glVertex2f(664,120);
    glVertex2f(652.5,160);
    glVertex2f(652.5,160);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,99,47);
    glVertex2f(642,130);
    glVertex2f(663,130);
    glVertex2f(652.5,180);
    glVertex2f(652.5,180);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(642.5,140);
    glVertex2f(662.5,140);
    glVertex2f(652.5,185);
    glVertex2f(652.5,185);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(643,150);
    glVertex2f(662,150);
    glVertex2f(652.5,195);
    glVertex2f(652.5,195);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(643.5,160);
    glVertex2f(661.5,160);
    glVertex2f(652.5,210);
    glVertex2f(652.5,210);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(644,170);
    glVertex2f(661,170);
    glVertex2f(652.5,230);
    glVertex2f(652.5,230);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(644.5,180);
    glVertex2f(660.5,180);
    glVertex2f(652.5,250);
    glVertex2f(652.5,250);
    glEnd();


    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside 3rd Building........3   ///
    glColor3ub(139,99,47);
    glVertex2f(680,90);
    glVertex2f(685,90);
    glVertex2f(685,100);
    glVertex2f(680,100);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(675,100);
    glVertex2f(690,100);
    glVertex2f(682.5,130);
    glVertex2f(682.5,130);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(676,110);
    glVertex2f(689,110);
    glVertex2f(682.5,140);
    glVertex2f(682.5,140);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(677,122);
    glVertex2f(688,122);
    glVertex2f(682.5,155);
    glVertex2f(682.5,155);
    glEnd();


    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside 3rd Building........4   ///
    glColor3ub(139,99,47);
    glVertex2f(690,90);
    glVertex2f(695,90);
    glVertex2f(695,105);
    glVertex2f(690,105);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,99,47);
    glVertex2f(685,105);
    glVertex2f(700,105);
    glVertex2f(692.5,135);
    glVertex2f(692.5,135);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(686,115);
    glVertex2f(699,115);
    glVertex2f(692.5,145);
    glVertex2f(692.5,145);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
    glVertex2f(687,127);
    glVertex2f(698,127);
    glVertex2f(692.5,165);
    glVertex2f(692.5,165);
    glEnd();


    glColor3ub(0, 153, 51);      ///....tree.........beside 3rd Building........6 ///
    circle(3,6,575,100);
    glColor3ub(0, 153, 51);
    circle(5,12,570,110);
    glColor3ub(0, 153, 51);
    circle(5,12,580,110);
    glColor3ub(0, 153, 51);
    circle(5,12,585,105);
    glColor3ub(0, 153, 51);
    circle(5,12,565,120);


    glColor3ub(0, 102, 00);
    circle(5,12,570,122);
    glColor3ub(0, 153, 51);
    circle(5,12,571,122);
    glColor3ub(0, 153, 51);
    circle(5,12,575,140);
    glColor3ub(0, 153, 51);
    circle(4,10,570,135);
    glColor3ub(0, 102, 0);
    circle(4,10,572,133);

    glColor3ub(0, 153, 51);
    circle(4,10,573,132);

    glColor3ub(0, 153, 51);
    circle(5,12,585,130);
    glColor3ub(0, 153, 51);
    circle(5,12,580,130);
    glColor3ub(0, 102, 0);
    circle(5,12,579,125);
    glColor3ub(0, 153, 51);
    circle(5,12,578,124);
    glColor3ub(0, 153, 51);
    circle(5,12,590,120);
    glColor3ub(0, 102, 0);
    circle(5,12,585,115);
    glColor3ub(0, 153, 51);
    circle(5,12,584,115);
    glColor3ub(0, 153, 51);
    circle(5,12,575,118);
    glColor3ub(0, 153, 51);
    circle(5,12,587,140);



    glColor3ub(255, 255, 255);         ///Full..........3rd Building.........comp.
    circle(1,2,575,118);
    glColor3ub(255, 255, 255);
    circle(1,2,575,138);
    glColor3ub(255, 255, 255);
    circle(1,2,585,138);
    glColor3ub(255, 255, 255);
    circle(1,2,580,127);
    glColor3ub(255, 255, 255);
    circle(1,2,564,118);
    glColor3ub(255, 255, 255);
    circle(1,2.5,570,133);
    glColor3ub(255, 255, 255);
    circle(1,1.5,571,109);
    glColor3ub(255, 255, 255);
    circle(1,2.5,585,105);
    glColor3ub(255, 255, 255);
    circle(1,3,590,118);
    glColor3ub(255, 255, 255);
    circle(1,3,585,120);


    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside 3rd Building........6   ///
    glColor3ub(75,35,5);
    glVertex2f(580,90);
    glVertex2f(583,90);
    glVertex2f(582,100);
    glVertex2f(577,130);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside 3rd Building........6   ///
    glColor3ub(75,35,5);
    glVertex2f(580,90);
    glVertex2f(583,90);
    glVertex2f(579,100);
    glVertex2f(573,110);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside 3rd Building........6   ///
    glColor3ub(75,35,5);
    glVertex2f(579,90);
    glVertex2f(583,90);
    glVertex2f(584,110);
    glVertex2f(587,140);
    glEnd();


    glColor3ub(253, 183, 77);    ///.........S U N.....................///
    circle(18,36,400,705);
    glColor3ub(253, 183, 77);
    circle(16.5,33,400,705);
    glColor3ub(253, 183, 77);
    circle(14.5,30,400,705);
    glColor3ub(253, 183, 77);
    circle(12.5,27,400,705);


    glColor3ub(232,241,255);        ///....Megh.......1 covering sun.... awan///
    circle(13,20,400,665);
    glColor3ub(252,254,255);
    circle(11,18,400,665);

    glColor3ub(232,241,255);
    circle(10,20,410,675);
    glColor3ub(252,254,255);
    circle(10,20,412,672);

    glColor3ub(232,241,255);
    circle(13,20,410,655);

    glColor3ub(221,229,247);
    circle(9,20,420,680);
    glColor3ub(252,254,255);
    circle(8,18,420,679);

    glColor3ub(232,241,255);
    circle(9,20,420,650);
    glColor3ub(252,254,255);
    circle(8,18,420,652);

    glColor3ub(221,229,247);
    circle(9,20,430,685);
    glColor3ub(252,254,255);
    circle(8,18,430,683);

    glColor3ub(232,241,255);
    circle(9,20,425,655);
    glColor3ub(252,254,255);
    circle(8,18,435,657);

    glColor3ub(232,241,255);
    circle(9,20,440,675);

    glColor3ub(221,229,247);
    circle(8,18,445,665);
    glColor3ub(252,254,255);
    circle(8,18,443,663);
    glColor3ub(252,254,255);
    circle(18,18,420,664);
    glColor3ub(252,254,255);
    circle(18,25,417,665);


    glColor3ub(232,241,255);        ///....Megh.......2.....///
    circle(13,20,p+200,745);
    glColor3ub(252,254,255);
    circle(11,18,p+200,745);

    glColor3ub(232,241,255);
    circle(10,20,p+210,755);
    glColor3ub(252,254,255);
    circle(10,20,p+212,762);

    glColor3ub(232,241,255);
    circle(13,20,p+210,735);

    glColor3ub(221,229,247);
    circle(9,20,p+220,750);
    glColor3ub(252,254,255);
    circle(8,18,p+220,759);

    glColor3ub(232,241,255);
    circle(9,20,p+220,756);
    glColor3ub(252,254,255);
    circle(8,18,p+220,752);

    glColor3ub(232,241,255);
    circle(9,20,p+230,765);
    glColor3ub(252,254,255);
    circle(8,18,p+230,761);

    glColor3ub(232,241,255);
    circle(9,20,p+225,745);
    glColor3ub(252,254,255);
    circle(8,18,p+235,747);

    glColor3ub(232,241,255);
    circle(9,20,p+240,755);

    glColor3ub(221,229,247);
    circle(8,18,p+243,745);
    glColor3ub(252,254,255);
    circle(8,18,p+240,743);
    glColor3ub(173,197,224);
    circle(8,18,p+230,733);
    glColor3ub(252,254,255);
    circle(8,18,p+230,738);
    glColor3ub(173,197,224);
    circle(8,18,p+220,723);
    glColor3ub(252,254,255);
    circle(8,18,p+220,728);



    glColor3ub(252,254,255);
    circle(23,9,p+245,744);
    glColor3ub(173,197,224);
    circle(21,10,p+240,720);
    glColor3ub(252,254,255);
    circle(21,11,p+238,723);


    glColor3ub(252,254,255);
    circle(18,18,p+210,744);
    glColor3ub(252,254,255);
    circle(18,25,p+220,745);

    glColor3ub(173,197,224);
    circle(10,20,p+235,715);
    glColor3ub(252,254,255);
    circle(10,20,p+235,719);



    glColor3ub(173,197,224);        ///....Megh.......3.....///
    circle(9,15,p+20,685);
    glColor3ub(252,254,255);
    circle(6,14,p+21,685);

    glColor3ub(232,241,255);
    circle(7,16,p+30,695);
    glColor3ub(252,254,255);
    circle(7,14,p+32,692);

    glColor3ub(252,254,255);
    circle(12,16,p+28,680);

    glColor3ub(221,229,247);
    circle(10,15,p+45,690);
    glColor3ub(252,254,255);
    circle(9,13,p+43,685);
    glColor3ub(252,254,255);
    circle(15,18,p+48,670);

    glColor3ub(173,197,224);
    circle(6,14,p+30,680);
    glColor3ub(252,254,255);
    circle(6,13,p+30,677);

    glColor3ub(173,197,224);
    circle(6,14,p+38,668);
    glColor3ub(252,254,255);
    circle(6,13,p+36,667);


    glColor3ub(252,254,255);
    circle(11,15,p+29,668);

     ///....Megh.......4.....///

    glColor3ub(173,197,224);
    circle(9,15,590,695);
    glColor3ub(252,254,255);
    circle(6,14,591,695);

    glColor3ub(232,241,255);
    circle(7,16,600,705);
    glColor3ub(252,254,255);
    circle(7,14,602,702);

    glColor3ub(252,254,255);
    circle(12,16,598,690);

    glColor3ub(221,229,247);
    circle(10,15,615,700);
    glColor3ub(252,254,255);
    circle(9,13,613,695);
    glColor3ub(252,254,255);
    circle(15,18,618,680);

    glColor3ub(173,197,224);
    circle(6,14,600,690);
    glColor3ub(252,254,255);
    circle(6,13,600,687);

    glColor3ub(173,197,224);
    circle(6,14,608,678);
    glColor3ub(252,254,255);
    circle(6,13,606,677);


    glColor3ub(252,254,255);
    circle(11,15,599,678);



    if(p<= 800)
        p = p + 0.1;
    else
        p = -10;



    ///..........B U S...........1

    if(j<= 800)
        j = j + 0.3;
    else
        j = -250;

    glBegin(GL_QUADS);
    glColor3ub(255, 81, 76);
    glVertex2f(j+90,98);  //bus...................
    glVertex2f(j+95,98);
    glVertex2f(j+95,100);
    glVertex2f(j+90,100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(26, 26, 0);
    glVertex2f(j+94,89);   // bus font glass
    glVertex2f(j+96,89);
    glVertex2f(j+96,100);
    glVertex2f(j+94,100);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 81, 76);
    glVertex2f(j+10,80);  //.....bus
    glVertex2f(j+90,80);
    glVertex2f(j+90,105);
    glVertex2f(j+10,105);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 81, 76);
    glVertex2f(j+10,55);  //top..........lowerpart
    glVertex2f(j+92,55);
    glVertex2f(j+92,80);
    glVertex2f(j+10,80);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 51, 0);
    glVertex2f(j+11,81);  //top..........
    glVertex2f(j+89,81);
    glVertex2f(j+89,102);
    glVertex2f(j+11,102);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(j+12,85);  //window..........
    glVertex2f(j+20,85);
    glVertex2f(j+20,100);
    glVertex2f(j+12,100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(j+22,85);  //window..........
    glVertex2f(j+30,85);
    glVertex2f(j+30,100);
    glVertex2f(j+22,100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(j+32,85);  //window..........
    glVertex2f(j+40,85);
    glVertex2f(j+40,100);
    glVertex2f(j+32,100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(j+42,85);  //window..........
    glVertex2f(j+50,85);
    glVertex2f(j+50,100);
    glVertex2f(j+42,100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(j+52,85);  //window..........
    glVertex2f(j+60,85);
    glVertex2f(j+60,100);
    glVertex2f(j+52,100);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230, 247, 255);
    glVertex2f(j+62,55);  //..door..........
    glVertex2f(j+70,55);
    glVertex2f(j+70,95);
    glVertex2f(j+62,95);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(j+72,85);  //window..........
    glVertex2f(j+80,85);
    glVertex2f(j+80,100);
    glVertex2f(j+72,100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(j+82,85);  //window..........
    glVertex2f(j+88,85);
    glVertex2f(j+88,100);
    glVertex2f(j+82,100);
    glEnd();

    glColor3ub(255, 255, 204);  //....chaka....back
    circle(4,8,j+45,65);
    glColor3ub(255, 255, 204);
    circle(2,4,j+55,75);
    glColor3ub(255, 255, 204);
    circle(3,6,j+15,75);
    glColor3ub(255, 255, 204);
    circle(2,4,j+35,65);
    glColor3ub(255, 255, 204);
    circle(2,4,j+75,75);


    glColor3ub(0,0,0);  //....chaka....back
    circle(5,10,j+25,55);
    glColor3ub(255,255,255);
    circle(3,6,j+25,55);

    glColor3ub(0,0,0);
    circle(5,10,j+78,55);
    glColor3ub(255,255,255);
    circle(3,6,j+78,55);

    glColor3ub(0, 51, 204);
    glRasterPos2i(j+43,65);

    glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'T');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'I');

    ///..........B U S...........2

    if(k<= 800)
        k = k + 0.3;
    else
        k = -100;

    glBegin(GL_QUADS);
    glColor3ub(43, 58, 139);
    glVertex2f(k+90,98);  //bus...................
    glVertex2f(k+95,98);
    glVertex2f(k+95,100);
    glVertex2f(k+90,100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(26, 26, 0);
    glVertex2f(k+94,89);  // bus font glass
    glVertex2f(k+96,89);
    glVertex2f(k+96,100);
    glVertex2f(k+94,100);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(43, 58, 139);
    glVertex2f(k+10,80);  //.....bus
    glVertex2f(k+90,80);
    glVertex2f(k+90,105);
    glVertex2f(k+10,105);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(43, 58, 139);
    glVertex2f(k+10,55);  //top..........lowerpart
    glVertex2f(k+92,55);
    glVertex2f(k+92,80);
    glVertex2f(k+10,80);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 51, 0);
    glVertex2f(k+11,81);  //top..........
    glVertex2f(k+89,81);
    glVertex2f(k+89,102);
    glVertex2f(k+11,102);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(k+12,85);  //window..........
    glVertex2f(k+20,85);
    glVertex2f(k+20,100);
    glVertex2f(k+12,100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(k+22,85);  //window..........
    glVertex2f(k+30,85);
    glVertex2f(k+30,100);
    glVertex2f(k+22,100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(k+32,85);  //window..........
    glVertex2f(k+40,85);
    glVertex2f(k+40,100);
    glVertex2f(k+32,100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(k+42,85);  //window..........
    glVertex2f(k+50,85);
    glVertex2f(k+50,100);
    glVertex2f(k+42,100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(k+52,85);  //window..........
    glVertex2f(k+60,85);
    glVertex2f(k+60,100);
    glVertex2f(k+52,100);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230, 247, 255);
    glVertex2f(k+62,55);  //..door..........
    glVertex2f(k+70,55);
    glVertex2f(k+70,95);
    glVertex2f(k+62,95);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(k+72,85);  //window..........
    glVertex2f(k+80,85);
    glVertex2f(k+80,100);
    glVertex2f(k+72,100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 255, 255);
    glVertex2f(k+82,85);  //window..........
    glVertex2f(k+88,85);
    glVertex2f(k+88,100);
    glVertex2f(k+82,100);
    glEnd();

    glColor3ub(255, 255, 204);  //....chaka....back
    circle(4,8,k+45,65);
    glColor3ub(255, 255, 204);
    circle(2,4,k+55,75);
    glColor3ub(255, 255, 204);
    circle(3,6,k+15,75);
    glColor3ub(255, 255, 204);
    circle(2,4,k+35,65);
    glColor3ub(255, 255, 204);
    circle(2,4,k+75,75);


    glColor3ub(0,0,0);  //....chaka....back
    circle(5,10,k+25,55);
    glColor3ub(255,255,255);
    circle(3,6,k+25,55);

    glColor3ub(0,0,0);
    circle(5,10,k+78,55);
    glColor3ub(255,255,255);
    circle(3,6,k+78,55);

    glColor3ub(255, 81, 76);
    glRasterPos2i(k+40,65);

    glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'T');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'I');
    glutPostRedisplay();
    glutSwapBuffers();

    glFlush();
}


int main (int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	  // giving window size in X- and Y- direction
    glutInitWindowSize(1450, 750);
    glutInitWindowPosition(100, 0);
	  // Giving name to window
    glutCreateWindow("IKN City 2D");
    myInit();
    glutDisplayFunc(display);
    glutMainLoop();
}
