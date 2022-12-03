// Experiment 6: Scanline Polygon Fill Algorithm //

#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void main ()
{
 int gd=DETECT, gm, i, j, k, n;
 float a[10][2], x[10], m[10], temp, y;
 printf("Enter number of vertices: ");
 scanf("%d", &n);
 printf("\n");
 for(i=0; i<n; i++)
 {
  printf("Enter x and y co-ordinates of point %d: ", i+1);
  scanf("%f%f", &a[i][0], &a[i][1]);
 }
 a[n][0] = a[0][0];
 a[n][1] = a[0][1];

 initgraph(&gd, &gm, "c:\\turboc3\\bgi");

 for(i=0; i<n; i++)
	line(a[i][0], a[i][1], a[i+1][0], a[i+1][1]);
 getch();

 for(i=0; i<n; i++)
 {
  if(a[i][1] == a[i+1][1]) m[i] = 1;
  else m[i] = (a[i][0] - a[i+1][0])/(a[i][1] - a[i+1][1]);
 }
 //Finding X intersections
 for(y=0; y<480; y++)
 {
  k=0;
  for(i=0; i<n; i++)
  {
   if(((a[i][1] > y) && (a[i+1][1] <= y)) || ((a[i][1] <= y) && (a[i+1][1] > y)))
   {
    x[k] = a[i][0] + m[i]*(y - a[i][1]);
    k++;
   }
  }
  //Sorting x intersection points
  for(i=0; i<k-1; i++)
  {
   for(j=0; j<k-i-1; i++)
   {
    if(x[j] > x[j+1])
    {
     temp = x[j];
     x[j] = x[j+1];
     x[j+1] = temp;
    }
   }
  }
  setcolor(4);
  //Pairing and drawing lines
  for(i=0; i<k; i=i+2)
  {
   line((x[i]+1), y, (x[i+1]-1), y);
   delay(10);
  }
 }
 getch();
}
