#include<stdio.h>
 #include <conio.h>
 
 
int main()
{
    int a[30],i,n,key;
   
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter values: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter the key : ");
    scanf("%d", &key);
     
    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
			printf("Element found ");
            return 0;		 
        }
 
    }
	printf("Element not found");
}