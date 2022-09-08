//Experiment 5.2: Flood Fill

#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void main()
{
 void ff(int x, int y, int old_col, int new_col);
 int gd=DETECT, gm;
 initgraph(&gd, &gm, "c:\\turboc3\\bgi");
 setcolor(15);
 rectangle(100, 100, 120, 120);
 ff(105, 105, 0, 4);
 getch();
}

void ff(int x, int y, int old_col, int new_col)
{
 if(getpixel (x, y) == old_col)
 {
  putpixel (x, y, new_col);
  delay(100);
  ff(x+1, y, old_col, new_col);
  ff(x-1, y, old_col, new_col);
  ff(x, y+1, old_col, new_col);
  ff(x, y-1, old_col, new_col);
 }
}