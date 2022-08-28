#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
clock_t t,u;

int binary_search(int arr[], int n, int high, int low,int key)
{
    u = clock();

    high = n - 1;
    low = 0;
    int mid = 0;
    int flag = 0;

    while (low <= high)
    {
        mid = (high + low) / 2;

        if (key == arr[mid])
        {
            flag=1;
            break;
        }
        else 
             if (key > arr[mid])
                low = mid + 1;
             else
                 high = mid - 1;
    }
    if(flag==1)
    {
        printf("\nSearched Key= %d \nKey is Found at %d",key,mid+1);
    }
    else
    {
        printf("\nSearched key= %d\nNot Found",key); 
    }
    u = clock() - u;
    double tt = ((double)u) / CLOCKS_PER_SEC;
    printf("\nTime taken = %f sec\n", tt);
}

int main()
{
    int n;
    int key;
    int flag=0;

    printf("Enter the size= ");
    scanf("%d", &n);

    int arr[n];

    //For taking Random numbers
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
    //Printing Random numbers
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
    //Sorting the Random numbers
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n");
    //Printing Sorted Random numbers
    printf("\nEntered values:\n ");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
    printf("\nEnter the key to search= ");
    scanf("%d", &key);
    int search = binary_search(arr, n, 0, n - 1,key);

    return 0;
}