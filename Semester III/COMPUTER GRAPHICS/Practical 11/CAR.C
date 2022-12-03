
//Experiment 11: Animation
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <math.h>
void main()
{
 float a[20][2], b[20][2], tx, ty, sx, sy, th;
 int gd=DETECT, gm, n, i, j;
 int poly[8] = {20, 275, 210, 270, 210, 350, 20, 350};
 clrscr();
 initgraph(&gd, &gm, "c:\\turboc3\\bgi");


 for(j=0; !kbhit(); j++)
 {
 if(j == 300) j=0;
 a[0][0] = 20+j; a[0][1]= 220;
 a[1][0] = 150+j; a[1][1] = 220;
 a[2][0] = 210+j; a[2][1] = 275;
 a[3][0] = 270+j; a[3][1] = 275;
 a[4][0] = 270+j; a[4][1] = 350;
 a[5][0] = 20+j; a[5][1] = 350;

 a[6][0] = a[0][0];
 a[6][1] = a[0][1];

 for(i=0; i<6; i++)
 {
  line(a[i][0], a[i][1], a[i+1][0], a[i+1][1]);
 }
 circle(70+j, 350, 25);
 circle(210+j, 350, 25);
 setcolor(0);
 line(45+j, 350, 95+j, 350);
 line(185+j, 350, 235+j, 350);
 line(255+j, 275, 270+j, 275);
 line(270+j, 275, 270+j, 290);
 setcolor(15);
 line(20+j, 275, 210+j, 275);
 line(120+j, 220, 120+j, 275);
 arc(255+j, 290, 0, 90, 15);
 
 for(i=0; i<360; i+=30)
 {
  line(70+j, 350, 70+j+(25*cos(i*3.14/180)), 350+(25*sin(i*3.14/180)));
  line(210+j, 350, 210+j+(25*cos(i*3.14/180)), 350+(25*sin(i*3.14/180)));
  delay(10);
 }
 delay(30);
 cleardevice();

 }
 getch();
}

