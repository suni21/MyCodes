/* Name:Suniti
   Rollno:2006243
*/

/* Implement the Priority Scheduling. N is last digit of your roll number. Find Av TAT and Av WT and Number of times context switching took place. 
PID  Priority  AT BT
P1      2          0    4
P2      3          1    3
P3      4          2    1
P4      N          3    5
P5      5          4    N -1
*/

#include <stdio.h>

int main()
{
    int p[5] = {0},pi[5]={0}, bt[5] = {0}, at[5] = {0}, tat[5] = {0}, wt[5] = {0}, ct[5] = {0}, st[5]={0};
    int add = 0, total_TAT = 0, total_WT = 0;
    float avg_TAT, avg_WT;
    int pr,i, j;
    int atime,min,m=1;

    printf("Enter no. of processes: ");
    scanf("%d", &pr);

    printf("\nEnter Priority= \n");    //Priority
    for (i = 0; i < pr; i++)
    {
        printf("P[%d]= ", i + 1);
        scanf("%d", &pi[i]);
        p[i] = i + 1;
    }

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
    for (i = 0; i < pr; i++) 
	{
		for (j = 0; j < pr; j++)
		{
			if (pi[i] < pi[j])
			{
				int temp = p[j];
				p[j] = p[i];
				p[i] = temp;
                
                temp = pi[j];
				pi[j] = pi[i];
				pi[i] = temp;

				temp = at[j];
				at[j] = at[i];
				at[i] = temp;

                temp = bt[j];
				bt[j] = bt[i];
				bt[i] = temp;
		
			}
		}
	}
   
    ct[0]=bt[0];
    for (j = 0; j < pr; j++)   //CompletionTime (CT)
    {
        ct[j]= bt[j]+ct[j-1];
    }
    wt[0] = 0;
    for (j = 0; j < pr; j++)  // Watingtime (WT)
    {
        tat[j]=ct[j]-at[j];
        wt[j]=tat[j]-bt[j];
    }
    for (j = 0; j < pr; j++)   //Total
    {
        total_WT = total_WT + wt[j];
        total_TAT = total_TAT + tat[j];
    }

    printf("PID\t PT\t AT\t BT\t CT\t TAT\t WT\t\n");
    printf("---------------------------------------------------\n");
    for (i = 0; i < pr; i++)
    {
        printf("P%d\t %d\t%d\t %d\t %d\t %d\t %d\n", p[i],pi[i],at[i], bt[i], ct[i], tat[i], wt[i]);
    }
    avg_TAT = total_TAT / pr;
    avg_WT = total_WT / pr;
    printf("\n\nAvg Turnaround Time= %.3f\n", avg_TAT);
    printf("Avg Waiting time= %.3f\n\n", avg_WT);
  
    return 0;
}