#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *Arr, int n)
{
    int key, j;

    for (int i = 1; i < n; i++)
    {
        key = Arr[i];
        j = i - 1;

        while (j >= 0 && key > Arr[j])
        {
            Arr[j + 1] = Arr[j];
            j--;
        }
        Arr[j + 1] = key;
    }
}

void display(int *Arr, int n)
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
        printf("Enter the element: ");
        scanf("%d", &Arr[i]);
    }
    insertionSort(Arr, n);
    printf("Sortedc elements: ");
    display(Arr, n);
    return 0;
}