#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c, t = 0, s = 0, maj_d = 1, min_d = 1;
    printf("Enter the no. of row: \n");
    scanf("%d", &r);
    printf("Enter the no. of coloumn: \n");
    scanf("%d", &c);
    int *arr[r];
    for (int i = 0; i < r; i++)
    {
        arr[i] = (int *)malloc(c * sizeof(int));
    }
    printf("Enter the elements: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter arr[%d][%d]:", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    printf("Entered array: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d", arr[i][j]);
            if (arr[i][j] != 0)
            {
                t++;
            }
        }
        printf("\n");
    }
    printf("\n The no.of non-zero elements in the array is %d \n", t);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i < j)
            {
                s += arr[i][j];
            }
        }
    }
    printf("\n The sum elements in the above leading diagonal in the array is: %d ", s);
    printf("\n The elements below minor diagonal in the array are: %d\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
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
    printf("\n The product of elements in the major diagonal: %d \n", maj_d);
    printf("\n The product of elements in the minor diagonal: %d \n", min_d);

    return 0;
}