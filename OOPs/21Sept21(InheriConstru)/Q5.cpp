#include <iostream>
#include<string.h>
using namespace std;

class Employee
{
protected:
    char name[30];
    int id;
    double salary;
public:
    Employee()
    {
        cout << "Constructor is called for class Employee\n";
    }
    ~Employee()
    {
        cout << "Destructor is called for class Employee\n";
    }
};

class Regular : public Employee
{
private:
    int DA, HRA,basic_salary;
public:
    Regular()
    {
        cout << "Constructor is called for class Regular\n";
    }
    ~Regular()
    {
        cout << "Destructor is called for class Regular\n";
    }
};

class PartTime : public Employee
{
private:
    int number_of_hours;
    double pay_per_hour;

public:
PartTime()
    {
        cout << "Constructor is called for class PartTime\n";
    }
    ~PartTime()
    {
        cout << "\nDestructor is called for class PartTime\n";
    }
};

int main(){
    Regular ob1_243;
    PartTime ob2_243;
    return 0;
}