//Experiment 7.2: 2D Transformation(Rotation about an arbitrary point)

#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

void main ()
{
 float a[10][2], b[10][2], xp, yp, th, thr, cx, cy;
 int gd=DETECT, gm, n, i;
 clrscr();
 printf("Enter number of vertices: ");
 scanf("%d", &n);
 for (i=0; i<n; i++)
 {
  printf("Enter co-ordinates of vetrx %d: ", i+1);
  scanf("%f%f", &a[i][0], & a[i][1]);
 }
 a[n][0] = a[0][0];
 a[n][1] = a[0][1];

 printf("Enter point about which to rotate(Xp, Yp): ");
 scanf("%f%f", &xp, &yp);

 printf("Enter angle of rotation: ");
 scanf("%f", &th);
 thr = th*3.14/180;
 cx = -1*xp*cos(thr) + yp*sin(thr) + xp;
 cy = -1*xp*sin(thr) - yp*cos(thr) + yp;

 initgraph(&gd, &gm, "c:\\turboc3\\bgi");

 //Drawing original figure
 for(i=0; i<n; i++)
 {
  line(a[i][0], a[i][1], a[i+1][0], a[i+1][1]);
 }
 getch();
 cleardevice();

  //Rotation about point
 for(i=0; i<=n; i++)
 {
  b[i][0] = a[i][0]*cos(thr) - a[i][1]*sin(thr) + cx;
  b[i][1] = a[i][0]*sin(thr) + a[i][1]*cos(thr) + cy;
 }

 for (i=0; i<n; i++)
 {
  line(b[i][0], b[i][1], b[i+1][0], b[i+1][1]);
 }
 getch();
}