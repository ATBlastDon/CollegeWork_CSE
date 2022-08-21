#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
  int gd=DETECT,gm,r,x,y,d;
  printf("Enter radius");
  scanf("%d",&r);
  d=3-2*r;
  x=0;
  y=r;
  initgraph(&gd,&gm,"c:\\tc\\bgi");
  while(x<y)
  {
  delay(10);
  putpixel(x+100,y+100,4);
  delay(10);
  putpixel(y+100,x+100,3);
  delay(10);
  putpixel(-x+100,y+100,2);
  delay(10);
  putpixel(-y+100,x+100,1);
  delay(10);
  putpixel(-x+100,-y+100,4);
  delay(10);
  putpixel(-y+100,-x+100,7);
  delay(10);
  putpixel(x+100,-y+100,6);
  delay(10);
  putpixel(y+100,-x+100,9);
  delay(10);
  if(d<0)
  {
  d=d+4*x+6;
  x=x+1;
  y=y;
  }
  else
  {
  d=d+4*x-4*y+10;
  x=x+1;
  y=y-1;
  }
  }
  getch();
  }















