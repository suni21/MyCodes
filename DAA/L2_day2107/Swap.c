#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int c;

void swap(int *x, int *y)
{
    int temp = *y;
    *y = *x;
    *x = c;
    c = temp;
}

int main()
{
    int a, b;
    
    a = rand()%100+1;
    b = rand()%100+1;
    c = rand()%100+1;
    printf("Before rotating:\n");
    printf("A= %d\nB= %d\nC= %d\n", a, b, c);
    // ROTATIONS
    swap(&a, &b);
    printf("\nAter rotating:");
    printf("\n");
    printf("A= %d\nB= %d\nC= %d", a, b, c);
    return 0;
}