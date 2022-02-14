/*
PID    AT   BT
P1      0      5
P2      1      4
P3      2      2
P4      4      1
*/
#include<stdio.h>
int main()
{
	int i, pr, total = 0, x, counter = 0, time_quantum;
	int wt, tat, at[10]={0}, bt[5]={0},p[5]={0};
	float avg_WT, avg_TAT;
	printf("Enter no. of Processes: \n");
	scanf("%d", &pr);
	x = pr;

    printf("Enter Time Quantum: \n");
	scanf("%d", &time_quantum);

    printf("Enter Arrivaltime= \n");    // Arrival time (AT)
    for (i = 0; i < pr; i++)
    {
        printf("P[%d]= ", i + 1);
        scanf("%d", &at[i]);
        p[i] = i + 1;
    }

    printf("Enter Busttime=");    // Bust time(BT)
    for (i = 0; i < pr; i++)
    {
        printf("P[%d]= ", i + 1);
        scanf("%d", &bt[i]);
        p[i] = i + 1;
    }
	
	printf("\nPID\tArrival Time\tBurst Time\tTurnaround Time\t Waiting Time\n");
	for (total = 0, i = 0; x != 0;)
	{
		if (p[i] <= time_quantum && p[i] > 0)
		{
			total = total + p[i];
			p[i] = 0;
			counter = 1;
		}
		else if (p[i] > 0)
		{
			p[i] = p[i] - time_quantum;
			total = total + time_quantum;
		}
		if (p[i] == 0 && counter == 1)
		{
			x--;
			printf("\nP%d\t\t%d\t\t %d\t\t\t %d", p[i], at[i],bt[i], wt, tat);
			wt = wt + total - at[i] - bt[i];
			tat = tat + total - at[i];
			counter = 0;
		}
		if (i == pr - 1)
		{
			i = 0;
		}
		else if (at[i + 1] <= total)
		{
			i++;
		}
		else
		{
			i = 0;
		}
	}
	avg_WT = wt * 1.0 / pr;
	avg_TAT = tat * 1.0 / pr;
	printf("\n\nAverage Waiting Time:\t%f", avg_WT);
	printf("\nAvg Turnaround Time:\t%f\n", avg_TAT);
	return 0;
}
