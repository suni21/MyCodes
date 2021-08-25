#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float *num;
    printf("\nEnter the n number: ");
    scanf("%d", &n);
    num = (float *)malloc(n * sizeof(float)); //allocates memory for n elements

    for (int i = 0; i < n; ++i)
    {
        printf("Entered number %d: ", i + 1);
        scanf("%f", num + i);
    }

    for (int i = 1; i < n; ++i) //sorting
    {
        if (*num < *(num + i))
        {
            *num = *(num + i);
        }
    }
    printf("Largest number = %.2f", *num);

    free(num);

    return 0;
}