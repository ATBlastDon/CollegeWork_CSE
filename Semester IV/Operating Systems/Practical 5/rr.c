#include <stdio.h>

typedef struct
{
	int id;
	int bst_time;
	int wt_time;
}

Process;

void main()

{
	Process Proc_arr[20];
	float avg_time = 0;
	int time, maxproc, i, j, k, time_qtm, turn_around_time = 0;
	char str[10];

	printf("\n \t#ENTER HOW MANY PROCESSES ARE THERE :-");
	scanf("%d", &maxproc);

	for (i = 1; i <= maxproc; i++)
	{
		printf("\n \t#ENTER THE BRUST TIME FOR THE PROCESS P%d :-", i);

		scanf("%d", &(Proc_arr[i].bst_time));
		
		turn_around_time += Proc_arr[i].bst_time;

		Proc_arr[i].id = i;
		Proc_arr[i].wt_time = 0;
	}

	printf("\n \t#ENTER THE TIME QUANTUM FOR THE PROCESSES :-");
	scanf("%d", &time_qtm);

	i = 0;
	k = 0;
	time = 0;

	printf("\n\t# TURN AROUND TIME IS = %d", turn_around_time);

	while (k < maxproc)
	{
		i++;

		if (Proc_arr[i].bst_time > 0)
		{
			if (Proc_arr[i].bst_time < time_qtm) 
				time += Proc_arr[i].bst_time;
			else
				time += time_qtm;

			for (j = 1; j <= maxproc; j++)
			{
				if (Proc_arr[j].bst_time > 0 && j != i)
				{
					if (Proc_arr[i].bst_time < time_qtm) 
						Proc_arr[j].wt_time += Proc_arr[i].bst_time;
					else
						Proc_arr[j].wt_time += time_qtm;
				}
			}

			Proc_arr[i].bst_time -= time_qtm;

			if (Proc_arr[i].bst_time <= 0)
				k++;
		}

		if (i == maxproc)
			i = 0;
	}

	for (j = 1; j <= maxproc; j++)
		printf("\n Waiting time[%d] =%d", j, Proc_arr[j].wt_time);

	printf("\n\n\n\n\tPROCESS\t\tWAITING TIME\n\n");

	for (i = 1; i <= maxproc; i++)
	{
		printf("\tP%d\t\t\t", Proc_arr[i].id);
		printf("%d\n\n", Proc_arr[i].wt_time);

		turn_around_time += Proc_arr[i].wt_time;
		avg_time += Proc_arr[i].wt_time;
	}

	avg_time = (float) avg_time / maxproc;

	printf("\n # AVERAGE WAITING TIME IS = %.2f ", avg_time);
	printf("\n# AVERAGE TURN AROUND TIME IS = %.2f", (float) turn_around_time / maxproc);

}