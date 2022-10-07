#include <stdio.h>
#include <stdlib.h>

void ARRANGE_ARRAY(int a[], int n)
{
    int lb = 0, ub = n - 1;
    while (lb < ub)
    {
        // If lb index value is found even and ub indexed value is found odd, then swap
        if (a[lb] % 2 == 0 && a[ub] % 2 != 0) // Left=EVEN, right=ODD
        {
            int temp = a[lb];
            a[lb] = a[ub];
            a[ub] = temp;
            lb = lb + 1;
            ub = ub - 1;
        }
        else if (a[lb] % 2 == 0 && a[ub] % 2 == 0) // Left=EVEN, right=EVEN
        {
            ub = ub - 1;
        }
        else if (a[lb] % 2 != 0 && a[ub] % 2 != 0) // Left=ODD, right=ODD
        {
            lb = lb + 1;
        }
        else if (a[lb] % 2 != 0 && a[ub] % 2 == 0) // Left=ODD, right=EVEN
        {
            lb = lb + 1;
            ub = ub - 1;
        }
    }
}

int main()
{
    int n;
    int temp;

    printf("Enter the size of array= ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter values: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    ARRANGE_ARRAY(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

    
    return 0;
}