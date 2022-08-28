#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
int arr[20];
int largest=0;
printf("Enter the limit: ");

scanf("%d", &n);

 printf("Enter numbers: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

for(int i=0;i<n;i++)
{
        if(arr[i]>largest)
        {
            largest=arr[i];
        
        }
}

printf("Largest integer= ");
printf("%d\n",largest);

return 0;

}