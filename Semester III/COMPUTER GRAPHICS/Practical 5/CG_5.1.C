// Experiment 5.1: Boundary Fill //

#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void main()
{
 void bf(int x, int y, int boundary_col, int fill_col);
 int gd=DETECT, gm;
 initgraph(&gd, &gm, "c:\\turboc3\\bgi");
 setcolor(7);
 rectangle(100, 100, 120, 120);
 bf(105, 105, 7, 4);
 getch();
}

void bf(int x, int y, int boundary_col, int fill_col)
{
 if((getpixel (x, y) != boundary_col)&&(getpixel(x, y) != fill_col))
 {
  putpixel (x, y, fill_col);
  delay(100);
  bf(x+1, y, boundary_col, fill_col);
  bf(x-1, y, boundary_col, fill_col);
  bf(x, y+1, boundary_col, fill_col);
  bf(x, y-1, boundary_col, fill_col);
 }
}