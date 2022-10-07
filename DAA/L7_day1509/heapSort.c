#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

clock_t t;

void generate(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n)
{
    t = clock();
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0],& arr[i]);
        heapify(arr, i, 0);
    }
    
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}

int main()
{

    int n, i, j;
    printf("Enter the size= ");
    scanf("%d", &n);

    int arr[n];
    generate(arr, n);
    printArr(arr, n);
    heapSort(arr,n);
    printf("\n\nSorted array:\n");
    printArr(arr,n);
    double tt = ((double)t) / CLOCKS_PER_SEC;
    printf("\nTime taken = %.4f sec\n", tt);
    return 0;
}
