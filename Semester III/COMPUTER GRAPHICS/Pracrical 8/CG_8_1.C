//Experiment 8: Cohen Sutherland line clipping algorithm
#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main()
{
 int gd = DETECT, gm, a[]={0, 0, 0, 0}, b[]={0, 0, 0, 0}, c[4], i;
 int xwmin = 100, xwmax = 140, ywmin = 100, ywmax = 140;
 float x1, y1, x2, y2, p, q, r, s, m, a1=0, b1=0, c1=0;
 printf("Enter co-ordinates of endpoint 1 of the line: ");
 scanf("%f%f", &x1, &y1);
 printf("Enter co-ordinates of endpoint 2 of the line: ");
 scanf("%f%f", &x2, &y2);
 printf("Enter Xwmin, Ywmin: ");
 scanf("%d%d", &xwmin, &ywmin);
 printf("Enter Xwmax, Ywmax: ");
 scanf("%d%d", &xwmax, &ywmax);

 m = (y2 - y1)/(x2 - x1);

 if(x1 < xwmin) a[0]=1;
 if(x2 < xwmin) b[0]=1;
 if(x1 > xwmax) a[1]=1;
 if(x2 > xwmax) b[1]=1;
 if(y1 < ywmin) a[2]=1;
 if(y2 < ywmin) b[2]=1;
 if(y1 > ywmax) a[3]=1;
 if(y2 > ywmax) b[3]=1;

 for(i=0; i<4; i++)
 {
  if((a[i] == 1) && (b[i] == 1)) c[i] = 1;
  else c[i] = 0;
 }

 for(i=0; i<4; i++)
 {
  if(a[i] == 1) a1=1;
  if(b[i] == 1) b1=1;
  if(c[i] == 1) c1=1;
 }

 initgraph(&gd, &gm, "c:\\turboc3\\bgi");
 line(x1, y1, x2, y2);
 getch();
 cleardevice();
 setcolor(4);
 rectangle(xwmin, ywmin, xwmax, ywmax);
 setcolor(15);

 if((a1==0) && (b1==0))
 {
  //printf("Line inside the clipping window");
  line(x1, y1, x2, y2);
 }
 else if (c1 != 0)
 {
  //printf("Line is totaly outside")
 }
 else
 {
  if(x1 < xwmin)
  {
   x1 = xwmin;
   y1 = y2 + m*(xwmin - x2);
  }
  if(x2 < xwmin)
  {
   x2 = xwmin;
   y2 = y1 + m*(xwmin - x1);
  }
  if(y1 < ywmin)
  {
   y1 = ywmin;
   x1 = x2 + 1/m*(ywmin - y2);
  }
  if(y2 < ywmin)
  {
   y2 = ywmin;
   x2 = x1 + 1/m*(ywmin - y1);
  }
  if(x1 > xwmax)
  {
   x1 = xwmax;
   y1 = y2 + m*(xwmax - x2);
  }
  if(x2 > xwmax)
  {
   x2 = xwmax;
   y2 = y1 + m*(xwmax - x1);
  }
  if(y1 > ywmax)
  {
   y1 = ywmax;
   x1 = x2 + 1/m*(ywmax - y2);
  }
  if(y2 > ywmax)
  {
   y2 = ywmax;
   x2 = x1 + 1/m*(ywmax - y1);
  }
  line(x1, y1, x2, y2);
 }
 getch();
}