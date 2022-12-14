// Experiment 7.1: 2D Transformation(Translation, Scaling and Rotation about origin) //

#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

void main ()
{
 float a[10][2], b[10][2], tx, ty, sx, sy, th;
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

 printf("Enter Tx and Ty: ");
 scanf("%f%f", &tx, &ty);

 printf("Enter Sx and Sy: ");
 scanf("%f%f", &sx, &sy);

 printf("Enter angle of rotation: ");
 scanf("%f", &th);

 initgraph(&gd, &gm, "c:\\turboc3\\bgi");

 //Drawing original figure
 for(i=0; i<n; i++)
 {
  line(a[i][0], a[i][1], a[i+1][0], a[i+1][1]);
 }
 getch();
 cleardevice();

 //Translation
 for(i=0; i<=n; i++)
 {
  b[i][0] = a[i][0] + tx;
  b[i][1] = a[i][1] + ty;
 }

 for (i=0; i<n; i++)
 {
  line(b[i][0], b[i][1], b[i+1][0], b[i+1][1]);
 }

 getch();
 cleardevice();

 //Scaling
 for(i=0; i<=n; i++)
 {
  b[i][0] = a[i][0] * sx;
  b[i][1] = a[i][1] * sy;
 }

 for (i=0; i<n; i++)
 {
  line(b[i][0], b[i][1], b[i+1][0], b[i+1][1]);
 }
 getch();
 cleardevice();

 //Rotation about origin
 for(i=0; i<=n; i++)
 {
  b[i][0] = a[i][0]*cos(th*3.14/180) - a[i][1]*sin(th*3.14/180);
  b[i][1] = a[i][0]*sin(th*3.14/180) + a[i][1]*cos(th*3.14/180);
 }

 for (i=0; i<n; i++)
 {
  line(b[i][0], b[i][1], b[i+1][0], b[i+1][1]);
 }
 getch();
}
