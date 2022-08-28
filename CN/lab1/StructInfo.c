#include <stdio.h>
#include <stdlib.h>

struct info
{  
        char name[50];
        int rollno;
        float cgpa; 
};
void show(struct info s);
int main()
{
    int n;
    printf("enter size= ");
    scanf("%d",&n);

    struct info s[n]; 

    for(int i=0;i<n;i++)
    {
        printf("\nEnter Student details:\n");
        printf("Enter name: ");
        scanf("%s", &s[i].name);
        printf("Enter the roll: ");
        scanf("%d", &s[i].rollno);
        printf("Enter cgpa: ");
        scanf("%f", &s[i].cgpa);
    }
    
   printf("\nStudent details:\n");
   for(int i=0;i<n;i++)
   {
    show(s[i]);
   }
free(s);
    return 0;
}


void show(struct info s)
{
    
    printf("\nName:  %s\n", s.name);
    printf("Roll no.:  %d\n", s.rollno);
    printf("CGPA:  %0.2f\n", s.cgpa);
}