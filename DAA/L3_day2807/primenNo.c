#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int n;
    int flag = 0;
    int count = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
        count++;
    }
    if (flag == 0)
    {
        printf("\n %dIs a prime number",n);
    }

    else
    {
        printf("\n%d Is not a Prime number", n);
    }
    printf("\nCount=%d", count);
    return 0;
}
