#include<stdio.h>
#include<stdlib.h>
void getdata( int n,int *ar[])
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
int SumDiagonal(int n,int *ar[])
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
    int mul = 1;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < r; j++)
        {
            if(i ==j||j==r-i-1)
            {
                mul *= arr[i][j];
            }
        }
    }
    printf("%d",mul);
}

int main()
{
    int ro;
    printf("Enter the number of rows: ");
    scanf("%d", &ro);

    int *ar[ro];
    for(int i = 0; i < ro; i++)
    {
        ar[i] = (int*)malloc(ro * sizeof(int));
    }
    printf("Total nonzero numbers : %d\n",ZeroCount(ar, ro));
    printf("The sum of elements above leading diagonal:%d\n", SumDiagonal(ar, ro));
    MinorDiagonal(ar, ro);
    printf("The product of diagonal elements is %d\n", ProductDiagonal(ar, ro));
    return 0;
}