#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *p, n, i, sum=0;
   printf("\nEnter the n number: ");
   scanf("%d", &n);
   p = (int *)malloc(n * sizeof(int)); //allocates memory for n elements

   for (i = 0; i < n; i++)
   {
      printf("\nEnter the element %d:", i + 1);
      scanf("%d", &p[i]);
   }
   for (int i = 0; i < n; i++)
   {
      sum += p[i];
   }
   printf("\nEntered elements are:\n ");
   for (i = 0; i < n; i++)
   {
      printf("\n%d", p[i]);
      
   }
   printf("\nAverage of the numbers : %.2f", (sum/(float)n));
   return 0;
}
