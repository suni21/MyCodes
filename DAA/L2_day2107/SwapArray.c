#include<stdlib.h>
#include<stdio.h>

void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int a,b,c;
    printf("Enter the values in a,b,c: \n");
    scanf("%d%d%d",&a,&b,&c);

    printf("Swapped values: \n");
    swap(a,b);
    return 0;
}