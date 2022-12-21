#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int v[50], w[50], C;
    int i, j, n;
    int arr[50];
    int u;

    printf("\nEnter the size= ");
    scanf("%d", &n);

    printf("\nEnter the Capacity(of the knapsack)= ");
    scanf("%d", &C);
    u = C;

    for (i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
    printf("Enter the weight: \n");
    for (i = 0; i < n; i++)
    {
        printf("item[%d]",i+1);
        scanf("%d",&w[i]);
    }
    printf("Enter the profit: \n");
    for (i = 0; i < n; i++)
    {
        printf("item[%d]",i+1);
        scanf("%d",&v[i]);
    }

    float ratio[50];
    for (i = 0; i < n; i++)
    {
        ratio[i] = v[i] / w[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (ratio[j] < ratio[i])
            {
                int temp = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = temp;

                temp = v[i];
                v[i] = v[j];
                v[j] = temp;

                temp = w[i];
                w[i] = w[j];
                w[j] = temp;
            }
        }
    }

    printf("\nItem no\t Weight\t Profit\tRatio ");
    for(i=0;i<n;i++)
    {
        scanf("%d\t%d\t%d\t%.2f", i+1, w[i], v[i], ratio[i]);
    }
    float max = 0;
    
    for (i = 0; i <= n; i++)
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
    for (i = 0; i <= n; i++)
    {
        if(i<=n)
        {
            float kar = (float)u / w[i];
            arr[i]=kar;
        }
        
    }
    for(i=0;i<n;i++)
    {
            max += arr[i] * v[i];
    }

    printf("\nMaximum Cost=%.2f", max);
    return 0;
}