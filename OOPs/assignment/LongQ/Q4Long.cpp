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
        
        cout << name << "\t\t" << age << "\t\t" << salary << "\t\t" << gross << endl;
    }
};
class EmplInfo
{
   class employee e_243;
   int exp;
   int join_year;
   public:
   void getdata()
   {
       e_243.getdata();
   cout<<"Enter years of experience:";
   cin>>exp;
   cout<<"Enter year:";
   cin>>join_year;
   }
   void display()
   {
       e_243.display();
     cout<<"Experience: "<<exp<<endl;
     cout<<"Joining Year: "<<join_year;
   }

};

int main()
{

    class EmplInfo emp_243;
    emp_243.getdata();
    emp_243.display();
    return 0;
}
