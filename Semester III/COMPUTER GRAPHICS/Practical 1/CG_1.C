// Experiment 1: DDA Line Drawing Algorithm //

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
  int gd=DETECT,gm,i;
  float x1,x2,y1,y2,dx,dy,length,x,y;
  printf("\n Enter value of x1,y1,x2,y2");
  scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
  dx=abs(x2-x1);
  dy=abs(y2-y1);
  if(dx>dy)
  length=dx;
  else
  length=dy;
  dx=(x2-x1)/length;
  dy=(y2-y1)/length;
  i=0;
  x=x1;
  y=y1;
  initgraph(&gd,&gm,"c:\\tc\\bgi");
  while(i<=length)
  {
  putpixel(x,y,4);
  x=x+dx;
  y=y+dy;
  i++;
  }
  getch();
  }
