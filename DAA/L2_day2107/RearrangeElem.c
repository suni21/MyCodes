#include<stdio.h>
#include<stdlib.h>

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

    printf("Entered values:");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

    //Rearrange
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]%2==0)
            {
             temp=arr[j];
             arr[j]=arr[i];
             arr[i]=temp;
            }
        }
    }
    printf("\nArray rearranged in even and odd order:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}