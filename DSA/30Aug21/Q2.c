#include <stdio.h>
#include <stdlib.h>

struct stud
{  
        char name[25];
        int rollno;
        float cgpa; 
};

int main()
{
    struct stud *s; 
    s = (struct stud *)malloc(sizeof(struct stud));
    printf("Enter Student details:\n");
    printf("Enter name: ");
    scanf("%[^\n]", s->name);
    printf("Enter the roll: ");
    scanf("%d", &s->rollno);
    printf("Enter cgpa: ");
    scanf("%f", &s->cgpa);

    printf("Student details:\n");
    printf("Name of the student :  : %s\n", s->name);
    printf("Roll of the student :  : %d\n", s->rollno);
    printf("CGPA of the student : : %0.2f\n", s->cgpa);

    free(s);
    return 0;
}