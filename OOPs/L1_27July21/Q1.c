#include<stdio.h>
struct student
{
	char name[20];
	int roll;
	float marks[5];	
};
int main()
{
struct student s_243;
printf("Student's name:\n");
scanf(" %[^\n]",s_243.name);
printf("Enter roll no.:");
scanf(" %d", &s_243.roll);
printf("Enter marks of the subjects:\n");
for(int i_243=0;i_243<5;i_243++)
{
	printf("subject %d : ",i_243+1);
	scanf("%.2f",&s_243.marks[i_243]);
}
printf("\n");
printf("Student's name: %s\n",s_243.name);
printf("Students roll no.: %d\n",s_243.roll);
for(int i_243=0;i_243<5;i_243++)
{
	printf("Marks of subject %d : %.2f\n",i_243+1,s_243.marks[i_243]);
}
return 0;
}