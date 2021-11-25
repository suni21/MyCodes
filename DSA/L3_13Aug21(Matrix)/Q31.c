#include<stdio.h>
#include<stdlib.h>

void swaping(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void swapColumn(int **arr)
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3/2; j++)
        {
            swaping(&arr[i][j], &arr[i][3 - j - 1]);
        }
    }
}

int main()
{
    
    int ar[3][3];
    int *arr = (int*)malloc(3 * sizeof(int));
    for(int i = 0; i < 3; i++)
    {
        arr[i] = (int*)malloc(3 * sizeof(int));
    }
    swapColumn(arr);
    print(arr, 3, 3);
    return 0;
}