#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

clock_t t;

int main()
{
    int n, i, W, u;
    int p[50], w[50];
    float arr[50],ratio[50];

    printf("Enter the size= ");
    scanf("%d", &n);

    printf("Enter the Capacity(of Knapsack)= ");
    scanf("%d", &W);

    u = W;

    for (i = 0; i < n; i++)
    {
        arr[i] = 0;
    }

    printf("\nEnter the Value: \n");
    for (i = 0; i < n; i++)
    {
        printf("Item[%d]= ", i + 1);
        scanf("%d", &p[i]);
    }

    printf("\nEnter the Weight: \n");
    for (i = 0; i < n; i++)
    {
        printf("Item[%d]= ", i + 1);
        scanf("%d", &w[i]);
    }
    t = clock();
    for (i = 0; i < n; i++)
    {
        ratio[i] = p[i] / w[i];
    }
    for (i = 0; i < n; i++)
    {
         for (int j = 0; j < n - 1; j++)
        {
            if (ratio[j] < ratio[i])
            {
                int temp = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = temp;

                temp = w[i];
                w[i] = w[j];
                w[j] = temp;

                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    printf("\nTable:");
    printf("\nItems\tWeight\tValue\tRatio\n\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\t%.1f\n",i+1, w[i], p[i], ratio[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (w[i] <= u)
        {
            arr[i] = 1;
            u = u - w[i];
        }
        else if (w[i] > u)
        {
            break;
        }
    }
    float kar;
    if (i <= n)
    {
      kar = (float)u / w[i];
        arr[i] = kar;
    }

    float max=0;
    for (i = 0; i < n; i++)
    {
        max +=arr[i] * p[i];
    }


    printf("\nMaximum value of fractional knapsack : %.2f\n", max);
    double tt = ((double)t) / CLOCKS_PER_SEC;
    printf("\nTime taken = %.4f sec\n", tt);
    return 0;
}
