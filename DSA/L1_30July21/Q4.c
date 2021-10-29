#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*total, sum=0;
    printf("Enter the total numbers : ");
    scanf("%d", &n);
    total = (int*)malloc(n * sizeof(int));
 
 for(int i=0;i<n;i++)
 {
         printf("Enter the number %d :" ,i+1);
         scanf("%d", &total[i]);
         sum += total[i];
 }
         printf("sum = %d", sum);
         return 0;
}