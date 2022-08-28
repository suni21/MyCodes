#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

clock_t t, u, v;

void display_arr(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

double ascending(int n, int arr[])
{
    u = clock();
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
    u = clock() - u;
    
}
void descending(int n, int arr[])
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && key> arr[j])
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}
// void bubbleSort(int n, int arr[])
// {
//     v = clock();
//     int temp = 0;
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = i + 1; j < n; ++j)
//         {
//             if (arr[i] < arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     v = clock() - v;
//     double tt = ((double)v) / CLOCKS_PER_SEC;
//     printf("\nTime taken = %f sec\n", tt);
// }

int main()
{
    int n;
    printf("Enter the value= \n");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        // scanf("%d", &arr[i]);
        arr[i] = rand() % 100 + 1;
    }

    printf("\n0. Quit");
    printf("\n1. TO Display the Array");
    printf("\n2. Using Insertion Sort, sort the array in ascending order");
    printf("\n3. Using Bubble sort, sort the array in decending order");
    printf("\n4. Time complexity to sort in ascending order of random data");
    printf("\n5. Time complexity to sort in ascending order of random data which is already sorted in ascending order");
    printf("\n6. Time complexity to sort in ascending order of random data which is already sorted in descending order");

    do
    {

        int choice;
        printf("\nEnter your choice: ");
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
            display_arr(n, arr);
            break;
        }
        case 2:
        {
            ascending(n, arr);
            break;
        }
        case 3:
        {
            descending(n, arr);
            break;
        }
        case 4:
        {
            ascending(n, arr);
            double tt = ((double)u) / CLOCKS_PER_SEC;
            printf("\nTime taken = %f sec\n", tt);
            break;
        }
        case 5:
        {
            descending(n, arr);
            ascending(n, arr);
            double tt = ((double)u) / CLOCKS_PER_SEC;
            printf("\nTime taken = %f sec\n", tt);
            break;
        }
        case 6:
        {
            ascending(n,arr);
            ascending(n,arr);
            double tt = ((double)u) / CLOCKS_PER_SEC;
            printf("\nTime taken = %f sec\n", tt);
            break;
        }
        default:
        {
            printf("Wrong choice!\nPlease try again.\n");
        }
        }
    } while (1);

}