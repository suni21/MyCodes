#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m = 3, n = 3;
    int alloc[3][3] = {0};
    int max[3][3] = {0}, available[3] = {0};
    int preavl[3] = {0};
    int need[n][m], order[n], ind = 0, f[n], pavl[n][m], req[3], p, q, pid;
    printf("\nEnter process number : ");
    scanf("%d", &p);

    printf("Enter no. of resources: ");
    scanf("%d", &q);

    printf("Enter Allocation Matrix: \n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("R%d :", i + 1);
            scanf("%d", &alloc[i][j]);
        }
        printf("\n");
    }

    printf("Enter Max matrix: \n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("R%d :", i + 1);
            scanf("%d", &max[i][j]);
        }
        printf("\n");
    }

    printf("Enter values in available: \n");
    for (int j = 0; j < q; j++)
    {
        printf("R%d :", j + 1);
        scanf("%d", &available[j]);
    }

    printf("\nEnter process number: ");
    scanf("%d", &pid);

    printf("Enter the requests: \n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &req[i]);
    }
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (req[i] > need[pid][i])
        {
            printf("System unsafe\n");
            exit(0);
        }
    }
    for (int i = 0; i < m; i++)
    {
        need[pid][i] -= req[i];
        available[i] -= req[i];
        alloc[pid][i] += req[i];
    }

   

    for (int k = 0; k < 4; k++)
    {
        f[k] = 0;
    }
    int y = 0, t = 0;
    for (int k = 0; k < 4; k++)
    {
        for (int i = 0; i < n; i++)
        {
            if (f[i] == 0)
            {
                int s = 0;
                for (int j = 0; j < m; j++)
                {
                    if (need[i][j] > available[j])
                    {
                        s = 1;
                        break;
                    }
                }
                if (s == 0)
                {
                    order[ind++] = i;
                    for (y = 0; y < m; y++)
                    {
                        available[y] += alloc[i][y];
                        pavl[i][y] = available[y];
                    }
                    f[i] = 1;
                }
            }
        }
    }
    int s = 1;
    for (int i = 0; i < n; i++)
    {
        if (f[i] == 0)
        {
            s = 0;
            printf("System is unsafe \n");
        }
    }
    if (s == 1)
    {
        printf("\nSequence is safe \n");
        printf("<");
        for (int i = 0; i < n - 1; i++)
        {
            printf("P%d , ", order[i]);
        }
        printf("P%d", order[n - 1]);
        printf(">");
    }
    printf("\nNeed: \n");
    for (int i = 0; i < n; i++)
    {

        printf("P%d ", i);
        for (int j = 0; j < m; j++)
        {
            printf(" %d ", need[i][j]);
        }
        printf("\n");
    }
    printf("\nInitial availibility: ");
    printf("3 3 0\n");
    printf("\nAvailablity: \n");
    for (int i = 0; i < n; i++)
    {
        printf("P%d ", i);
        for (int j = 0; j < m; j++)
        {

            printf("%d ", pavl[i][j]);
        }
        printf("\n");
    }
    printf("\nNo of instance: ");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", available[i]);
    }
    return 0;
}