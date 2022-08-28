#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

clock_t t, u, v;
void input_arr()
{
}

void display_arr(int n, int arr[])
{

    t = clock();
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    t = clock() - t;
    double tt = ((double)t) / CLOCKS_PER_SEC;
    printf("\nTime taken = %f sec\n", tt);
}

double insertionSort(int n, int arr[])
{
    u = clock();
    for (int step = 1; step < n; step++)
    {
        int key = arr[step];
        int j = step - 1;

        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
    u = clock() - u;
    double tt = ((double)u) / CLOCKS_PER_SEC;
    // printf("\nTime taken = %f sec\n", tt);
    return tt;
}

void bubbleSort(int n, int arr[])
{
    v = clock();
    int temp = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    v = clock() - v;
    double tt = ((double)v) / CLOCKS_PER_SEC;
    printf("\nTime taken = %f sec\n", tt);
}

int main()
{
    clock_t t;
    t = clock();
    int n;
    printf("Enter arr's size: \n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        // scanf("%d", &arr[i]);
        arr[i] = rand() % 100 + 1;
    }

    do
    {
        printf("\n\n**MENU**\n 0) Quit\n 1) Insert n random numbers in arr\n 2) Display the array\n 3) Sort arr in ascending order\n 4) Sort array in descending order\n 5) Dislay time complexity to sort ascending of random data\n 6) Display time complexity to sort ascending of data already sorted in ascending order\n 7) Display time complexity to sort ascending of data already sorted in descending order\n");

        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
        {
            exit(0);
            break;
        }

        case 1:
        {
            input_arr();
            break;
        }

        case 2:
        {
            display_arr(n, arr);
            break;
        }
        case 3:
        {
            insertionSort(n, arr);
            break;
        }
        case 4:
        {
            bubbleSort(n, arr);
            break;
        }
        case 5:
        {
            double ans = insertionSort(n, arr);
            printf("\nTime taken = %f sec\n", ans);
            break;
        }
        case 6:
        {
            insertionSort(n, arr);
            double b = insertionSort(n, arr);
            printf("\nTime taken = %f sec\n", b);
            break;
        }
        case 7:
        {
            bubbleSort(n, arr);
            double c = insertionSort(n, arr);
            printf("\nTime taken = %f sec\n", c);
            break;
        }
        default:
        {
            printf("Wrong choice.....Please try again!!!\n");
        }
        }
    } while (1);
    return 0;
}