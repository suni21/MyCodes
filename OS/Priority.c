/* Name:Suniti
   Rollno:2006243
*/


/* Implement the Priority Scheduling. N is last digit of your roll number. Find Av TAT and Av WT and Number of times context switching took place. 
PID  Priority  AT BT
P1      2          0    4
P2      3          1    3
P3      4          2    1
P4      N          3    5
P4      5          4    N -1
*/

#include <stdio.h>

int main()
{

    int p[5] = {1,2,3,4,5},pi[5]={2,3,4,3,5}, bt[5] = {4,3,1,5,2}, at[5] = {0,1,2,3,4}, tat[5] = {0}, wt[5] = {0}, ct[5] = {0};
    int add = 0, total_TAT = 0, total_WT = 0;
    float avg_TAT, avg_WT;
    int pr, i, j;
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
    for (j = 0; j < pr; j++) 
	{
        
		atime = atime + at[j];
		min = at[m];
		for (i = m; i < pr; i++)
		{
			if (atime >= pi[i] && at[i] < min)
             {
				int temp = p[m];
				p[m] = p[i];
				p[i] = temp;

                temp = pi[m];
				pi[m] = pi[i];
				pi[i] = temp;

				temp = at[m];
				at[m] = at[i];
				at[i] = temp;
			}
		} m++;
	}
    // for (i = 0; i < pr; i++) 
	// {
    //    for (j = 0; j < pr; j++)
	// {
	// 		if ( p[j]>p[i])
    //          {
	// 			int temp = p[j];
	// 			p[j] = p[i];
	// 			p[i] = temp;

    //             temp = pi[j];
	// 			pi[j] = pi[i];
	// 			pi[i] = temp;

	// 			temp = at[j];
	// 			at[j] = at[i];
	// 			at[i] = temp;
	// 		}
	// 	}
	// }

    for (j = 1; j < pr; j++)   //CompletionTime (CT)
    {
        add += bt[j];
        ct[j] += add;
    }
    wt[0] = 0;
    for (i = 0; i < pr; i++)  // Watingtime (WT)
    {
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];
    }
    for (i = 0; i < pr; i++)   //Total
    {
        total_WT = total_WT + wt[i];
        total_TAT = total_TAT + tat[i];
    }

    printf("PID\t PT\t AT\t BT\t CT\t TAT\t WT\t\n");
    printf("---------------------------------------------------\n");
    for (i = 0; i < pr; i++)
    {
        printf("P%d\t %d\t%d\t %d\t %d\t %d\t %d\n", p[i],pi[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }
    avg_TAT = total_TAT / pr;
    avg_WT = total_WT / pr;
    printf("\n\nAvg Turnaround Time= %.3f\n", avg_TAT);
    printf("Avg Waiting time= %.3f\n\n", avg_WT);
  
    return 0;
}