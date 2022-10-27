#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

clock_t t;

void generate(int n, int p[], int w[], int W)
{
    printf("\nEnter the Value: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    printf("\nEnter the Weight: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &w[i]);
    }
    printf("Enter the Capacity(of Knapsack)= ");
    scanf("%d", &W);
}
// return max capacity of knapsack
int max_knapsack(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int knapsack(int p[], int w[], int W, int n)
{
    t = clock();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < n-1; i++)
        {
            if (w[i] > w[j])
            {
                int temp = w[i];
                w[i] = w[j];
                w[j] = temp;

                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    if (n == 0 || W == 0)
        return 0;

    if (w[n - 1] > W)
        return knapsack(p,w,W,n - 1);

    else
        return max_knapsack(p[n - 1] + knapsack(p,w,W - w[n - 1], n - 1), knapsack(p,w,W, n - 1));
}

void print_Knapsack(int n, int p[], int w[])
{
    printf("\nItem\tWeight\tValue\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\n", i+1,w[i], p[i]);
    }
}

int main()
{
    int n, W;

    printf("\nEnter the size= ");
    scanf("%d", &n);
    int itm[n];
    int p[n], w[n];

    generate(n, p, w, W);
    int max=0;
    max= knapsack(p,w,W, n);
    print_Knapsack(n, p, w);
    printf("\nMaximum value in a 0-1 knapsack : %d\n",max);
    
    double tt = ((double)t) / CLOCKS_PER_SEC;
    printf("\nTime taken = %.4f sec\n", tt);
    return 0;
}
