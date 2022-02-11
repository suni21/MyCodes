#include <stdio.h>

int main()
{

    int p[10] = {0}, bt[10] = {0}, at[10] = {0}, tat[10] = {0}, wt[10] = {0}, ct[10] = {0};
    int pr, add = 0;
    int total_TAT = 0, total_WT = 0;
    float avg_TAT, avg_WT;

    int i, j;

    printf("Enter no. of processes: ");
    scanf("%d", &pr);

    // Arrival time (AT) 
    printf("\nEnter Arrival time= \n");
    for (i = 0; i < pr; i++)
    {
        printf("P[%d]= ", i + 1);
        scanf("%d", &at[i]);
        p[i] = i + 1;
    }
    // Bust time(BT)
    printf("\nEnter Bust time= \n");
    for (i = 0; i < pr; i++)
    {
        printf("P[%d]= ", i + 1);
        scanf("%d", &bt[i]);
        p[i] = i + 1;
    }

    printf("\n");

    // sorting arival time and busttime
    for (i = 0; i < pr; i++)
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

    // calculate completion time (CT)
    for (j = 0; j < pr; j++)
    {
        add += bt[j];
        ct[j] += add;
    }
    // calculate wating time (WT)
    wt[0] = 0;
    for (i = 1; i < pr; i++)
    {
        wt[i] = 0;
        for (j = 0; j < i; j++)
            wt[i] += bt[j];
    }
    // calculate turn around time (TAT)
    for (j = 0; j < pr; j++)
    {
        tat[j] = bt[j] + wt[j];
    }

    for (i = 0; i < pr; i++)
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
    printf("----------------------------------------------\n");
    for ( i=0; i<pr; i++)
        {
            printf("|  P%d  ",p[i]);
            printf("  ");

        }
        printf("|");

    printf("\n");
    printf("----------------------------------------------\n");
    printf("0");
    for ( i=0; i<pr; i++)
        {
             for ( j=0; j<bt[i]; j++)
                 {
                     printf("  ");
                 }
              if(tat[i]>9)
                  printf("  ");

        printf("%d", tat[i]);
        }
    return 0;
}