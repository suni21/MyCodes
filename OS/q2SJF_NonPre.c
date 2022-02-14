/* Name:Suniti
Rollno:2006243
*/ 

#include <stdio.h>

int main()
{

    int p[5] = {0}, bt[5] = {0}, at[5] = {0}, tat[5] = {0}, wt[5] = {0}, ct[5] = {0};
    int add = 0, total_TAT = 0, total_WT = 0, btime=0, m=1;
    float avg_TAT, avg_WT;
    int pr, i, j,min;

    printf("Enter no. of processes: ");
    scanf("%d", &pr);

    printf("\nEnter Arrivaltime= \n");    // Arrival time (AT)
    for (i = 0; i < pr; i++)
    {
        printf("P[%d]= ", i + 1);
        scanf("%d", &at[i]);
        p[i] = i + 1;
    }

    printf("\nEnter Busttime= \n");    // Bust time(BT)
    for (i = 0; i < pr; i++)
    {
        printf("P[%d]= ", i + 1);
        scanf("%d", &bt[i]);
        p[i] = i + 1;
    }

    printf("\n");
    for (i = 0; i < pr; i++)  //Sorting as per arrivaltime
	{
		for (j = 0; j < pr; j++)
		{
			if (at[i] < at[j])
			{
				int temp = p[j];
				p[j] = p[i];
				p[i] = temp;

				temp = at[j];
				at[j] = at[i];
				at[i] = temp;

				temp = bt[j];
				bt[j] = bt[i];
				bt[i] = temp;
			}
		}
	}
	for (j = 0; j < pr; j++)  //Sorting as per busttime
	{
        
		btime = btime + bt[j];
		min = bt[m];
		for (i = m; i < pr; i++)
		{
			if (btime >= at[i] && bt[i] < min)
             {
				int temp = p[m];
				p[m] = p[i];
				p[i] = temp;

				temp = at[m];
				at[m] = at[i];
				at[i] = temp;

				temp = bt[m];
				bt[m] = bt[i];
				bt[i] = temp;
			}
		} m++;
	}

    for (j = 0; j < pr; j++)   //CompletionTime (CT)
    {
        add += bt[j];
        ct[j] += add;
    }
    wt[0] = 0;
    for (i = 1; i < pr; i++)  // Watingtime (WT)
    {
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];
    }
    for (i = 0; i < pr; i++)   //Total
    {
        total_WT = total_WT + wt[i];
        total_TAT = total_TAT + tat[i];
    }

    printf("PID\t AT\t BT\t CT\t TAT\t WT\t\n");
    printf("----------------------------------------------\n");
    for (i = 0; i < pr; i++)
    {
        printf("P%d\t %d\t %d\t %d\t %d\t %d\n", p[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }
    avg_TAT = total_TAT / pr;
    avg_WT = total_WT / pr;
    printf("\n\nAverage Turnaround Time= %.3f\n", avg_TAT);
    printf("Average Waiting time= %.3f\n\n", avg_WT);
  
    return 0;
}