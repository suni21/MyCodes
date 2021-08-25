#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int num[n];
    double std = 0.0, mean, sum = 0.0;

    printf("Enter n elements: \n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }

    mean = (double)sum / n;

    double sum2;
    for (int i = 0; i < n; ++i) //standard deviation 
    {
        sum2 += pow((num[i] - mean), 2);
    }
    std = sqrt((double)sum2 / n);
    printf("\nStandard Deviation = %.2lf", std);

    return 0;
}