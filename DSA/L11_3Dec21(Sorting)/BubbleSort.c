#include <stdio.h>
#include <stdlib.h>

void bubblessort(int arr[])
{
    int temp, size;
    //pass
    for (int i = 0; i < size; i++)
    {
        //camparing in pass(each)
        for (int j = 0; j < size - 1 - j; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    char date[2][2];

    printf("Enter no of dates to be sorted:");
    scanf("%d", n);
    printf("Enter dates in ddmmyy format: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", i + 1);
        scanf("%s", &date[i]);
    }

    printf("\n\nSorted dates: \n");
    for (int i = 0; i < n; i++)
    {
        bubblessort(date);
    }

    return 0;
}