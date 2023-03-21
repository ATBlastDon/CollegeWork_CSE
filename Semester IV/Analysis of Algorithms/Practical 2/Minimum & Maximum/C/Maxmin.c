#include<stdio.h>
#include<conio.h>
int max, min;
int a[100];
void maxmin(int i,int j)
{
    int max1,min1,mid;
    
    if(i==j)
    {
        max=a[i];
        min=a[i];
    }
    else if(i==j-1)
    {
        if(a[i]>a[j])
        {
            max=a[i];
            min=a[j];
        }
        else
        {
            max=a[j];
            min=a[i];
        }
        
     }
     else
     {
         mid=(i+j)/2;
         maxmin(i,mid);
         max1=max;
         min1=min;
         maxmin(mid+1,j);
         if(max1>max)
            max=max1;
        if(min1<min)
            min=min1;
     }
}
    int main()
    {
        int n;
        
        printf("Number of elements in array is :");
        scanf("%d",&n);
        printf("Enter array elements :");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        maxmin(0,n-1);
        printf("\nmax element is %d",max);
        printf("\nmin element is %d",min);
        return 0;
        getch();
        
    }
