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
    Employee(char *n, int i)
    {
        cout << "\nConstructor is called for class Employee\n";
        strcpy(name, n);
        id = i;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
        cout << "Salary: " << salary << endl;
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
    Regular(char *n, int i, int bs) : Employee(n, i)
    {
        cout << "Constructor is called for class Regular\n";
        basic_salary = bs;
        DA = 0.8 * basic_salary;
        HRA = 0.5 * basic_salary;
        salary = DA + HRA + basic_salary;
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
PartTime(char *n, int i, int h, int p) : Employee(n, i)
    {
        cout << "Constructor is called for class PartTime\n";
        number_of_hours = h;
        pay_per_hour = p;
        salary = number_of_hours * pay_per_hour;
    }
    ~PartTime()
    {
        cout << "\nDestructor is called for class PartTime\n";
    }
};

int main()
{
    char name_243[20];
    int bs1_243, ba2_243, c_243, id_243;

    cout << "Enter the details of regular employee: " << endl;
    cout << "Name: ";
    gets(name_243);
    cout << "Id: ";
    cin >> id_243;
    cout << "Basic salary: ";
    cin >> bs1_243;
    Regular re_243(name_243, id_243, bs1_243);

    cout << "\nEnter the details of part-time employee: " << endl;
    cout << "Name: ";
    getchar();
    gets(name_243);
    cout << "Id: ";
    cin >> id_243;
    cout << "Hours: ";
    cin >> ba2_243;
    cout << "Pay-per-hour: ";
    cin >> c_243;
    PartTime pa_243(name_243, id_243, ba2_243, c_243);

    cout << "\nRegular employee: " << endl;
    re_243.display();
    cout << "\nRegular employee: " << endl;
    pa_243.display();
    return 0;
}