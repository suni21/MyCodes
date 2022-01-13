#include <stdio.h>
#include <stdlib.h>

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int partition(int *A, int bottom, int top)
{
    int pivot = A[bottom];
    int i = bottom + 1;
    int x = top;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[x] > pivot)
        {
            x--;
        }
        if (i < x)
            swap(&A[i], &A[x]);
    } while (i < x);

    swap(&A[x], &A[bottom]);
    return x;
}

void quickSort(int *A, int bottom, int top)
{
    int partitionIndex;
    if (bottom < top)
    {
        partitionIndex = partition(A, bottom, top);
        quickSort(A, bottom, partitionIndex - 1);
        quickSort(A, partitionIndex + 1, top);
    }
}
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main()
{
    int n, *Arr, bottom, top;
    printf("Enter size: ");
    scanf("%d", &n);
    Arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &Arr[i]);
    }
    bottom = 0;
    top = n - 1;

    quickSort(Arr, bottom, top);
    printf("\nSorted elements: ");
    printArray(Arr, n);

    return 0;
}