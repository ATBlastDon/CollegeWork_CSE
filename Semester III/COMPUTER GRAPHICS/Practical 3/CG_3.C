// Experiment 3: Midpoint Circle Generation Algorithm //

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
  int gd=DETECT,gm,r,x,y,d;
  printf("Enter radius: ");
  scanf("%d",&r);
  d=1-r;
  x=0;
  y=r;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  while(x<y)
  {
   putpixel(x+100,y+100,4);
   putpixel(y+100,x+100,3);
   putpixel(-x+100,y+100,2);
   putpixel(-y+100,x+100,1);
   putpixel(-x+100,-y+100,4);
   putpixel(-y+100,-x+100,7);
   putpixel(x+100,-y+100,6);
   putpixel(y+100,-x+100,9);
   if(d<0)
   {
    d=d+2*x+3;
    x=x+1;
    y=y;
   }
   else
   {
    d=d+2*x-2*y+5;
    x=x+1;
    y=y-1;
   }
  }
  getch();
}















