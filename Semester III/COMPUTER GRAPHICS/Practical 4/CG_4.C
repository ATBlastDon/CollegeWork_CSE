// Experiment 4: Midpoint Ellipse Generation Algorithm //

#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gd=DETECT, gm;
 float x, y, rx, ry, dx, dy, d1, d2;
 printf("Enter Rx and Ry: ");
 scanf("%f%f", &rx, &ry);
 x = 0;
 y = ry;
 dx = 2*ry*ry*x;
 dy = 2*rx*rx*y;
 d1 = ry*ry - rx*rx*ry + rx*rx/4;
 initgraph(&gd, &gm, "c:\\turboc3\\bgi");
 do{
  putpixel(x+100, y+100, 4);
  putpixel(x+100, -y+100, 4);
  putpixel(-x+100, y+100, 4);
  putpixel(-x+100, -y+100, 4);
  if(d1<0)
  {
   x += 1;
   y = y;
   dx = dx + 2*ry*ry;
   d1 = d1+dx+ry*ry;
  }
  else
  {
   x += 1;
   y -= 1;
   dx = dx + 2*ry*ry;
   dy = dy - 2*rx*rx;
   d1 = d1 + dx - dy + ry*ry;
  }
 }while(dy>dx);

 d2 = ry*ry*(x+1/2)*(x+1/2) + rx*rx*(y-1)*(y-1) - rx*rx*ry*ry;
 do{
  putpixel(x+100, y+100, 4);
  putpixel(x+100, -y+100, 4);
  putpixel(-x+100, y+100, 4);
  putpixel(-x+100, -y+100, 4);
  if(d2 < 0)
  {
   x += 1;
   y -= 1;
   dx = dx + 2*ry*ry;
   dy = dy - 2*rx*rx;
   d2 = d2 + dx - dy + rx*rx;
  }
  else
  {
   x = x;
   y -= 1;
   dy = dy - 2*rx*rx;
   d2 = d2 - dy + rx*rx;
  }
 }while(y>=0);
 getch();
}