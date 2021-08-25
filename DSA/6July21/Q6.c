#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *num, n;
    printf("Enter the n number: ");
    scanf("%d", &n);

    num = (int *)malloc(n * sizeof(int)); //allocates memory for n elements

    printf("Enter the numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", num + i);
    }
    printf("\nReverse Order: \n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf(" %d", *(num + i));
    }
    return 0;
}