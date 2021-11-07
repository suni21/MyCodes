#include <stdio.h>
struct stud
{
	char name[20];
	int roll;
	float marks[5], percentage, total_marks;
};

void calc(struct stud s_243[], int n_243)
{
	for (int i_243 = 0; i_243 < n_243; i_243++)
	{
		int sum = 0;
		for (int j_243 = 0; j_243 < 5; j_243++)
		{
			sum = sum + s_243[i_243].marks[j_243];
		}
		s_243[i_243].total_marks = sum;
		printf("\nTotal marks of student%d : %.2f\t", i_243 + 1, s_243[i_243].total_marks);
		s_243[i_243].percentage = (s_243[i_243].total_marks) / 5;
		printf("\nMarks percentage : %.2f", s_243[i_243].percentage);
	}
	printf("\n");
}

void find_stud(struct stud s_243[], int n_243, int rollno)
{
	for (int i_243 = 0; i_243 < n_243; i_243++)
	{
		if (rollno == s_243[i_243].roll)
		{
			printf("\nBelow are the details of the student:");
			printf("\nRoll no.:%d", s_243[i_243].roll);
			printf("\nName:%s", s_243[i_243].name);
			printf("\nTotal.:%.2f", s_243[i_243].total_marks);
			printf("\nPercentage:%.2f", s_243[i_243].percentage);
		}
		else
		{
			printf("\nStudents details not found");
		}
	}
	printf("\n");
}

void find(struct stud s_243[], int n_243, float lower, float upper)
{
	int flag = 0;
	for (int i_243 = 0; i_243 < n_243; i_243++)
	{
		flag = 0;
		if (s_243[i_243].percentage >= lower && s_243[i_243].percentage <= upper)
		{
			printf("Student name : %s\n", s_243[i_243].name);
			printf("Roll no. : %d\n", s_243[i_243].roll);

			for (int j_243 = 0; j_243 < 5; j_243++)
			{
				printf("Marks of sub %d : %.2f\n", j_243 + 1, s_243[i_243].marks[j_243]);
			}
			printf("Total marks %.2f\n", s_243[i_243].total_marks);
			printf("Percentage : %.2f,", s_243[i_243].percentage);

			flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("Student's details not found");
	}
	printf("\n");
}

void arrsort(struct stud s_243[], int n_243)
{
	for (int i_243 = 0; i_243 < n_243 - 1; i_243++)
	{
		for (int j_243 = i_243 + 1; j_243 < n_243; j_243++)
		{
			if (s_243[i_243].total_marks < s_243[j_243].total_marks)
			{
				struct stud temp;
				temp = s_243[i_243];
				s_243[i_243] = s_243[j_243];
				s_243[j_243] = temp;
			}
		}
	}
	for (int i_243 = 0; i_243 < n_243; i_243++)
	{

		printf("\nname of student : %s\n", s_243[i_243].name);
		printf("roll no of student : %d\n", s_243[i_243].roll);
		for (int j_243 = 0; j_243 < 5; j_243++)
		{
			printf("Marks of sub %d : %.2f\n", j_243 + 1, s_243[i_243].marks[j_243]);
		}
	}
	printf("\n");
}
int main()
{

	int i_243, n_243, ro_243;
	float lo_243, up_243;
	printf("Entr no. of students: ");
	scanf("%d", &n_243);
	struct stud s_243[n_243];
	for (i_243 = 0; i_243 < n_243; i_243++)
	{
		printf("Student's name:\n", i_243 + 1);
		scanf("%s", s_243[i_243].name);
		printf("Enter roll no.:");
		scanf(" %d", &s_243[i_243].roll);

		printf("Enter marks of the subjects:\n");
		for (int j_243 = 0; j_243 < 5; j_243++)
		{
			printf("subject %d : ", j_243 + 1);
			scanf("%f", &s_243[i_243].marks[j_243]);
		}
	}
	calc(s_243, n_243);
	printf("Enter the roll no. of the student whose details you want to check : \t");
	scanf("%d", &ro_243);
	find_stud(s_243, n_243, ro_243);
	printf("\n");
	printf("Enter the range of percentage between whose students details you want to check : \n");
	printf("Enter lower range:");
	scanf("%f", &lo_243);
	printf("Enter upper range:");
	scanf("%f", &up_243);
	find(s_243, n_243, lo_243, up_243);

	printf("\nAscending oder othe the student : ");
	arrsort(s_243, n_243);
	return 0;
}
