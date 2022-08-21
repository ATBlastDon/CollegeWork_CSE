#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
  int gd=DETECT,gm,x1,x2,y1,y2,dx,dy,d,x,y,i;
  printf("Enter value of x1,y1,x2,y2");
  scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
  dx=x2-x1;
  dy=y2-y1;
  d=2*dy-dx;
  x=x1;
  y=y1;
  i=1;
  initgraph(&gd,&gm,"c:\\tc\\bgi");
  while(i<=dx)
  {
  putpixel(x,y,3);
  if(d<0)
  {
  x=x+1;
  y=y1;
  d=d+2*dy;
  }
  else
  {
  x=x+1;
  y=y+1;
  d=d+2*dy-2*dx;
  }
  i++;
  }
  getch();
  }

