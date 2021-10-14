#include<stdio.h>
#include<stdlib.h>

void getdata( int *ar[],int n)
{
    for(int i = 0; i < n; i++)
    {
    printf("Enter the elements of row %d\n", i + 1);
        for(int j = 0; j < n; j++)
        {
        printf("Enter the element %d :", j + 1);
        scanf("%d", &ar[i][j]);
        }
    }
}
void displaydata(int *ar[], int n)
{
    for(int i = 0; i < n; i++)
    {
    for(int j = 0; j < n; j++)
        {
        printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
    
}
int ZeroCount(int *ar[], int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
    for(int j = 0; j < n; j++)
        {
        if(ar[i][j]!= 0)
     {
         count++;
     }
    }
    }
    printf("%d",count);
}
int SumDiagonal(int *ar[],int n)
{
    int total = 0;
    for(int i = 0; i < n; i++)
    {
    for(int j = 0; j < n; j++)
        {
         if(j > i)
            {
         total += ar[i][j];
            }
        }
    }
    printf("%d",total);
}
void MinorDiagonal(int *ar[], int n)
{
    for(int i = 0; i < n; i++)
    {
    for(int j = 0; j < n; j++)
        {
         if(j >n-i-1)
            {
         printf("%d ", ar[i][j]);
            }
         else
         printf("  ");
        }
        printf("\n");
    }
}
int ProductDiagonal(int *arr[], int r)
{
    int maj_d = 1, min_d=1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (i == j)
            {
                maj_d *= arr[i][j];
            }
            if ((i + j) == (r - 1))
                {
                min_d *= arr[i][j];
                }
        }
    }
    printf("%d",maj_d);
    printf("%d",min_d);
}


int main()
{
    int ro;
    printf("\nEnter the number of rows: ");
    scanf("%d", &ro);

    int *ar[ro];
    for(int i = 0; i < ro; i++)
    {
        ar[i] = (int*)malloc(ro * sizeof(int));
    }
    getdata(ar,ro);
    displaydata(ar,ro);

    printf("\nTotal nonzero numbers : %d\n",ZeroCount(ar, ro));
    printf("\nThe sum of elements above leading diagonal:%d\n", SumDiagonal(ar ,ro));
    MinorDiagonal(ar, ro);
    printf("\nThe product of diagonal elements is %d\n", ProductDiagonal(ar, ro));
    return 0;
}