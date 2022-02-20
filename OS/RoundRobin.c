/* Name:Suniti
   Rollno:2006243
*/

/*
PID    AT   BT
P1      0      5
P2      1      4
P3      2      2
P4      4      1
*/
#include <stdio.h>
struct RoundRobin
{
    int Pid;
    int AT;
    int BT;
    int WT;
    int TAT;
    int CT;
};
struct RoundRobin rr[10];

int rear = -1, front = -1;
int q[10];

void insertion(int pr)
{
    if (front == -1)
    {
        front = 0;
        rear = rear + 1;
        q[rear] = pr;
    }
}

int deletion()
{
    int pr;
    pr = q[front];
    front = front + 1;
    return pr;
}

int main()
{
    int pr, i, x, time = 0, temp[5], end[5]={0};
    int total_TAT = 0, total_WT = 0;
    float avg_TAT, avg_WT, time_quantum;

    printf("Enter no. of processes: ");
    scanf("%d", &pr);

    printf("\nEnter Arrivaltime= \n"); // Arrival time (AT)
    for (i = 0; i < pr; i++)
    {
        printf("P[%d]= ", i+1);
        scanf("%d", &rr[i].AT);
        rr[i].Pid = i+1;
    }
    printf("\nEnter Busttime= \n"); // Bust time(BT)
    for (i = 0; i < pr; i++)
    {
        printf("P[%d]= ", i+1);
        scanf("%d", &rr[i].BT);
        rr[i].Pid = i+1;
        temp[i]=rr[i].BT;
    }
    printf("Enter Time Quantum: \n");
    scanf("%d", &time_quantum);

    insertion(0);
    end[0] = 1;

    while (front <= rear)
    {
        x = deletion();

        if (rr[x].BT >= time_quantum)
        {
            rr[x].BT = rr[x].BT - time_quantum;
            time = time + time_quantum;
        }
        else
        {
            time = time + rr[x].BT;
            rr[x].BT = 0;
        }
        for (int i = 0; i < pr; i++)
        {
            if (end[i] == 0 && rr[i].AT <= time)
            {
                insertion(i);
                end[i] = 1;
            }
        }
        if (rr[x].BT == 0)
        {
            time = rr[x].BT;
            rr[x].CT = time + rr[x].BT;
            rr[x].TAT = time - rr[x].AT;
            rr[x].WT = rr[x].TAT - temp[x];

            total_TAT = total_TAT + rr[x].TAT;
            total_WT = total_WT + rr[x].WT;
        }
        else
        {
            insertion(x);
        }

        printf("PID\t AT\t BT\t TAT\t WT\t\n");
        printf("----------------------------------------------\n");
        for (i = 0; i < pr; i++)
        {
            printf("P%d\t %d\t %d\t %d\t %d\n", rr[i].Pid, rr[i].AT, rr[i].BT,rr[i].TAT, rr[i].WT);
        }
        avg_TAT = total_TAT / pr;
        avg_WT = total_WT / pr;
        printf("\n\nAverage Turnaround Time= %.2f\n", avg_TAT);
        printf("Average Waiting time= %.2f\n\n", avg_WT);

        return 0;
    }
}
