#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

clock_t u;
// Random data generation
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

int partition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = (l - 1);
    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] <=  pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[h]);
    return (i + 1);
}
int Random_partition(int arr[], int l, int h)
{
    // int pivot = rand() % (h - l);  
    int pivot = rand()%(l,h);
    printf("Index=%d\nElement=%d", pivot,arr[pivot]);
    int i = (l - 1);

    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[h]);
    return (i + 1);
}
void quickSort(int arr[], int l, int h)
{
    u = clock();
    int partitionIndex;
    if (l < h)
    {
        partitionIndex = partition(arr, l, h);
        quickSort(arr, l, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, h);
    }
}
// void Random_quickSort(int arr[], int l, int h)
// {
//     u = clock();
//     int partitionIndex;
//     if (l < h)
//     {
//         partitionIndex = Random_partition(arr, l, h);
//         Random_quickSort(arr, l, partitionIndex - 1);
//         Random_quickSort(arr, partitionIndex + 1, h);
//     }
// }
// Random data printing
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
    double tt;
    printf("Enter the size= ");
    scanf("%d", &n);

    int arr[n];
    generate(arr, n);
    printArr(arr, n);

    int ch;
    printf("\nEnter the option: \n");
    printf("\n1.Quick Sort");
    printf("\n2.Randomize Quick Sort");
    printf("\n0.Quit\n");

    do
    {
        printf("\nEnter the choice= ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            quickSort(arr, 0, n - 1);
            printf("\nSorted elements:\n");
            printArr(arr, n);
            tt = ((double)u) / CLOCKS_PER_SEC;
            printf("\nTime taken = %.4f sec\n", tt);
            break;
        case 2:
            Random_partition(arr, 0, n - 1);
            quickSort(arr, 0, n - 1);
            printf("\nSorted elements:\n");
            printArr(arr, n);
            tt = ((double)u) / CLOCKS_PER_SEC;
            printf("\nTime taken = %.4f sec\n", tt);
            break;

        case 0:
            exit(0);
            break;
        default:
        {
            printf("Wrong choice...\n");
        }
        }
    } while (1);
    return 0;
}
