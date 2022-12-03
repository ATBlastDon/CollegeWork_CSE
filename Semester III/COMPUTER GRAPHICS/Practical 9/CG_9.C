// Experiment 9: Polygon Clipping Algorithm //

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
  double x1[4],y1[4],x2[4],y2[4],m[4];
  int gd,gm,i,c[4][4][2];//={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  gd=DETECT;
   clrscr();
  for(i=0;i<4;i++)
  {
  printf("Enter coordinate of line\n");
  scanf("%lf%lf%lf%lf",&x1[i],&y1[i],&x2[i],&y2[i]);
  }
  initgraph(&gd,&gm,"c:\\tc\\bgi");
  rectangle(100,100,120,120);
   for(i=0;i<3;i++)
  line(x1[i],y1[i],x2[i],y2[i]);

   getch();
   cleardevice();
   rectangle(100,100,120,120);


for(i=0;i<4;i++)
{
 c[i][0][0]=0,c[i][1][0]=0,c[i][2][0]=0,c[i][3][0]=0;
 c[i][0][1]=0,c[i][1][1]=0,c[i][2][1]=0,c[i][3][1]=0;

  if(x1[i]<=100)
  c[i][0][0]=1;
  else
  c[i][0][0]=0;
  if(x1[i]>=120)
  c[i][1][0]=1;
  else
  c[i][1][0]=0;
  if(y1[i]<=100)
  c[i][2][0]=1;
  else
  c[i][2][0]=0;
  if(y1[i]>=120)
  c[i][3][0]=1;
  else
  c[i][3][1]=1;

  if(x2[i]<=100)
  c[i][0][1]=1;
  else
  c[i][0][1]=0;
  if(x2[i]>=120)
  c[i][1][1]=1;
  else
  c[i][1][1]=0;
  if(y2[i]<=100)
  c[i][2][1]=1;
  else
  c[i][2][1]=0;
  if(y2[i]>=120)
  c[i][3][1]=1;
  else
  c[i][3][1]=0;
//  printf("\n%d%d%d%d--%d%d%d%d",c[i][0][0],c[i][1][0],c[i][2][0],c[i][3][0],c[i][0][1],c[i][1][1],c[i][2][1],c[i][3][1]);
  }
  for(i=0;i<4;i++)
  {
  // printf("\n%lf%lf%lf%lf",x1[i],y1[i],x2[i],y2[i]);
  if((c[i][0][0]&&c[i][0][1])||(c[i][1][0]&&c[i][1][1])||(c[i][2][0]&&c[i][2][1])||(c[i][3][0]&&c[i][3][1]))
  {
//  printf("\nLine %d is outside cliping window\n",i);
}
  else if(c[i][0][0]==c[i][0][1]&&c[i][0][0]==0&&c[i][1][0]==c[i][1][1]&&c[i][1][0]==0&&c[i][2][0]==c[i][2][1]&&c[i][2][0]==0&&c[i][3][0]==c[i][3][1]&&c[i][3][0]==0)
   line(x1[i],y1[i],x2[i],y2[i]);
//printf("\ninside%d",i);
  else
  {
  //  printf("\n partiallt outside%d",i);
    if((x2[i]-x1[i])==0)
    m[i]=1;
    else
    m[i]=(float)(y2[i]-y1[i])/(x2[i]-x1[i]);

    if(x1[i]<100)
    {
    x1[i]=100;
    y1[i]=y2[i]-m[i]*(x2[i]-x1[i]);
     }
    if(x2[i]<100)
    {
    x2[i]=100;
    y2[i]=y1[i]+m[i]*(x2[i]-x1[i]);
    }
    if(x1[i]>120)
    {
    x1[i]=120;
    y1[i]=y2[i]-m[i]*(x2[i]-x1[i]);
     }
    if(x2[i]>120)
    {
    x2[i]=120;
    y2[i]=y1[i]+m[i]*(x2[i]-x1[i]);
    }
    if(y1[i]<100)
    {
      y1[i]=100;
      x1[i]=x2[i]-(y2[i]-100)/m[i];
    }
    if(y2[i]<100)
    {
    y2[i]=100;
    x2[i]=x1[i]+(100-y1[i])/m[i];
    }
    if(y1[i]>120)
    {
      y1[i]=120;
      x1[i]=x2[i]-(y2[i]-y1[i])/m[i];
    }
    if(y2[i]>120)
    {
    y2[i]=120;
    x2[i]=x1[i]+(y2[i]-y1[i])/m[i];

    }
//      cleardevice();
    //  rectangle(100,100,120,120);
    line(x1[i],y1[i],x2[i],y2[i]);


  }

}

getch();
}