#include <iostream>
#include <string.h>
using namespace std;

class Student
{
    char name[30];
    int roll;
    int age;

public:
    Student(char *n, int r, int a)
    {
        cout << "Constructor is called for class Student\n";
        strcpy(name, n);
        roll = r;
        age = a;
    }
    void display()
    {
        cout << "\nName: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Age: " << age << endl;
    }
    ~Student()
    {
        cout << "Destructor is called for class Student\n";
    }
};

class Test : public Student
{
public:
    int marks[5];

public:
    Test(char *n, int r, int a, int *m) : Student(n, r, a)
    {
        cout << "Constructor is called for class Test\n";

        for (int i = 0; i < 5; i++)
        {
            marks[i] = m[i];
        }
    }
    void display()
    {
        Student::display();
        for (int i = 0; i < 5; i++)
        {
            cout << "Marks " << i + 1 << ":" << marks[i] << endl;
        }
    }
    ~Test()
    {
        cout << "Destructor is called for class Test\n";
    }
};

class result : public Test
{
    int total;
    float per;
    char grade;

public:
    result(char *n, int r, int a, int *m) : Test(n, r, a, m)
    {
        total = 0;
        cout << "Constructor is called for class result\n";
        for (int i = 0; i < 5; i++)
        {
            total += m[i];
        }
        per = total / 5.0;
        int ch = per / 10;
        switch (ch)
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
        Test::display();
        cout << "Total marks: " << total << endl;
        cout << "Percentage %: " << per << endl;
        cout << "Grade: " << grade << endl;
    }
    ~result()
    {
        cout << "Destructor is called for class result\n";
    }
};

int main()
{
    char name_243[30];
    int roll_243, age_243, marks_243[5];

    cout << "Enter the details: " << endl;
    cout << "Name: ";
    gets(name_243);
    cout << "Roll no: ";
    cin >> roll_243;
    cout << "Age: ";
    cin >> age_243;
    cout << "Enter the marks: " << endl;
    for (int i_243 = 0; i_243 < 5; i_243++)
    {
        cout << "Marks " << i_243 + 1 << ":";
        cin >> marks_243[i_243];
    }
    result r1_243(name_243, roll_243, age_243, marks_243);
    r1_243.display();
    return 0;
}
