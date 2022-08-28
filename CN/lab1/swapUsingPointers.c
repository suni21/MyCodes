#include<stdlib.h>
#include<stdio.h>

int main()
{
    int a,b;
    int *x,*y;
printf("Enter the values: \n");
scanf("%d%d", &a,&b);

printf("\nBefore swaping: \n");
printf("a= %d, b=%d",a,b);

x=&a;
y=&b;

int temp=*x;
    *x=*y;
    *y=temp;

printf("\n\nAfter swaping: \n");
printf("a=%d, b=%d",a,b);

return 0;
}