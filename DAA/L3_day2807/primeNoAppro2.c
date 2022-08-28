#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int flag = 0;
    int count = 0;

    // n=rand()%100+1;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("%d Prime number", n);
    }

    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
                flag = 1;
            count++;
        }

        if (flag == 1)
        {
            printf("%d Is not a prime number", n);
        }
        else
        {
            printf("%d Is a prime number", n);
        }
    }
    printf("\nCount=%d", count);
    return 0;
}