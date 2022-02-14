/* Name:Suniti
Rollno:2006243
*/

#include <stdio.h>

int main()
{

    int p[5] = {0}, bt[5] = {0}, at[5] = {0}, tat[5] = {0}, wt[5] = {0}, ct[5] = {0};
    int pr, add = 0, total_TAT = 0, total_WT = 0;
    float avg_TAT, avg_WT;
    int i, j;

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

    printf("\n");

    // sorting arival time and busttime
    for (i = 0; i < pr - 1; i++)
    {
        for (j = 0; j < pr - i - 1; j++)
        {
            if (at[j] > at[j + 1])
            {
                int temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;

                temp = at[j];
                at[j] = at[j + 1];
                at[j + 1] = temp;

                temp = bt[j];
                bt[j] = bt[j + 1];
                bt[j + 1] = temp;
            }
        }
    }

    for (j = 0; j < pr; j++) // CompletionTime (CT)
    {
        add += bt[j];
        ct[j] += add;
    }
    // Calculate watingtime, trun around time
    wt[0] = 0;
    for (j = 0; j < pr; j++)
    {
        tat[j] = ct[j] - at[j];
        wt[j] = tat[j] - bt[j];
    }
    for (i = 0; i < pr; i++) // Toatl calculation
    {
        total_WT = total_WT + wt[i];
        total_TAT = total_TAT + tat[i];
    }
    printf("PID\t AT\t BT\t CT\t TAT\t WT\t\n");
    for (i = 0; i < pr; i++)
    {
        printf("P%d\t %d\t %d\t %d\t %d\t %d\n", p[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }

    avg_TAT = total_TAT / pr;
    avg_WT = total_WT / pr;
    printf("\nTotal Turnaround Time= %d\n", total_TAT);
    printf("Avg Turnaround Time= %.3f\n", avg_TAT);
    printf("\nTotal Waiting time= %d\n", total_WT);
    printf("Avg Waiting time= %.3f\n\n", avg_WT);

    return 0;
}
