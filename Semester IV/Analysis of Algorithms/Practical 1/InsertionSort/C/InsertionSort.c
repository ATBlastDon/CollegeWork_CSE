// C program for implementation of Insertion Sort

#include<stdio.h>

void main()
{
	int i,j,temp;
	int a[5];
	clrscr();
	printf("Enter elements in array: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("The entered Array is: ");
	for(i=0;i<5;i++)
	{
		printf("\t%d",a[i]);
	}
	for(i=1;i<5;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("\n Sorted array is: ");
	for(i=0;i<5;i++)
	{
		printf("\t%d",a[i]);
	}
	getch();
}

