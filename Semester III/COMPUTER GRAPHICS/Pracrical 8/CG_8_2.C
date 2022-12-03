// Experiment 8.2: Liag Barsky Line Clipping Algorithm //

#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
	float x1,x2,y1,y2,dx,dy,x11,y11,x22,y22,p[4],q[4],r[4],u1,u2,xwmin,ywmin,xwmax,ywmax;
	int gd=DETECT,gm,i;
	u1=0;
	u2=1;
	printf("Enter the value of x1,y1 and x2,y2:");
	scanf("%f%f%f%f" ,&x1,&y1,&x2,&y2);
	dx=(x2-x1);
	dy=(y2-y1);
	printf("\n Enter xwmin,ywmin and xwmax,ywmax:");
	scanf("%f%f%f%f" ,&xwmin,&ywmin,&xwmax,&ywmax);
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	//Intial Line and Clipping window
	setcolor(15);
	line(x1,y1,x2,y2);
	setcolor(4);
	rectangle(xwmin,ywmin,xwmax,ywmax);
	getch();
	cleardevice();
	//parameters
	p[0]=-dx;
	p[1]=dx;
	p[2]=-dy;
	p[3]=dy;
	
	q[0]=x1-xwmin;
	q[1]=xwmax-x1;
	q[2]=y1-ywmin;
	q[3]=ywmax-y1;

	for(i=0;i<4;i++)
	{
		if(p[i]==0)
		{
			//printf("\n Line is parallel to %d boundry" , i);
			if(q[i]<0)
			{
				//printf("\n Line is outside the window");
				break;
			}
		}
	}
	if(i==4)
	{
		for(i=0;i<4;i++)
		{
			if(p[i]!=0)
			{
				r[i]=q[i]/p[i];
			}
			if(p[i]<0)
			{
				if(r[i]>u1)
				{
					u1=r[i];
				}
			}
			else
			{
				if(r[i]<u2)
				{
					u2=r[i];
				}
			}
		}
	}
	
	x11=x1+u1*dx;
	y11=y1+u1*dy;
	x22=x1+u2*dx;
	y22=y1+u2*dy;
	
	setcolor(15);
	line(x11,y11,x22,y22);
	setcolor(4);
	rectangle(xwmin,ywmin,xwmax,ywmax);
	getch();
}