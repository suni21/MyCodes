#include<stdio.h>
#include<stdlib.h>

void getData(int **arr, int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("Enter the element arr[%d][%d] :", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void displayData(int **arr, int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
}

void swapping(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapColumn(int **arr, int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c/2; j++)
        {
            swapping(&arr[i][j], &arr[i][c-j-1]);
        }
    }
}

int main()
{
    
    int r, c;
    printf("Enter the no. of rows : ");
    scanf("%d", &r);
    printf("Enter the no. of column: ");
    scanf("%d", &c);
    int **arr = (int**)malloc(r * sizeof(int*));
    for(int i = 0; i < r; i++)
    {
        arr[i] = (int*)malloc(c * sizeof(int));
    }

    getData(arr, r, c);
    displayData(arr, r, c);
    swapColumn(arr, r, c);
    printf(arr, r, c);

    return 0;
}