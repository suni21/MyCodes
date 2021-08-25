#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *name;
    int *rollno;
    float *cgpa;
    name = (char *)malloc(20 * sizeof(char));
    rollno = (int *)malloc(sizeof(int));
    cgpa = (float *)malloc(sizeof(float));

    printf("Enter the details of the student:\n");
    printf("enter the name: ");
    scanf("%[^\n]", name);
    printf("enter the roll: ");
    scanf("%d", rollno);
    printf("enter the cgpa: ");
    scanf("%f", cgpa);

    printf("Name of the student : %s\n", name);
    printf("Roll of the student : %d\n", *rollno);
    printf("Cgpa of the student : %.2f\n", *cgpa);

    return 0;

    free(name);
    free(rollno);
    free(cgpa);
}