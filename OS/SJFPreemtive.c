#include <stdio.h>
int main()
{
	int p[5] = {0}, at[10]={0}, bt[10]={0}, temp[10]={0};
	int i, smallest, count = 0, time, pr;
	double wt = 0, tat = 0, end;
	float avg_WT, avg_TAT;
	printf("Enter no. of processes: ");
    scanf("%d", &pr);

    // Arrival time (AT) and Bust time(BT)
    printf("Enter Arrivaltime= \n");
    for (i = 0; i < pr; i++)
    {
        printf("p[%d]= ", i + 1);
        scanf("%d", &at[i]);
        p[i] = i + 1;
    }

    printf("Enter Busttime= \n");
    for (i = 0; i < pr; i++)
    {
        printf("p[%d]= ", i + 1);
        scanf("%d", &bt[i]);
        p[i] = i + 1;
    }
	bt[9] = 9999;
	for (time = 0; count != pr; time++)
	{
		smallest = 9;
		for (i = 0; i < pr; i++)
		{
			if (at[i] <= time && bt[i] < bt
			        [smallest] && bt[i] > 0)
			{
				smallest = i;
			}
		}
		bt[smallest]--;
		if (bt[smallest] == 0)
		{
			count++;
			end = time + 1;
			wt = wt + end - at[smallest] -
			            temp[smallest];
			tat = tat + end -
			                  at[smallest];
		}
	}
    printf("PID\t AT\t BT\n");
    for (i = 0; i < pr; i++)
    {
        printf("P%d\t %d\t %d\t %d\t %d\t %d\n", p[i], at[i], bt[i]);
    }

	avg_WT = wt / pr;
	avg_TAT = tat / pr;
	printf("\n\nAvg Waiting Time:\t%lf\n", avg_WT);
	printf("Avg Turnaround Time:\t%lf\n", avg_TAT);
	return 0;
}

