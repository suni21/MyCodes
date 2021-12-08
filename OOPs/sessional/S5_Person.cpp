#include <iostream>
#include <string.h>
using namespace std;

class Person
{
    protected:
    char name[30];
    float sal;
    int phno;
    char addre[50];

    public:
    void getData(char *n, float s,int p, char *a)
    {
        strcpy(name, n);
        sal=s;
        phno=p;
        strcpy(addre, a);
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Salary: " << sal << endl;
        cout << "Phone no.: " << phno<< endl;
        cout << "Address: " << addre << endl;
    }
};

class Household_expens: public Person
{
    protected:
    float ele_bill;
    float bill_milk;
    float bill_helpers;

    public:
    void getData(float e, float m,float h)
    {
        ele_bill=e;
        bill_milk=m;
        bill_helpers=h;
        
    }

};

class Extra_expens: public Person
{

};
