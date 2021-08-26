#include<stdio.h>
#include<stdlib.h>
int main()
{
    int s;
    printf("Enter the numer for series : ");
    scanf("%d ", &s);
    for(int i=0;i<s;i=i+2)
    {
        printf("%d ", i);
    }
    
    return 0;
}