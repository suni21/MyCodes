#include<stdio.h>
#include<stdlib.h>

typedef struct pair{
    int ind;
    int data;
}pair;


pair minAt(int *at, int n)
{
    pair ans;
    ans.data = 1000;
    for(int i = 0; i < n; i++)
    {
        if(ans.data > at[i])
        {
            ans.data = at[i];
            ans.ind = i;
        }
    }
    at[ans.ind] = 1000;
    return ans;
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int p_id[] = {1, 2, 3, 4, 5};
    int at[] = {0, 2, n, 3, 4};
    int AT[] = {0, 2, n, 3, 4};
    int bt[] = {4, 1, 6, 2, n+1};
    int leftEntry[5];
    int ct[5];
    int tat[5];
    int wt[5];
    int rt[5];
    pair min = minAt(at, 5);
    int temp = min.data;
    int ind = min.ind;
    
    for(int i = 0; i < n - 1; i++)
    {
        leftEntry[ind] = temp;
        temp += bt[ind];
        ct[ind] = temp;
        min = minAt(at, 5);
        ind = min.ind;
    }
    
    for(int i = 0; i < 5; i++)
    {
        tat[i] = ct[i] - AT[i];
        wt[i] = tat[i] - bt[i];
        rt[i] = leftEntry[i] - AT[i];
    }

    printf("Pid  AT  BT  CT  TAT  WT  RT\n");
    for(int i = 0; i < 5; i++)
    {
        printf("P%d  %2d  %2d   %2d  %2d  %2d  %2d\n", p_id[i], AT[i], bt[i], ct[i], tat[i], wt[i], rt[i]);
    }

    float avgTat = 0;
    float avgWT = 0;
    int sumT = 0, sumW = 0;
    for(int i = 0; i < 5; i++)
    {
        sumT += tat[i];
        sumW += wt[i];
    }
    avgTat = sumT / 5.0;
    avgWT = sumW / 5.0;
    printf("Average TAT: %.2f\n", avgTat);
    printf("Average WT: %.2f\n", avgWT);
    return 0;
}