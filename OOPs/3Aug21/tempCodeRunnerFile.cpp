#include <iostream>
using namespace std;

class employee
{
    int id;
    char name[20];
    int age;
    float salary, gross;

public:
    void getdata()
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        getchar();
        gets(name);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Basic salary: ";
        cin >> salary;
        int DA = 0.8 * salary;
        int HRA = 0.1 * salary;
        gross = salary + DA + HRA;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Basic salary: " << salary << endl;
        cout << "Gross salary: " << gross << endl;
    }
};

int main()
{
    int n_243 = 0;
    cout << "Enter number of employee: ";
    cin >> n_243;
    employee ob[n_243];
    for (int i_243 = 0; i_243 < n_243; i_243++)
    {
        cout << "Enter Employee " << i_243 + 1 << " details" << endl;
        ob[i_243].getdata();
    }

    for (int i_243 = 0; i_243 < n_243; i_243++)
    {
        cout << "Employee " << i_243 + 1 << endl;
        ob[i_243].display();
    }
    return 0;
}
