#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[30];
    int rollno, age;
    float cgpa;
    char sub;
};

int main()
{
    int n;
    struct student *s;
    printf("enter the no. of students : ");
    scanf("%d", &n);
    s = (struct student *)malloc(n * sizeof(struct student));

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the details of the students %d\n", i + 1);
        printf("Enter name ");
        scanf(" %s", (s + i)->name);
        printf("Enter the roll ");
        scanf("%d", &(s + i)->rollno);
        printf("Enter the age ");
        scanf("%d", &(s + i)->age);
        printf("Enter cgpa ");
        scanf("%f", &(s + i)->cgpa);
        printf("Enter subject ");
        scanf(" %s", (s + i)->sub);
    }
    printf("\nEntered details are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nthe details of the students %d\n", i + 1);
        printf("Name : %s\n", (s + i)->name);
        printf("Roll : %d\n", (s + i)->rollno);
        printf("age : %d\n", (s + i)->age);
        printf("CGPA : %.2f\n", (s + i)->cgpa);
        printf("subject : %s\n", (s + i)->sub);
    }
    free(s);

    return 0;
}
