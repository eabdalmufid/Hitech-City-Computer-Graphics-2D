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

void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)///radius_x,radius_y,certre_position_x,centre_position_y///
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
float k= -50;

void display ()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 147);
    glVertex2f(0,100);
    glVertex2f(800,100);
    glColor3ub(102, 204, 255);
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



    ///........AB 2 main part-1
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
    glVertex2f(280,90);
    glVertex2f(280,145);
    glVertex2f(90,145);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(90,145);   //1st Building 2nd floor1
    glVertex2f(280,145);
    glVertex2f(280,200);
    glVertex2f(90,200);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(90,200);   //1st Building 3rd floor1
    glVertex2f(280,200);
    glVertex2f(280,255);
    glVertex2f(90,255);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(90,255);   //1st Building 4th floor1
    glVertex2f(280,255);
    glVertex2f(280,310);
    glVertex2f(90,310);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(90,310);   //1st Building 5th floor1
    glVertex2f(280,310);
    glVertex2f(280,365);
    glVertex2f(90,365);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(90,365);   //1st Building 6th floor1
    glVertex2f(280,365);
    glVertex2f(280,420);
    glVertex2f(90,420);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(90,420);   //1st Building 7th floor1
    glVertex2f(280,420);
    glVertex2f(280,475);
    glVertex2f(90,475);
    glEnd();



    glColor3ub(0, 51, 204);
    glRasterPos2i(183,465);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'D');
    glColor3ub(115, 115, 115);
    glRasterPos2i(189,465);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'I');
    glColor3ub(0, 102, 34);
    glRasterPos2i(193,465);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'U');


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
    glVertex2f(110,420);   //part 2 1st Building 7th floor2
    glVertex2f(277,420);
    glVertex2f(277,460);
    glVertex2f(110,460);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(140,365);   //part 2 1st Building 6th floor2
    glVertex2f(277,365);
    glVertex2f(277,405);
    glVertex2f(140,405);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(140,310);   //part 2 1st Building 5th floor2
    glVertex2f(277,310);
    glVertex2f(277,350);
    glVertex2f(140,350);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(140,255);   //part 2 1st Building 4th floor2
    glVertex2f(277,255);
    glVertex2f(277,295);
    glVertex2f(140,295);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(140,200);   //part 2 1st Building 3rd floor2
    glVertex2f(277,200);
    glVertex2f(277,240);
    glVertex2f(140,240);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(140,145);   //part 2 1st Building 2nd floor2
    glVertex2f(277,145);
    glVertex2f(277,185);
    glVertex2f(140,185);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(140,90);  //part 2 1st Building 1st floor2
    glVertex2f(277,90);
    glVertex2f(277,130);
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
    glVertex2f(50,240);  //4 v main part3
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
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(196,425);   //part 2 1st Building 7th floor2
    glVertex2f(274,425);
    glVertex2f(274,455);
    glVertex2f(196,455);
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
    glColor3ub(123, 88, 71);
    glVertex2f(196,420);   //d2 1st Building 7th floor2
    glVertex2f(206,420);
    glVertex2f(206,455);
    glVertex2f(196,455);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(201,430);   //d2 1st Building 7th floor2
    glVertex2f(202,430);
    glVertex2f(202,445);
    glVertex2f(201,445);
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

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(215,432);   //w3 1st Building 7th floor2
    glVertex2f(235,432);
    glVertex2f(235,448);
    glVertex2f(215,448);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(215.5,433);   //w3 1st Building 7th floor2
    glVertex2f(234.5,433);
    glVertex2f(234.5,447);
    glVertex2f(215.5,447);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(225,432);   //w3 1st Building 7th floor2
    glVertex2f(226,432);
    glVertex2f(226,448);
    glVertex2f(225,448);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(245,432);   //w4 1st Building 7th floor2
    glVertex2f(265,432);
    glVertex2f(265,448);
    glVertex2f(245,448);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(245.5,433);   //w4 1st Building 7th floor2
    glVertex2f(264.5,433);
    glVertex2f(264.5,447);
    glVertex2f(245.5,447);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(255,432);   //w4 v 7th floor2
    glVertex2f(256,432);
    glVertex2f(256,448);
    glVertex2f(255,448);
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
    glColor3ub(177,124,119);
    glVertex2f(196,370);   //part 2 1st Building 6th floor2
    glVertex2f(274,370);
    glVertex2f(274,400);
    glVertex2f(196,400);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(196,365);   //d2 1st Building 6th floor2
    glVertex2f(206,365);
    glVertex2f(206,400);
    glVertex2f(196,400);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(201,375);   //d2 1st Building 6th floor2
    glVertex2f(202,375);
    glVertex2f(202,390);
    glVertex2f(201,390);
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

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(215,377);   //w3 1st Building 6th floor2
    glVertex2f(235,377);
    glVertex2f(235,393);
    glVertex2f(215,393);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(215.5,378);   //w3 1st Building 6th floor2
    glVertex2f(234.5,378);
    glVertex2f(234.5,392);
    glVertex2f(215.5,392);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(225,377);   //w3 1st Building 6th floor2
    glVertex2f(226,377);
    glVertex2f(226,393);
    glVertex2f(225,393);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(245,377);   //w4 1st Building 6th floor2
    glVertex2f(265,377);
    glVertex2f(265,393);
    glVertex2f(245,393);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(245.5,378);   //w4 1st Building 6th floor2
    glVertex2f(264.5,378);
    glVertex2f(264.5,392);
    glVertex2f(245.5,392);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(255,377);   //w4 1st Building 6th floor2
    glVertex2f(256,377);
    glVertex2f(256,393);
    glVertex2f(255,393);
    glEnd();



    ///5th floor......design

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(141,315);   //part 2 1st Building 5th floor2.........
    glVertex2f(191,315);
    glVertex2f(191,345);
    glVertex2f(141,345);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(196,315);   //part 2 1st Building 5th floor2
    glVertex2f(274,315);
    glVertex2f(274,345);
    glVertex2f(196,345);
    glEnd();

    ///....door.....window


    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(196,310);   //d2 1st Building 5th floor
    glVertex2f(206,310);
    glVertex2f(206,345);
    glVertex2f(196,345);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(201,320);   //d2 1st Building 5th floor
    glVertex2f(202,320);
    glVertex2f(202,335);
    glVertex2f(201,335);
    glEnd();



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

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(215,322);   //w3 1st Building 5th floor2
    glVertex2f(235,322);
    glVertex2f(235,338);
    glVertex2f(215,338);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(215.5,323);   //w3 1st Building 5th floor2
    glVertex2f(234.5,323);
    glVertex2f(234.5,337);
    glVertex2f(215.5,337);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(225,323);   //w3 1st Building 5th floor2
    glVertex2f(226,323);
    glVertex2f(226,338);
    glVertex2f(225,338);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(245,322);   //w4 1st Building 5th floor2
    glVertex2f(265,322);
    glVertex2f(265,338);
    glVertex2f(245,338);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(245.5,323);   //w4 1st Building 5th floor2
    glVertex2f(264.5,323);
    glVertex2f(264.5,337);
    glVertex2f(245.5,337);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(255,322);   //w4 1st Building 5th floor2
    glVertex2f(256,322);
    glVertex2f(256,338);
    glVertex2f(255,338);
    glEnd();



    ///....4TH floor design............

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(141,260);   //part 2 1st Building 5th floor2.........
    glVertex2f(191,260);
    glVertex2f(191,290);
    glVertex2f(141,290);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(196,260);   //part 2 1st Building 4th floor.......red
    glVertex2f(274,260);
    glVertex2f(274,290);
    glVertex2f(196,290);
    glEnd();


    ///....door.....window

    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(196,255);   //d2 1st Building 4th floor
    glVertex2f(206,255);
    glVertex2f(206,290);
    glVertex2f(196,290);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(201,265);   //d2 1st Building 4th floor
    glVertex2f(202,265);
    glVertex2f(202,280);
    glVertex2f(201,280);
    glEnd();


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

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(215,267);   //w3 1st Building 4th floor2
    glVertex2f(235,267);
    glVertex2f(235,283);
    glVertex2f(215,283);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(215.5,268);   //w3 1st Building 4th floor2
    glVertex2f(234.5,268);
    glVertex2f(234.5,282);
    glVertex2f(215.5,282);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(225,267);   //w3 1st Building 4th floor2
    glVertex2f(226,267);
    glVertex2f(226,283);
    glVertex2f(225,283);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(245,267);   //w4 1st Building 4th floor2
    glVertex2f(265,267);
    glVertex2f(265,283);
    glVertex2f(245,283);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(245.5,268);   //w4 1st Building 4th floor2
    glVertex2f(264.5,268);
    glVertex2f(264.5,282);
    glVertex2f(245.5,282);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(255,267);   //w4 1st Building 4th floor2
    glVertex2f(256,267);
    glVertex2f(256,283);
    glVertex2f(255,283);
    glEnd();



    ///....3TH floor design............

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(141,205);   //part 2 1st Building 3th floor2.........
    glVertex2f(191,205);
    glVertex2f(191,235);
    glVertex2f(141,235);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(196,205);   //part 2 1st Building 3th floor.......red
    glVertex2f(274,205);
    glVertex2f(274,235);
    glVertex2f(196,235);
    glEnd();


    ///....door.....window

    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(196,200);   //d2 1st Building 3rd floor
    glVertex2f(206,200);
    glVertex2f(206,235);
    glVertex2f(196,235);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(201,210);   //d2 1st Building 3rd floor
    glVertex2f(202,210);
    glVertex2f(202,225);
    glVertex2f(201,225);
    glEnd();

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

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(215,212);   //w3 1st Building 3rd floor2
    glVertex2f(235,212);
    glVertex2f(235,228);
    glVertex2f(215,228);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(215.5,213);   //w3 1st Building 3rd floor2
    glVertex2f(234.5,213);
    glVertex2f(234.5,227);
    glVertex2f(215.5,227);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(225,212);   //w3 1st Building 3rd floor2
    glVertex2f(226,212);
    glVertex2f(226,228);
    glVertex2f(225,228);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(245,212);   //w4 1st Building 3rd floor2
    glVertex2f(265,212);
    glVertex2f(265,228);
    glVertex2f(245,228);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(245.5,213);   //w4 1st Building 3rd floor2
    glVertex2f(264.5,213);
    glVertex2f(264.5,227);
    glVertex2f(245.5,227);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(255,212);   //w4 1st Building 3rd floor2
    glVertex2f(256,212);
    glVertex2f(256,228);
    glVertex2f(255,228);
    glEnd();



    ///....2nd floor design............

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(141,150);   //part 2 1st Building 2nd floor2.........
    glVertex2f(191,150);
    glVertex2f(191,180);
    glVertex2f(141,180);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(196,150);   //part 2 1st Building 2nd floor.......red
    glVertex2f(274,150);
    glVertex2f(274,180);
    glVertex2f(196,180);
    glEnd();


    ///....door.....window

    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(196,145);   //d2 1st Building 2nd floor
    glVertex2f(206,145);
    glVertex2f(206,180);
    glVertex2f(196,180);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(201,155);   //d2 1st Building 2nd floor
    glVertex2f(202,155);
    glVertex2f(202,170);
    glVertex2f(201,170);
    glEnd();



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

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(215,157);   //w3 1st Building 2nd floor2
    glVertex2f(235,157);
    glVertex2f(235,173);
    glVertex2f(215,173);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(215.5,158);   //w3 1st Building 2nd floor2
    glVertex2f(234.5,158);
    glVertex2f(234.5,172);
    glVertex2f(215.5,172);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(225,157);   //w3 1st Building 2nd floor2
    glVertex2f(226,157);
    glVertex2f(226,173);
    glVertex2f(225,173);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(245,157);   //w4 1st Building 2nd floor2
    glVertex2f(265,157);
    glVertex2f(265,173);
    glVertex2f(245,173);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(245.5,158);   //w4 1st Building 2nd floor2
    glVertex2f(264.5,158);
    glVertex2f(264.5,172);
    glVertex2f(245.5,172);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(255,157);   //w4 1st Building 2nd floor2
    glVertex2f(256,157);
    glVertex2f(256,173);
    glVertex2f(255,173);
    glEnd();



    ///....1st floor design............

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(141,95);   //part 2 1st Building 1st floor red.........
    glVertex2f(191,95);
    glVertex2f(191,125);
    glVertex2f(141,125);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(196,95);   //part 2 1st Building 1st floor.......red
    glVertex2f(274,95);
    glVertex2f(274,125);
    glVertex2f(196,125);
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

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(215,102);   //w3 1st Building 1st floor2
    glVertex2f(235,102);
    glVertex2f(235,118);
    glVertex2f(215,118);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(215.5,103);   //w3 1st Building 1st floor2
    glVertex2f(234.5,103);
    glVertex2f(234.5,117);
    glVertex2f(215.5,117);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(225,102);   //w3 1st Building 1st floor2
    glVertex2f(226,102);
    glVertex2f(226,118);
    glVertex2f(225,118);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(245,102);   //w4 1st Building 1st floor2
    glVertex2f(265,102);
    glVertex2f(265,118);
    glVertex2f(245,118);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(245.5,103);   //w4 1st Building 1st floor2
    glVertex2f(264.5,103);
    glVertex2f(264.5,117);
    glVertex2f(245.5,117);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(255,102);   //w4 1st Building 1st floor2
    glVertex2f(256,102);
    glVertex2f(256,118);
    glVertex2f(255,118);
    glEnd();

    /////////////////
    ///........2nd building main part/////
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(300,120);
    glVertex2f(397,120);
    glVertex2f(397,395);
    glVertex2f(300,395);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(302.5,120);        //2nd building main part 2
    glVertex2f(394,120);
    glVertex2f(394,380);
    glVertex2f(302.5,380);
    glEnd();

   ///....1st floor design............

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(305,125);   //part 2 2nd building 1st floor red.........
    glVertex2f(391,125);
    glVertex2f(391,155);
    glVertex2f(305,155);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(391,125);   //part 2 2nd building 1st floor.......red
    glVertex2f(374,125);
    glVertex2f(374,155);
    glVertex2f(391,155);
    glEnd();

    //Door and window
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(305,120);   //d2 2nd building 1st floor
    glVertex2f(315,120);
    glVertex2f(315,155);
    glVertex2f(305,155);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(309,132);   //d2 2nd building 1st floor
    glVertex2f(310,132);
    glVertex2f(310,147);
    glVertex2f(309,147);
    glEnd();

        glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(328,131);   //w1 2nd building 1st floor2
    glVertex2f(348,131);
    glVertex2f(348,147);
    glVertex2f(328,147);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,197,215);
    glVertex2f(328.5,132);   //w1 2nd building 1st floor2
    glVertex2f(347.5,132);
    glVertex2f(347.5,146);
    glVertex2f(328.5,146);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(338,131);   //w1 2nd building 1st floor2
    glVertex2f(339,131);
    glVertex2f(339,147);
    glVertex2f(338,147);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(363,131);   //w2 2nd building 1st floor2
    glVertex2f(383,131);
    glVertex2f(383,147);
    glVertex2f(363,147);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,197,215);
    glVertex2f(363.5,132);   //w2 2nd building 1st floor2
    glVertex2f(382.5,132);
    glVertex2f(382.5,146);
    glVertex2f(363.5,146);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(373,131);   //w2 2nd building 1st floor2
    glVertex2f(374,131);
    glVertex2f(374,147);
    glVertex2f(373,147);
    glEnd();

    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(302.5,160);  //2nd building 1st floor1
    glVertex2f(394,160);
    glVertex2f(394,175);
    glVertex2f(302.5,175);
    glEnd();

       ///....2nd floor design............///y+55 korchi

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(305,180);   //part 2 2nd building 2nd floor red.........
    glVertex2f(391,180);
    glVertex2f(391,210);
    glVertex2f(305,210);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(391,180);   //part 2 2nd building 2nd floor.......red
    glVertex2f(374,180);
    glVertex2f(374,210);
    glVertex2f(391,210);
    glEnd();

    //Door and window
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(305,175);   //d2 2nd building 2nd floor
    glVertex2f(315,175);
    glVertex2f(315,210);
    glVertex2f(305,210);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(309,187);   //d2 2nd building 2nd floor
    glVertex2f(310,187);
    glVertex2f(310,202);
    glVertex2f(309,202);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(328,186);   //w1 2nd building 2nd floor2
    glVertex2f(348,186);
    glVertex2f(348,202);
    glVertex2f(328,202);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,197,215);
    glVertex2f(328.5,187);   //w1 2nd building 2nd floor2
    glVertex2f(347.5,187);
    glVertex2f(347.5,201);
    glVertex2f(328.5,201);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(338,186);   //w1 2nd building 2nd floor2
    glVertex2f(339,186);
    glVertex2f(339,202);
    glVertex2f(338,202);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(363,186);   //w2 2nd building 2nd floor2
    glVertex2f(383,186);
    glVertex2f(383,202);
    glVertex2f(363,202);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,197,215);
    glVertex2f(363.5,187);   //w2 2nd building 2nd floor2
    glVertex2f(382.5,187);
    glVertex2f(382.5,201);
    glVertex2f(363.5,201);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(373,186);   //w2 2nd building 2nd floor2
    glVertex2f(374,186);
    glVertex2f(374,202);
    glVertex2f(373,202);
    glEnd();

    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(302.5,215);  //2nd building 2nd floor1
    glVertex2f(394,215);
    glVertex2f(394,230);
    glVertex2f(302.5,230);
    glEnd();

    ///....3rd floor design............///y+55 korchi

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(305,235);   //part 2 2nd building 3rd floor red.........
    glVertex2f(391,235);
    glVertex2f(391,265);
    glVertex2f(305,265);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(391,235);   //part 2 2nd building 3rd floor.......red
    glVertex2f(374,235);
    glVertex2f(374,265);
    glVertex2f(391,265);
    glEnd();

    //Door and window
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(305,230);   //d2 2nd building 3rd floor
    glVertex2f(315,230);
    glVertex2f(315,265);
    glVertex2f(305,265);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(309,242);   //d2 2nd building 2nd floor
    glVertex2f(310,242);
    glVertex2f(310,257);
    glVertex2f(309,257);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(328,241);   //w1 2nd building 3rd floor2
    glVertex2f(348,241);
    glVertex2f(348,257);
    glVertex2f(328,257);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,197,215);
    glVertex2f(328.5,242);   //w1 2nd building 2nd floor2
    glVertex2f(347.5,242);
    glVertex2f(347.5,256);
    glVertex2f(328.5,256);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(338,241);   //w1 2nd building 3rd floor2
    glVertex2f(339,241);
    glVertex2f(339,257);
    glVertex2f(338,257);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(363,241);   //w2 2nd building 3rd floor2
    glVertex2f(383,241);
    glVertex2f(383,257);
    glVertex2f(363,257);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,197,215);
    glVertex2f(363.5,242);   //w2 2nd building 3rd floor2
    glVertex2f(382.5,242);
    glVertex2f(382.5,256);
    glVertex2f(363.5,256);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(373,241);   //w2 2nd building 3rd floor2
    glVertex2f(374,241);
    glVertex2f(374,257);
    glVertex2f(373,257);
    glEnd();

    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(302.5,270);  //2nd building 3rd floor1
    glVertex2f(394,270);
    glVertex2f(394,285);
    glVertex2f(302.5,285);
    glEnd();

    ///....4th floor design............///y+55 korchi

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(305,290);   //part 2 2nd building 4th floor red.........
    glVertex2f(391,290);
    glVertex2f(391,320);
    glVertex2f(305,320);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(391,290);   //part 2 2nd building 4th floor.......red
    glVertex2f(374,290);
    glVertex2f(374,320);
    glVertex2f(391,320);
    glEnd();

    //Door and window
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(305,285);   //d2 2nd building 4th floor
    glVertex2f(315,285);
    glVertex2f(315,320);
    glVertex2f(305,320);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(309,297);   //d2 2nd building 5th floor
    glVertex2f(310,297);
    glVertex2f(310,312);
    glVertex2f(309,312);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(328,296);   //w1 2nd building 4th floor2
    glVertex2f(348,296);
    glVertex2f(348,312);
    glVertex2f(328,312);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,197,215);
    glVertex2f(328.5,297);   //w1 2nd building 4th floor2
    glVertex2f(347.5,297);
    glVertex2f(347.5,311);
    glVertex2f(328.5,311);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(338,296);   //w1 2nd building 4th floor2
    glVertex2f(339,296);
    glVertex2f(339,312);
    glVertex2f(338,312);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(363,297);   //w2 2nd building 4th floor2
    glVertex2f(383,297);
    glVertex2f(383,312);
    glVertex2f(363,312);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,197,215);
    glVertex2f(363.5,297);   //w2 2nd building 4th floor2
    glVertex2f(382.5,297);
    glVertex2f(382.5,311);
    glVertex2f(363.5,311);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(373,297);   //w2 2nd building 4th floor2
    glVertex2f(374,297);
    glVertex2f(374,312);
    glVertex2f(373,312);
    glEnd();

     //floor divided
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(302.5,325);  //2nd building 4th floor1
    glVertex2f(394,325);
    glVertex2f(394,340);
    glVertex2f(302.5,340);
    glEnd();

    ///....5th floor design............///y+55 korchi

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(305,345);   //part 2 2nd building 5th floor red.........
    glVertex2f(391,345);
    glVertex2f(391,375);
    glVertex2f(305,375);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(391,345);   //part 2 2nd building 5th floor.......red
    glVertex2f(374,345);
    glVertex2f(374,375);
    glVertex2f(391,375);
    glEnd();

    //Door and window
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(305,340);   //d2 2nd building 5th floor
    glVertex2f(315,340);
    glVertex2f(315,375);
    glVertex2f(305,375);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(309,352);   //d2 2nd building 5th floor
    glVertex2f(310,352);
    glVertex2f(310,367);
    glVertex2f(309,367);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(328,351);   //w1 2nd building 5th floor2
    glVertex2f(348,351);
    glVertex2f(348,367);
    glVertex2f(328,367);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,197,215);
    glVertex2f(328.5,352);   //w1 2nd building 5th floor2
    glVertex2f(347.5,352);
    glVertex2f(347.5,366);
    glVertex2f(328.5,366);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(338,351);   //w1 2nd building 5th floor2
    glVertex2f(339,351);
    glVertex2f(339,367);
    glVertex2f(338,367);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(363,352);   //w2 2nd building 4th floor2
    glVertex2f(383,352);
    glVertex2f(383,367);
    glVertex2f(363,367);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128,197,215);
    glVertex2f(363.5,352);   //w2 2nd building 5th floor2
    glVertex2f(382.5,352);
    glVertex2f(382.5,366);
    glVertex2f(363.5,366);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(373,352);   //w2 2nd building 5th floor2
    glVertex2f(374,352);
    glVertex2f(374,367);
    glVertex2f(373,367);
    glEnd();
    ///End 2nd building//

    ///Tower 2nd Building//
    glBegin(GL_QUADS);
    glColor3ub(140, 140, 140);
    glVertex2f(373,395);
    glVertex2f(374,395);
    glVertex2f(374,520);
    glVertex2f(373,520);
    glEnd();

    glColor3ub(102, 102, 102);
    circle(3,6,373,500);
    glColor3ub(217, 217, 217);
    circle(2.5,5,373,500);
    glColor3ub(102, 102, 102);
    circle(2,4,376,485);
    glColor3ub(217, 217, 217);
    circle(1.5,3,376,485);
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

    ///....circle tree.........2nd Building........6 ///
    glColor3ub(139, 146, 22);
    circle(3,6,400,130);
    glColor3ub(139, 146, 22);
    circle(5,12,395,140);
    glColor3ub(139, 146, 22);
    circle(5,12,405,140);
    glColor3ub(139, 146, 22);
    circle(5,12,410,135);
    glColor3ub(139, 146, 22);
    circle(5,12,390,150);


    glColor3ub(181, 106, 76);
    circle(5,12,395,152);
    glColor3ub(139, 146, 22);
    circle(5,12,396,152);
    glColor3ub(139, 146, 22);
    circle(5,12,400,170);
    glColor3ub(139, 146, 22);
    circle(4,10,395,165);
    glColor3ub(181, 106, 76);
    circle(4,10,397,163);

    glColor3ub(139, 146, 22);
    circle(4,10,398,162);

    glColor3ub(139, 146, 22);
    circle(5,12,410,160);
    glColor3ub(139, 146, 22);
    circle(5,12,405,160);
    glColor3ub(181, 106, 76);
    circle(5,12,404,155);
    glColor3ub(139, 146, 22);
    circle(5,12,403,154);
    glColor3ub(139, 146, 22);
    circle(5,12,415,150);
    glColor3ub(181, 106, 76);
    circle(5,12,410,145);
    glColor3ub(139, 146, 22);
    circle(5,12,409,145);
    glColor3ub(139, 146, 22);
    circle(5,12,400,148);
    glColor3ub(139, 146, 22);
    circle(5,12,412,170);



    glColor3ub(227, 91, 137);         ///Full..........2nd building.........comp.
    circle(1,2,400,148);
    glColor3ub(227, 91, 137);
    circle(1,2,400,168);
    glColor3ub(227, 91, 137);
    circle(1,2,410,168);
    glColor3ub(227, 91, 137);
    circle(1,2,405,157);
    glColor3ub(227, 91, 137);
    circle(1,2,389,148);
    glColor3ub(227, 91, 137);
    circle(1,2.5,395,163);
    glColor3ub(227, 91, 137);
    circle(1,1.5,396,139);
    glColor3ub(227, 91, 137);
    circle(1,2.5,410,135);
    glColor3ub(227, 91, 137);
    circle(1,3,415,148);
    glColor3ub(227, 91, 137);
    circle(1,3,405,132);


    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside 2nd Building........6   ///
    glColor3ub(75, 35, 5);
    glVertex2f(405,119);
    glVertex2f(408,119);
    glVertex2f(407,129);
    glVertex2f(402,159);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside 2nd Building........6   ///
    glColor3ub(75, 35, 5);
    glVertex2f(405,119);
    glVertex2f(408,119);
    glVertex2f(404,129);
    glVertex2f(398,139);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);  ///tree.........2nd Building........6   ///
    glColor3ub(75, 35, 5);
    glVertex2f(404,119);
    glVertex2f(408,119);
    glVertex2f(409,139);
    glVertex2f(412,169);
    glEnd();


    ///3rd Building Design///
///white part///
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(555,90);
    glVertex2f(615,90);
    glVertex2f(615,475);
    glVertex2f(555,475);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(557.5,90);        //3rd Building main part 2
    glVertex2f(611,90);
    glVertex2f(611,460);
    glVertex2f(557.5,460);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(615,90);         //3rd Building 2nd part 2
    glVertex2f(645,90);
    glVertex2f(645,420);
    glVertex2f(615,420);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(615,90);         //3rd Building 2nd part 1
    glVertex2f(642.5,90);
    glVertex2f(642.5,410);
    glVertex2f(615,410);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(617,370);   //part 2 3rd Building 6th floor2..........outlook
    glVertex2f(642.5,370);
    glVertex2f(642.5,400);
    glVertex2f(617,400);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(123, 88, 71);
    glVertex2f(618,365);   //part 2 3rd Building 6th floor2..........outlook
    glVertex2f(628,365);
    glVertex2f(628,400);
    glVertex2f(618,400);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(623,365);   //Door 3rd Building 6th floor2..........outlook-1
    glVertex2f(624,365);
    glVertex2f(624,392);
    glVertex2f(623,392);
    glEnd();

/////////////****
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(595,90); //3rd Building 3rd Building floor1
    glVertex2f(647,90);
    glVertex2f(647,145);
    glVertex2f(595,145);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(595,145);   //3rd Building 2nd floor1
    glVertex2f(647,145);
    glVertex2f(647,200);
    glVertex2f(595,200);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(595,200);   //3rd Building 3rd floor1
    glVertex2f(647,200);
    glVertex2f(647,255);
    glVertex2f(595,255);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(595,255);   //3rd Building 4th floor1
    glVertex2f(647,255);
    glVertex2f(647,310);
    glVertex2f(595,310);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(595,310);   //3rd Building 5th floor1
    glVertex2f(647,310);
    glVertex2f(647,365);
    glVertex2f(595,365);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(595,365);   //3rd Building 6th floor1
    glVertex2f(647,365);
    glVertex2f(647,420);
    glVertex2f(595,420);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(595,420);   //3rd Building 7th floor1
    glVertex2f(647,420);
    glVertex2f(647,475);
    glVertex2f(595,475);
    glEnd();

     ///design of main building....red and glass....

    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(557.5,420);  //7 3rd Building main part3
    glVertex2f(572,420);
    glVertex2f(572,460);
    glVertex2f(557.5,460);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(557.5,365);  //6 3rd Building main part3
    glVertex2f(572,365);
    glVertex2f(572,405);
    glVertex2f(557.5,405);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(557.5,310);  //5 3rd Building main part3
    glVertex2f(572,310);
    glVertex2f(572,350);
    glVertex2f(557.5,350);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(557.5,255);  //4 3rd Building main part3
    glVertex2f(572,255);
    glVertex2f(572,295);
    glVertex2f(557.5,295);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(557.5,200);  //3 3rd Building main part3
    glVertex2f(572,200);
    glVertex2f(572,240);
    glVertex2f(557.5,240);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(557.5,145);  //2 3rd Building main part3
    glVertex2f(572,145);
    glVertex2f(572,185);
    glVertex2f(557.5,185);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177,124,119);
    glVertex2f(557.5,90);  //1 3rd Building main part3
    glVertex2f(572,90);
    glVertex2f(572,130);
    glVertex2f(557.5,130);
    glEnd();
    /////////.....................
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(600,420);  //7 3rd Building main part3
    glVertex2f(611,420);
    glVertex2f(611,460);
    glVertex2f(600,460);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(600,365);  //6 3rd Building main part3
    glVertex2f(611,365);
    glVertex2f(611,405);
    glVertex2f(600,405);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(600,310);  //5 3rd Building main part3
    glVertex2f(611,310);
    glVertex2f(611,350);
    glVertex2f(600,350);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(600,255);  //4 3rd Building main part3
    glVertex2f(611,255);
    glVertex2f(611,295);
    glVertex2f(600,295);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(600,200);  //3 3rd Building main part3
    glVertex2f(611,200);
    glVertex2f(611,240);
    glVertex2f(600,240);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(600,145);  //2 3rd Building main part3
    glVertex2f(611,145);
    glVertex2f(611,185);
    glVertex2f(600,185);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(590,90);  //door
    glVertex2f(611,90);
    glVertex2f(611,130);
    glVertex2f(590,130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 77);
    glVertex2f(600,90);  //door 1 main
    glVertex2f(601,90);
    glVertex2f(601,130);
    glVertex2f(600,130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(601,100);  //door 1 main
    glVertex2f(602,100);
    glVertex2f(602,120);
    glVertex2f(601,120);
    glEnd();

    //////////............................

    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(555,420);  //7 3rd Building main part3
    glVertex2f(615,420);
    glVertex2f(615,421);
    glVertex2f(555,421);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(555,365);  //6 3rd Building main part3
    glVertex2f(642.5,365);
    glVertex2f(642.5,366);
    glVertex2f(555,366);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(555,310);  //5 3rd Building main part3
    glVertex2f(615,310);
    glVertex2f(615,311);
    glVertex2f(555,311);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(555,255);  //4 3rd Building main part3
    glVertex2f(615,255);
    glVertex2f(615,256);
    glVertex2f(555,256);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(555,199);  //3 3rd Building main part3
    glVertex2f(615,199);
    glVertex2f(615,200);
    glVertex2f(555,200);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(555,145);  //2 3rd Building main part3
    glVertex2f(615,145);
    glVertex2f(615,146);
    glVertex2f(555,146);
    glEnd();

    ///////...............................
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(555,405);  //7 3rd Building main part3
    glVertex2f(615,405);
    glVertex2f(615,406);
    glVertex2f(555,406);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(555,350);  //6 3rd Building main part3
    glVertex2f(615,350);
    glVertex2f(615,351);
    glVertex2f(555,351);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(555,295);  //5 3rd Building main part3
    glVertex2f(615,295);
    glVertex2f(615,296);
    glVertex2f(555,296);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(555,240);  //4 3rd Building main part3
    glVertex2f(615,240);
    glVertex2f(615,241);
    glVertex2f(555,241);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(555,185);  //3 3rd Building main part3
    glVertex2f(615,185);
    glVertex2f(615,186);
    glVertex2f(555,186);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(555,130);  //2 3rd Building main part3
    glVertex2f(615,130);
    glVertex2f(615,131);
    glVertex2f(555,131);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(89, 89, 89);
    glVertex2f(645,90);  // part2 last black line
    glVertex2f(646,90);
    glVertex2f(646,460);
    glVertex2f(645,460);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(615,420);  //7 2nd part3
    glVertex2f(642.5,420);
    glVertex2f(642.5,460);
    glVertex2f(615,460);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(615,365);  //6 2nd part3
    glVertex2f(642.5,365);
    glVertex2f(642.5,405);
    glVertex2f(615,405);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(615,310);  //5 part3
    glVertex2f(642.5,310);
    glVertex2f(642.5,350);
    glVertex2f(615,350);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(615,255);  //4 2nd part3
    glVertex2f(642.5,255);
    glVertex2f(642.5,295);
    glVertex2f(615,295);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(615,200);  //3 2nd part3
    glVertex2f(642.5,200);
    glVertex2f(642.5,240);
    glVertex2f(615,240);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(615,145);  //2 2nd part3
    glVertex2f(642.5,145);
    glVertex2f(642.5,185);
    glVertex2f(615,185);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(143,175,175);
    glVertex2f(615,90);  //1 3rd Building main part3
    glVertex2f(642.5,90);
    glVertex2f(642.5,130);
    glVertex2f(615,130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 77);
    glVertex2f(622,90);  //1 main part3
    glVertex2f(623,90);
    glVertex2f(623,130);
    glVertex2f(622,130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 77);
    glVertex2f(632,90);  //1 main part3
    glVertex2f(633,90);
    glVertex2f(633,130);
    glVertex2f(632,130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(623,100);  //1 main part3
    glVertex2f(624,100);
    glVertex2f(624,120);
    glVertex2f(623,120);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(633,100);  ///1 main part3
    glVertex2f(634,100);
    glVertex2f(634,120);
    glVertex2f(633,120);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 26, 51);
    glVertex2f(615,90);   ///partation of Blue line
    glVertex2f(616,90);
    glVertex2f(616,460);
    glVertex2f(615,460);
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

      ///4th Building Design///
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);///4th Building main part 2
    glVertex2f(443.5,440);
    glVertex2f(515.2,440);
    glVertex2f(515.2,472);
    glVertex2f(443.5,472);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(443.5,440);        ///4th Building main part 2
    glVertex2f(515.2,440);
    glVertex2f(515.2,467);
    glVertex2f(443.5,467);
    glEnd();
///white part///
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);///4th Building main part 2
    glVertex2f(435,119);
    glVertex2f(523.5,119);
    glVertex2f(523.5,442);
    glVertex2f(435,442);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(85,119,119);
    glVertex2f(437.5,119);        ///4th Building main part 2
    glVertex2f(521,119);
    glVertex2f(521,434);
    glVertex2f(437.5,434);
    glEnd();

    ///floor divided y+40//
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(435,150);  ///4th Building 1st floor1
    glVertex2f(523,150);
    glVertex2f(523,154);
    glVertex2f(435,154);
    glEnd();
    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(435,190);  ///4th Building 2nd floor1
    glVertex2f(523,190);
    glVertex2f(523,193);
    glVertex2f(435,193);
    glEnd();
    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(435,230);  ///4th Building 3rd floor1
    glVertex2f(523,230);
    glVertex2f(523,234);
    glVertex2f(435,234);
    glEnd();
    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(435,270);  ///4th Building 4th floor1
    glVertex2f(523,270);
    glVertex2f(523,273);
    glVertex2f(435,273);
    glEnd();
    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(435,310);  ///4th Building 5th floor1
    glVertex2f(523,310);
    glVertex2f(523,314);
    glVertex2f(435,314);
    glEnd();
    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(435,310);  ///4th Building 6th floor1
    glVertex2f(523,310);
    glVertex2f(523,314);
    glVertex2f(435,314);
    glEnd();
    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(435,350);  ///4th Building 7th floor1
    glVertex2f(523,350);
    glVertex2f(523,353);
    glVertex2f(435,353);
    glEnd();
    //floor divided
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(435,390);  ///4th Building 8th floor1
    glVertex2f(523,390);
    glVertex2f(523,394);
    glVertex2f(435,394);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(451,119);  /// 4th Building white line vertical
    glVertex2f(451.5,119);
    glVertex2f(451.5,440);
    glVertex2f(451,440);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(465,119);  /// 4th Building white line vertical
    glVertex2f(465.5,119);
    glVertex2f(465.5,440);
    glVertex2f(465,440);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(479,119);  /// 4th Building white line vertical
    glVertex2f(479.5,119);
    glVertex2f(479.5,440);
    glVertex2f(479,440);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(493,119);  /// 4th Building white line vertical
    glVertex2f(493.5,119);
    glVertex2f(493.5,440);
    glVertex2f(493,440);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);
    glVertex2f(507,119);  /// 4th Building white line vertical
    glVertex2f(507.5,119);
    glVertex2f(507.5,440);
    glVertex2f(507,440);
    glEnd();

    ///Door
    glBegin(GL_QUADS);
    glColor3ub(0, 26, 51);
    glVertex2f(465,140);  ///4th Building 1st floor1
    glVertex2f(493,140);
    glVertex2f(493,144);
    glVertex2f(465,144);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 26, 51);
    glVertex2f(492,119);  /// 4th Building white line vertical
    glVertex2f(493.6,119);
    glVertex2f(493.6,140);
    glVertex2f(492,140);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 26, 51);
    glVertex2f(478,119);  /// 4th Building white line vertical
    glVertex2f(479.6,119);
    glVertex2f(479.6,140);
    glVertex2f(478,140);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 26, 51);
    glVertex2f(465,119);  ///4th Building white line vertical
    glVertex2f(466.6,119);
    glVertex2f(466.6,140);
    glVertex2f(465,140);
    glEnd();
    ///End 4th Building///

    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside 4th Building........2   ///
    glColor3ub(75,35,05);
    glVertex2f(525,119);
    glVertex2f(530,119);
    glVertex2f(530,139);
    glVertex2f(525,139);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(139, 146, 22);
    glVertex2f(515,139);
    glVertex2f(540,139);
    glVertex2f(527.5,169);
    glVertex2f(527.5,169);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(139, 146, 22);
    glVertex2f(516,149);
    glVertex2f(539,149);
    glVertex2f(527.5,189);
    glVertex2f(527.5,189);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(139, 146, 22);
    glVertex2f(517,159);
    glVertex2f(538,159);
    glVertex2f(527.5,209);
    glVertex2f(527.5,209);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(139, 146, 22);
    glVertex2f(517.5,169);
    glVertex2f(537.5,169);
    glVertex2f(527.5,214);
    glVertex2f(527.5,214);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(139, 146, 22);
    glVertex2f(518,179);
    glVertex2f(537,179);
    glVertex2f(527.5,224);
    glVertex2f(527.5,224);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(139, 146, 22);
    glVertex2f(520.5,189);
    glVertex2f(534.5,187);
    glVertex2f(527.5,237);
    glVertex2f(529.5,239);
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
    glRasterPos2i(285,780);

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
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'A');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'U');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'P');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,' ');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'M');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'O');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'D');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'A');
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'L');



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
    circle(3,6,555,100);
    glColor3ub(0, 153, 51);
    circle(5,12,550,110);
    glColor3ub(0, 153, 51);
    circle(5,12,560,110);
    glColor3ub(0, 153, 51);
    circle(5,12,565,105);
    glColor3ub(0, 153, 51);
    circle(5,12,545,120);


    glColor3ub(0, 102, 00);
    circle(5,12,550,122);
    glColor3ub(0, 153, 51);
    circle(5,12,551,122);
    glColor3ub(0, 153, 51);
    circle(5,12,555,140);
    glColor3ub(0, 153, 51);
    circle(4,10,550,135);
    glColor3ub(0, 102, 0);
    circle(4,10,552,133);

    glColor3ub(0, 153, 51);
    circle(4,10,553,132);

    glColor3ub(0, 153, 51);
    circle(5,12,565,130);
    glColor3ub(0, 153, 51);
    circle(5,12,560,130);
    glColor3ub(0, 102, 0);
    circle(5,12,559,125);
    glColor3ub(0, 153, 51);
    circle(5,12,558,124);
    glColor3ub(0, 153, 51);
    circle(5,12,570,120);
    glColor3ub(0, 102, 0);
    circle(5,12,565,115);
    glColor3ub(0, 153, 51);
    circle(5,12,564,115);
    glColor3ub(0, 153, 51);
    circle(5,12,555,118);
    glColor3ub(0, 153, 51);
    circle(5,12,567,140);



    glColor3ub(255, 255, 255);         ///Full..........3rd Building.........comp.
    circle(1,2,555,118);
    glColor3ub(255, 255, 255);
    circle(1,2,555,138);
    glColor3ub(255, 255, 255);
    circle(1,2,565,138);
    glColor3ub(255, 255, 255);
    circle(1,2,560,127);
    glColor3ub(255, 255, 255);
    circle(1,2,544,118);
    glColor3ub(255, 255, 255);
    circle(1,2.5,550,133);
    glColor3ub(255, 255, 255);
    circle(1,1.5,551,109);
    glColor3ub(255, 255, 255);
    circle(1,2.5,565,105);
    glColor3ub(255, 255, 255);
    circle(1,3,570,118);
    glColor3ub(255, 255, 255);
    circle(1,3,565,120);


    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside 3rd Building........6   ///
    glColor3ub(75,35,5);
    glVertex2f(560,90);
    glVertex2f(563,90);
    glVertex2f(562,100);
    glVertex2f(557,130);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside 3rd Building........6   ///
    glColor3ub(75,35,5);
    glVertex2f(560,90);
    glVertex2f(563,90);
    glVertex2f(559,100);
    glVertex2f(553,110);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);  ///tree.........beside 3rd Building........6   ///
    glColor3ub(75,35,5);
    glVertex2f(559,90);
    glVertex2f(563,90);
    glVertex2f(564,110);
    glVertex2f(567,140);
    glEnd();


    glColor3ub(253, 183, 77);    ///.........S U N.....................///
    circle(18,36,400,705);
    glColor3ub(253, 183, 77);
    circle(16.5,33,400,705);
    glColor3ub(253, 183, 77);
    circle(14.5,30,400,705);
    glColor3ub(253, 183, 77);
    circle(12.5,27,400,705);


    glColor3ub(232,241,255);        ///....Megh.......1 covering sun....///
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
        j = j + 0.4;
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
    //glColor3ub(102, 255, 102);
    glColor3ub(255, 81, 76);
    glVertex2f(j+10,80);  //.....bus
    glVertex2f(j+90,80);
    glVertex2f(j+90,105);
    glVertex2f(j+10,105);
    glEnd();

    glBegin(GL_QUADS);
    //glColor3ub(102, 255, 102);
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

    glColor3ub(255, 255, 204);          //....chaka....back
    circle(4,8,j+45,65);
    glColor3ub(255, 255, 204);
    circle(2,4,j+55,75);
    glColor3ub(255, 255, 204);
    circle(3,6,j+15,75);
    glColor3ub(255, 255, 204);
    circle(2,4,j+35,65);
    glColor3ub(255, 255, 204);
    circle(2,4,j+75,75);


    glColor3ub(0,0,0);          //....chaka....back
    circle(5,10,j+25,55);
    glColor3ub(255,255,255);
    circle(3,6,j+25,55);

    glColor3ub(0,0,0);
    circle(5,10,j+78,55);
    glColor3ub(255,255,255);
    circle(3,6,j+78,55);

    glColor3ub(0, 51, 204);
    glRasterPos2i(j+43,65);

    glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'E');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'D');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'U');

    ///..........B U S...........2

    if(k<= 800)
        k = k + 0.5;
    else
        k = -50;

    glBegin(GL_QUADS);
    glColor3ub(43, 58, 139);
    glVertex2f(k+90,98);  //bus...................
    glVertex2f(k+95,98);
    glVertex2f(k+95,100);
    glVertex2f(k+90,100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(26, 26, 0);
    glVertex2f(k+94,89);   // bus font glass
    glVertex2f(k+96,89);
    glVertex2f(k+96,100);
    glVertex2f(k+94,100);
    glEnd();

    glBegin(GL_QUADS);
    //glColor3ub(102, 255, 102);
    glColor3ub(43, 58, 139);
    glVertex2f(k+10,80);  //.....bus
    glVertex2f(k+90,80);
    glVertex2f(k+90,105);
    glVertex2f(k+10,105);
    glEnd();

    glBegin(GL_QUADS);
    //glColor3ub(102, 255, 102);
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

    glColor3ub(255, 255, 204);          //....chaka....back
    circle(4,8,k+45,65);
    glColor3ub(255, 255, 204);
    circle(2,4,k+55,75);
    glColor3ub(255, 255, 204);
    circle(3,6,k+15,75);
    glColor3ub(255, 255, 204);
    circle(2,4,k+35,65);
    glColor3ub(255, 255, 204);
    circle(2,4,k+75,75);


    glColor3ub(0,0,0);          //....chaka....back
    circle(5,10,k+25,55);
    glColor3ub(255,255,255);
    circle(3,6,k+25,55);

    glColor3ub(0,0,0);
    circle(5,10,k+78,55);
    glColor3ub(255,255,255);
    circle(3,6,k+78,55);

    glColor3ub(255, 81, 76);
    glRasterPos2i(k+40,65);

    glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'E');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'D');
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15,'U');
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
    glutCreateWindow("Hitech City");
    myInit();
    glutDisplayFunc(display);
//glutTimerFunc(25, update, 0);
    glutMainLoop();
}
