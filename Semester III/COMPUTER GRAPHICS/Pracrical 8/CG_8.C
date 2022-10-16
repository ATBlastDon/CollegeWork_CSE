#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main()
{
	float x1,x2,y1,y2,xwmin,ywmin,m,xwmax,ywmax;
	int gd=DETECT,gm,i,c1[4]={0,0,0,0},c2[4]={0,0,0,0};
	printf("\n Enter value of  xwmin and ywmin,xwmax,ywmax:");
	scanf("%f%f%f%f",&xwmin,&ywmin,&xwmax,&ywmax);
	printf("\n Enter vale of x1,y1,x2,y2:");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	m=(y2-y1)/(x2-x1);
	//for finding the region code;
	if(x1<xwmin)
		c1[0]=1;
	if(x1>xwmax)
		c1[1]=1;
	if(y1<ywmin)
		c1[2]=1;
	if(y1>ywmax)
		c1[3]=1;
	if(x2<xwmin)
		c2[0]=1;
	if(x2>xwmax)
		c2[1]=1;
	if(y2<ywmin)
		c2[2]=1;
	if(y2>ywmax)
		c2[3]=1;

	i=0;
	while(i<4)
	{
		if(c1[i]==c2[i]&&c1[i]==0)
			i++;
		else
			break;
	}
	if(i==4)
	{
	printf("\n Line is Completely inside!!");
	}
	else
	{
		i=0;
		while(i<4)
		{
			if(c1[i]==c2[i]&&c1[i]==1)
			break;
		else
			i++;
		}

		if(i!=4)
			printf("\n Line is completely Outside!!");
		else
		{



			initgraph(&gd,&gm,"c:\\turboc3\\bgi");
			printf("\n  Line is partially inside window ,need to clipped!!");
			line(x1,y1,x2,y2);
			rectangle(xwmin,ywmin,xwmax,ywmax);
			getch();
			cleardevice();
			if(x1<xwmin||x1>xwmax)
			{
				if(x1<xwmin)
					x1=xwmin;
				if(x1>xwmax)
					x1=xwmax;
				y1=y2+m*(x1-x2);
			}
			if(y1<ywmin||y1>ywmax)
			{
				if(y1<ywmin)
					y1=ywmin;
				if(y1>ywmax)
					y1=ywmax;
				x1=x2+1/m*(y1-y2);
			}
			if(x2<xwmin||x2>xwmax)
			{
				if(x2<xwmin)
					x2=xwmin;
				if(x2>xwmax)
					x2=xwmax;
				y2=y1+m*(x2-x1);
			}
			if(y2<ywmin||y2>ywmax)
			{
				if(y2<ywmin)
					y2=ywmin;
				if(y2>ywmax)
					y2=ywmax;

			       x2=x1+1/m*(y2-y1);
			}
			rectangle(xwmin,ywmin,xwmax,ywmax);
			line(x1,y1,x2,y2);
		}
	}

getch();
}