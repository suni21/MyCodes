#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,temp;
    int arr[20];
    printf("Enter limit:");
    scanf("%d", &n);
    printf("Enter numbers: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
         {
          if (arr[i] > arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
         }
    }
    
    printf("Sorted array:");
    printf("\n");
    for(int i=0;i<n;i++)
    {
       printf("%d \n",arr[i]);
    }
   return 0; 
}