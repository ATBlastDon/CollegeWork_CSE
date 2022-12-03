#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
 {
   int gd=DETECT,gm,x=0,i,y;
   initgraph(&gd,&gm,"c:\\turboc3\\bgi");

   for(i=0;i<=300;i++)
   {
    circle(i,i,10);
    circle(260+i,260,50);
    circle(160+i,160+i,30);
    circle(60+i,70,10);
    circle(40+i,50+i,5);
    circle(360+i,340,10);
    circle(40+i,150+i,20);
    circle(40+i,250+i,40);
    circle(50+i,340+i,10);
    circle(40+i,250+i,40);
    circle(250,40+i,25);
    circle(70+i,60+i,10);
    circle(400+i,400+i,20);
    circle(400+i,40+i,40);
    circle(500+i,80+i,20);
    delay(30);

    cleardevice();
  }

  for(i=300;i>=0;i--)
  {
    x++;
    circle(300,300+i,10);
    circle(260+i,260+i,50);
    circle(160-i,160+i,30);
    circle(60+i,70,10);
    circle(40+i,50+i,5);
    circle(360+i,340,10);
    circle(40+i,150+i,20);
    circle(40+i,250+i,40);
    circle(50+i,340+i,10);
    circle(40+i,250+i,40);
    circle(250,40+i,25);
    circle(70+i,60+i,10);
    circle(400+i,400+i,20);
    circle(400+i,40+i,40);
    circle(500+i,80+i,20);
    delay(30);
    cleardevice() ;
   }
   getch();
}