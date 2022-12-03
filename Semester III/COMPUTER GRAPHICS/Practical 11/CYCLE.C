#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
 int gd=DETECT,gm,i=0;
 clrscr();
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 for(i=0;i<311;i++)
 {
  delay(50);
  cleardevice();
 //tires
  circle(50+i,300,50);
  circle(250+i,300,50);
  if(i%5==0)
  { 
  //rear spokes
   line(50+i,250,50+i,350);
   line(0+i,300,100+i,300);
   line(250+i,250,250+i,350);
   line(200+i,300,300+i,300);
  }
  else
  {
  //rear spokes
   line(5+i,315,95+i,285);
   line(5+i,285,95+i,315);
   line(205+i,315,295+i,285);
   line(205+i,285,295+i,315);
  }
  if(i%5==0)
  { 
  //front spokes
   line(83+i,265,15+i,335);
   line(15+i,265,83+i,335);
   line(215+i,265,283+i,335);
   line(283+i,265,215+i,335);
  }
  else
  {
  //front spokes
   line(35+i,345,62+i,255);
   line(35+i,255,62+i,345);
   line(235+i,345,262+i,255);
   line(235+i,255,262+i,345);
  }
  //frame
  line(220+i,180,250+i,300);
  line(100+i,220,50+i,300);
  line(100+i,220,230+i,220);
  line(150+i,300,100+i,220);
  line(150+i,300,230+i,220);
  //gears
  circle(50+i,300,5);
  circle(150+i,300,20);
  circle(150+i,300,15);
  circle(150+i,300,5);
  //chain
  line(50+i,295,150+i,280);
  line(50+i,305,150+i,320);
  if(i%10==0)
  { //padel
   line(150+i,265,150+i,335);
   line(150+i,265,165+i,265);
   line(150+i,335,135+i,335);
  }
  else
  { //padel
   line(115+i,300,185+i,300);
   line(115+i,300,115+i,285);
   line(185+i,300,185+i,315);
  }
  //seat
  line(100+i,220,100+i,210);
  line(85+i,210,120+i,210);
  line(85+i,210,100+i,195);
  line(100+i,195,120+i,210);
  //handle
  line(200+i,200,240+i,160);
  line(200+i,200,190+i,190);
  line(240+i,160,230+i,150);
 }
 getch();
}