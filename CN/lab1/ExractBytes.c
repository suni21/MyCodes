#include<stdio.h>
#include<stdlib.h>

int main()
{
    int var;
    unsigned char a,b,c,d;

    printf("Enter the values: ");
    scanf("%d",&var);
    
    a=(var&0xFF); //bit extraction
    b=((var>>8)&0xFF);
    c=((var>>16)&0xFF);
    d=((var>>24)&0xFF);

    printf("\na= %d\n",a);
    printf("b= %d\n",b);
    printf("c= %d\n",c);
    printf("d= %d\n",d);
    return 0;
}