//Experiment 7.3: Shearing

#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

void main ()
{
 float a[10][2], b[10][2], shx, shy;
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

 printf("Enter Shx and Shy: ");
 scanf("%f%f", &shx, &shy);

 initgraph(&gd, &gm, "c:\\turboc3\\bgi");

 //Drawing original figure
 for(i=0; i<n; i++)
 {
  line(a[i][0], a[i][1], a[i+1][0], a[i+1][1]);
 }
 getch();
 //cleardevice();

  //X-shear
 for(i=0; i<=n; i++)
 {
  b[i][0] = a[i][0] + a[i][1]*shx;
  b[i][1] = a[i][1];
 }

 for (i=0; i<n; i++)
 {
  line(b[i][0], b[i][1], b[i+1][0], b[i+1][1]);
 }

 getch();

 //Y-shear
 for(i=0; i<=n; i++)
 {
  b[i][0] = a[i][0];
  b[i][1] = a[i][1] + a[i][0]*shy;
 }

 for (i=0; i<n; i++)
 {
  line(b[i][0], b[i][1], b[i+1][0], b[i+1][1]);
 }

 getch();
}