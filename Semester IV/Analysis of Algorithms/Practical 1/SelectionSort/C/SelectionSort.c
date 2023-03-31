// C program for implementation of Selection Sort

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,min,temp;
    int a[5];
    clrscr();
    printf("Enter array: ");
    for(i=0;i<5;i++)
    {
	scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++)
    {
	min=i;
	for(j=i+1;j<5;j++)
	{
	    if(a[j]<a[min])
	       {
		 min=j;
	       }
	}

	if(min!=i)
	{
	    temp=a[i];
	    a[i]=a[min];
	    a[min]=temp;
	 }
    }
    printf("Sorted array is: ");
    for(i=0;i<5;i++)
    {
	printf("\t%d",a[i]);
    }

    getch();
}