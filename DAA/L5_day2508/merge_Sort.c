#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

clock_t t, u;
// Random data generation
void generate(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
}
void merge(int arr[], int m, int l, int r)
{
    int temp[1000], i, j, k;
    i = m;
    j = l + 1;
    k = 0;
    while (i <= l && j <= r)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }
    while (i <= l)
    {
        temp[k++] = arr[i++];
    }
    while (j <= r)
    {
        temp[k++] = arr[j++];
    }
    for (i = m, j = 0; i <= r; i++, j++)
    {
        arr[i] = temp[j];
    }
}

void mergeSort(int arr[], int l, int r)
{
    u = clock();
    int m;
    if (l < r)
    {
        m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
void Reverse_Sort(int arr[], int n)
{
    int temp;
    for (int i = 0; i <= n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
// Random data printing
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
}

int main()
{
    u = clock();
    double tt;
    int n, i, j;
    int index;
    printf("Enter the size= ");
    scanf("%d", &n);

    int arr[n];
    generate(arr, n);
    printArr(arr, n);

    int ch;
    printf("\nEnter the option: \n");
    printf("\n1.Sort Random in ascending order");
    printf("\n2.Sort array from ascending to ascending order");
    printf("\n3.Resverse Sorted data");
    printf("\n0.Quit\n");

    do
    {
        printf("\nEnter the choice= ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            mergeSort(arr, 0, n - 1);
            printf("\nSorted Array:\n");
            printArr(arr, n);
            tt = ((double)u) / CLOCKS_PER_SEC;
            printf("\nTime taken = %.4f sec\n", tt);
            break;
        case 2:
            mergeSort(arr, 0, n - 1);
            mergeSort(arr, 0, n - 1);
            printf("\nSorted Array:\n");
            printArr(arr, n);
            tt = ((double)u) / CLOCKS_PER_SEC;
            printf("\nTime taken = %.4f sec\n", tt);
            break;

        case 3:
            Reverse_Sort(arr, n - 1);
            mergeSort(arr, 0, n - 1);
            printf("\nSorted Array:\n");
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
