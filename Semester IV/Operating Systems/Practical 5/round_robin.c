// Round Robin Implementation

#include <stdio.h>

typedef struct
{
    int remaining_bt;
    int arrival_time;
    int completed;

} Process;



void main()
{
    int n, tq;
    Process p[10];
    
    int all_completed()
    {
        int flag = 1;
        for (int i = 0; i<n; i++)
        {
            if (p[i].completed == 0) {
                flag = 0;
                break;
            }
        }
        
        return flag;
    }
    
    printf("Enter the number of processes:\n");
    scanf("%d", &n);
    
    printf("Enter the Time Quantum:\n");
    scanf("%d", &tq);
    
    for(int i =0; i<n; i++)
        p[i].completed = 0;
    
        
    printf("Enter the burst time for each process:\n");
    for (int i = 0; i <n; i++)
        scanf("%d", &p[i].remaining_bt);
    
    int i = 0;
    while (1)
    {
        if (p[i].completed == 0) {
            
            if (p[i].remaining_bt > tq)
            {
                p[i].remaining_bt -= tq;
            }
            else {
                p[i].remaining_bt = 0;
                p[i].completed = 1;
            }
            
            printf("P%d ", i+1);
        }
        
        i++;
        
        if (i == n) {
            if (all_completed()) {
                break;
            }
            else {
                i = 0;
            }
        }
    }

}