#include <iostream>
#include <string.h>
using namespace std;

class Students
{
    char name[20];
    int roll, age;
    char cou[10];

public:
    void getdata(char *n, int r, int a, char *co)
    {
        strcpy(name, n);
        roll = r;
        age = a;
        strcpy(cou, co);
    }
    void display()
    {
        cout << "Enter Name: " << name;
        cout << "Enter Roll: " << roll;
        cout << "Enter Age: " << age;
        cout << "Enter Course: " << cou;
    }
};

class Test : public Students
{
    int marks[5];

public:
    void getdata_Test(int m[])
    {
        for (int i = 0; i < 5; i++)
        {
            marks[5] = m[i];
        }
    }
    void display()
    {
        for (int i = 0; i < 5; i++)
        {
        cout << "Enter marks"<<[i]<<":"<< marks;
        }
    }
};

int main()
{
    Test t;
    char name[20];
    int roll, age;
    char cou[10];
    int marks[5];

    cout << "Enter Name: ";
    gets(name);
    cout << "Enter Roll: ";
    cin >> roll;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Course: ";
    getchar();
    gets(cou);
    
    for(int i=0;i<5;i++)
    {
    cin>>marks[i];
    }
    t.getdata(name, roll, age, cou);
    t.display();
    return 0;
}
