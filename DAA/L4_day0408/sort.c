#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <math.h>

clock_t t, x, y;

void getData()
{
    int arr[50],n;
    printf("Enter the n: ");
    scanf("%d", &n);

    for (int i = 0; i <=n; i++)
    {
        printf("%d\n", &arr[i]);
    }
}

void displayData(int n, int arr[])
{
    int t = clock();
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    t = clock() - t;
    double tt = ((double)t) / CLOCKS_PER_SEC;

    printf("\nTime taken = %f sec\n", tt);
}

int insertionSort(int n, int arr[])
{
    int key, j;
    clock_t x = clock();

    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && key > arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    x = clock() - x;
    double tt = ((double)x) / CLOCKS_PER_SEC;

    return tt;
}

void bubblessort(int n, int arr[])
{
    int temp;
    y = clock();
    // pass
    for (int i = 0; i < n-1; i++)
    {
        // camparing in pass(each)
        for (int j = 0; j < n - 1 - j; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    y = clock() - y;
    double tt = ((double)y) / CLOCKS_PER_SEC;

    printf("\nTime taken = %f sec\n", tt);
}
int main()
{
    clock_t time;
    time = clock();

    int n;

    printf("Enter the n: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("%d", &arr[i]);
    }

    printf("\n0. Quit");
    printf("\n1. To Insert n number in Array");
    printf("\n2. TO Display the Array");
    printf("\n3. Using Insertion Sort, sort the array in ascending order");
    printf("\n4. Using Bubble sort, sort the array in decending order");
    printf("\n5. Time complexity to sort in ascending order of random data");
    printf("\n6. Time complexity to sort in ascending order of random data which is already sorted in ascending order");
    printf("\n7. Time complexity to sort in ascending order of random data which is already sorted in descending order");
    printf("\n8. Time complexity to sort in ascending order of all the cases");
    int ch;
    do
    {
        printf("\nEnter your choice= ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 0:
        {
            exit(0);
            break;
        }
        case 1:
        {
            getData(n, arr);
            break;
        }
        case 2:
        {
            printf("Entered Array: ");
            displayData(n, arr);
            break;
        }
        case 3:
        {
            printf("Sorted Array using Insertion sort: ");
            insertionSort(n, arr);
            break;
        }
        case 4:
        {
            printf("Sort the array using Bubble sort: ");
            bubblessort(n, arr);
            break;
        }
        }
    } while (1);

    return 0;
}