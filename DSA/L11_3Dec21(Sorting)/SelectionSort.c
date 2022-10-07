#include <stdio.h>
#include <stdlib.h>

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void selectionSort(int *Arr, int n)
{
    int index;
    for (int i = 0; i < n - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (Arr[j] < Arr[index])
                index = j;
        }
        swap(&Arr[index], &Arr[i]);
    }
}

void print(int *Arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", Arr[i]);
    }
    printf("\n");
}

int main()
{
    int n, *Arr;
    printf("Enter size: ");
    scanf("%d", &n);
    Arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: \n", i);
        scanf("%d", &Arr[i]);
    }
    selectionSort(Arr, n);
    printf("\nSorted elements: ");
    print(Arr, n);

    return 0;
}