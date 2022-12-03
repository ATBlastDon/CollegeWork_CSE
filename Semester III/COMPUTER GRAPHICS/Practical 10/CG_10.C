#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void bezier(float xa, float ya, float xb, float yb, float xc, float yc, float xd, float yd, int n)
{
 float xab, yab, xbc, ybc, xcd, ycd, xabc, yabc, xbcd, ybcd, xabcd, yabcd;
 xab = (xa+xb)/2; yab = (ya+yb)/2;
 xbc = (xb+xc)/2; ybc = (yb+yc)/2;
 xcd = (xc+xd)/2; ycd = (yc+yd)/2;
 xabc = (xab+xbc)/2; yabc = (yab+ybc)/2;
 xbcd = (xbc+xcd)/2; ybcd = (ybc+ycd)/2;
 xabcd= (xabc+xbcd)/2; yabcd = (yabc+ybcd)/2;
 n--;
 if(n==0)
 {
 line (xa, ya, xb, yb); 
 line (xb, yb, xc, yc);
 line (xc, yc, xd, yd);
 }
 else
 {
 bezier(xa, ya, xab, yab, xabc, yabc, xabcd, yabcd, n);
 bezier(xabcd, yabcd, xbcd, ybcd, xcd, ycd, xd, yd, n);
 }
}
void main()
{
 int gd=DETECT, gm, i;
 initgraph(&gd, &gm, "c:\\turboc3\\bgi");
 //bezier (150,100,220,350,388,280,245,270,15);
 for(i = 0; i < 15; i++)
 {
  bezier(100, 100, 200, 200, 300, 200, 400, 100, i+1);
  getch();
  cleardevice();
 }
 getch();
}