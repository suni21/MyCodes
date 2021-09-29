#include <iostream>
#include <string.h>
using namespace std;

class Students
{
    char name[20];
    int roll, age;
    char cou[10];

public:
    Students(char *n,int r,int a,char *co)
    {
        cout << "\nConstructor is called for class Students\n";
        strcpy(name,n);
        roll=r;
        age=a;
        strcpy(cou,co);
    }
    void display()
    {
        cout << "\nName: " << name<<endl;
        cout << "Roll: " << roll<<endl;
        cout << "Age: " << age<<endl;
        cout << "Course: " << cou<<endl;
    }
    ~Students()
    {
        cout << "Destructor is called for class Students\n";
    }
};

class Test : public Students
{
    int marks[5];

public:
Test(char *n, int r, int a, char *co,int m1,int m2, int m3,int m4,int m5) : Students(n,r,a,co)
    {
        cout << "Constructor is called for class Test\n";
        
        marks[1]=m1;
        marks[2]=m2;
        marks[3]=m3;
        marks[4]=m4;
        marks[5]=m5;
    }
    ~Test()
    {
        cout << "\nDestructor is called for class test\n";
    }
};

int main()
{
    Test t("Suniti",243,19,"Btech",56,76,58,69,98);
    t.display();
    return 0;

}
