#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int n;
    int count=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);

int arr[n];
//Random numbers
    printf("Enter the values: ");
    for(int i=0;i<n;i++)
    {
        arr[i]=rand()%100+1;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }
//Duplicate
printf("\nDuplicates: \n");
int flag=0;
int maxCount=0;
int maxNo=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d\n",arr[j]);
                count++;
                if(count>maxCount)
                {
                    maxNo=arr[j];
                }
            }
        }
    }  
    printf("No duplicate values!");  
    printf("\nTotal no. of duplicates= %d",count);
    printf("\nMost reapeating no. in array= %d ",maxNo);
    return 0;
}