#include <iostream>
#include <string.h>
using namespace std;

class Student
{
    char name[30];
    int roll, age;

public:
    Student(char *n, int ro, int a)
    {
        cout << "Constructor is called for class Student\n";
        strcpy(name, n);
        roll = ro;
        age = a;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Age: " << age << endl;
    }
    ~Student()
    {
        cout << "Destructor is called for class Student\n";
    }
};

class test : virtual public Student
{
    int marks[3];

public:
    test(char *n, int r, int a,int *m) : Student(n,r,a)
    {
        cout << "Constructor is called for class test\n";
        for (int i = 0; i < 3; i++)
        {
            marks[i] = m[i];
        }
    }
    int totalMarks()
    {
        return marks[0] + marks[1] + marks[2];
    }
    ~test()
  {
     cout << "Destructor is called for class test\n"; 
  }
};

class activities : virtual public Student
{
    int actMark[2];

public:
    activities(char *n, int r, int a, int *actm) : Student(n, r, a)
    {
        cout << "Constructor is called for class activities\n";
        actMark[0] = actm[0];
        actMark[1] = actm[1];
    }

    int totalScore()
    {
        return actMark[0] + actMark[1];
    }
    ~activities()
    {
        cout << "Destructor is called for class activities\n";
    }
};

class result : public test, public activities
{
    int total;
    float percent;
    char grade;

public:
    result(char *n, int r, int a, int *m, int *actm) : Student(n, r, a), test(n, r, a, m), activities(n, r, a, m)
    {
        cout << "Constructor is called for class result\n";
        total = totalMarks() + totalScore();
        percent = total / 5.0;

        int p = percent / 10;
        switch (p)
        {
        case 10:

        case 9:
            grade = 'O';
            break;
        case 8:
            grade = 'E';
            break;
        case 7:
            grade = 'A';
            break;
        case 6:
            grade = 'B';
            break;
        case 5:
            grade = 'C';
            break;
        case 4:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
        }
    }

    void display()
    {
        test ::display();
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percent << endl;
        cout << "Grade: " << grade << endl;
    }
    ~result()
    {
        cout << "\nDestructor is called for class result\n";
    }
};

int main()
{
    char name_243[20];
    int roll_243, age_243, marks_243[3], act_243[2];

    cout << "Enter the data: \n";
    cout << "Name: ";
    gets(name_243);
    cout << "Roll: ";
    cin >> roll_243;
    cout << "Age: ";
    cin >> age_243;
    cout << "Enter marks: " << endl;
    for (int i_243 = 0; i_243 < 3; i_243++)
    {
        cout << "Marks " << i_243+1 << ":";
        cin >> marks_243[i_243];
    }
    cout << "Enter activity marks: " << endl;
    cout << "Activity 1: ";
    cin >> act_243[0];
    cout << "Activity 2: ";
    cin >> act_243[1];
    cout<<endl;
    result r1_243(name_243,roll_243,age_243,marks_243,act_243);
    r1_243.display();
    return 0;
}