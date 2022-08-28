#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
  int n;
  // n= rand() % 100 + 1;

  printf("Enter number: ");
  scanf("%d",&n);

  int flag = 0;
  int count=0;

  if (n == 1)
  {
    printf("%d A prime number", n);
  }
  else
  {
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
          flag = 1;
          count++;
    }  
      if (flag == 1)
      {
        printf("%d Not a prime number", n);
      }

      else
      {
        printf("%d A prime number", n);
        
      }
      printf("\nCount=%d",count);
  }
  return 0;
}