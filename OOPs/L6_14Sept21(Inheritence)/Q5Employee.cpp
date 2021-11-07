#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
protected:
    char name[30];
    int id;
    double salary;

public:
    void getData(char *n, int i)
    {
        strcpy(name, n);
        id = i;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Regular : public Employee
{
private:
    int DA, HRA, basic_salary;

public:
    void getData(char *n, int i, int bs)
    {
        Employee ::getData(n, i);
        basic_salary = bs;
        DA = 0.8 * basic_salary;
        HRA = 0.5 * basic_salary;
        salary = DA + HRA + basic_salary;
    }
};

class PartTime : public Employee
{
private:
    int number_of_hours;
    double pay_per_hour;

public:
    void getData(char *n, int i, int h, int p)
    {
        Employee ::getData(n, i);
        number_of_hours = h;
        pay_per_hour = p;
        salary = number_of_hours * pay_per_hour;
    }
};

int main()
{
    Regular ob1_243;
    PartTime ob2_243;
    char name_243[20];
    int bs1_243, ba2_243, c_243, id_243;

    cout << "Enter the details of regular employee: " << endl;
    cout << "Name: ";
    gets(name_243);
    cout << "Id: ";
    cin >> id_243;
    cout << "Basic salary: ";
    cin >> bs1_243;
    ob1_243.getData(name_243, id_243, bs1_243);

    cout << "Enter the details of part-time employee: " << endl;
    cout << "Name: ";
    getchar();
    gets(name_243);
    cout << "Id: ";
    cin >> id_243;
    cout << "Hours: ";
    cin >> ba2_243;
    cout << "Pay-per-hour: ";
    cin >> c_243;
    ob2_243.getData(name_243, id_243, ba2_243, c_243);
    cout << "\nRegular employee: " << endl;
    ob1_243.display();
    cout << "\nRegular employee: " << endl;
    ob2_243.display();
    return 0;
}