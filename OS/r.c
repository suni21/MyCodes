/* Name:Suniti
   Rollno:2006243
*/

/*
PID     AT     BT
P1      0      5
P2      1      4
P3      2      2
P4      4      1
*/

#include <stdio.h>
struct RoundRobin
{
    int P;
    int AT;
    int BT;
    int WT;
    int TAT;
    int CT;
};

struct RoundRobin rr[10];

int q[10];
int f = -1, r = -1;

void insertion(int pr)
{
    if (f == -1)
        f = 0;
    r = r + 1;
    q[r] = pr;
}

int deletion()
{
    int pr;
    pr = q[f];
    f = f + 1;
    return pr;
}
int main()
{
    int pr, time_Quantum, p, time = 0;
    int temp[10], end[10] = {0};
    float total_wt = 0, total_tat = 0, Avg_WT, Avg_TAT;

    printf("\nEnter no. of Process= ");
    scanf("%d", &pr);
    printf("\nEnter ArrivalTime: \n"); // Arrival time (AT)
    for (int i = 0; i < pr; i++)
    {
        printf("P[%d]= ", i + 1);
        scanf("%d", &rr[i].AT);
        rr[i].P = i + 1;
    }
    printf("\nEnter BustTime: \n"); // Bust time(BT)
    for (int i = 0; i < pr; i++)
    {
        printf("P[%d]= ", i + 1);
        scanf("%d", &rr[i].BT);
        rr[i].P = i + 1;
        temp[i] = rr[i].BT;
    }
    printf("\nEnter Time quantum\n");
    scanf("%d", &time_Quantum);

    insertion(0);
    end[0] = 1;

    while (f <= r)
    {
        p = deletion();
        if (rr[p].BT >= time_Quantum)
        {
            rr[p].BT = rr[p].BT - time_Quantum;
            time = time + time_Quantum;
        }
        else
        {
            time = time + rr[p].BT;
            rr[p].BT = 0;
        }
        for (int i = 0; i < pr; i++)
        {
            if (end[i] == 0 && rr[i].AT <= time)
            {
                insertion(i);
                end[i] = 1;
            }
        }
        if (rr[p].BT == 0)
        {
            time += rr[p].BT;
            rr[p].CT += time;
            rr[p].TAT = time - rr[p].AT;
            rr[p].WT = rr[p].TAT - temp[p];
            
            total_tat = total_tat + rr[p].TAT;
            total_wt = total_wt + rr[p].WT;
        }
        else
        {
            insertion(p);
        }
    }

    Avg_TAT = total_tat / pr;
    Avg_WT = total_wt / pr;

    printf("\nPID\tAT\tCT\tWT\tTAT\n");
    for (int i = 0; i < pr; i++)
    {
        printf("P%d\t%d\t%d\t%d\t%d\n", rr[i].P, rr[i].AT, rr[i].CT, rr[i].WT, rr[i].TAT);
    }
    printf("\nAverage waiting time= %f\n", Avg_WT);
    printf("Average turn around time= %f\n", Avg_TAT);
    return 0;
}