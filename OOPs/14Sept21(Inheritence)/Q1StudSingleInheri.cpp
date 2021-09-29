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
        cout << "\nName: " << name<<endl;
        cout << "Roll: " << roll<<endl;
        cout << "Age: " << age<<endl;
        cout << "Course: " << cou<<endl;
    }
};

class Test : public Students
{
    int marks[5];

public:
    
    void getdata(char *n, int r, int a, char *co,int m[])
    {
        Students::getdata(n,r,a,co);
        for (int i = 0; i < 5; i++)
        {
            marks[i] = m[i];
        }
    }
    void display()
    {
        Students::display();
        for (int i = 0; i < 5; i++)
        {
        cout << "Marks "<<i+1<<":"<<marks[i]<<endl;
        
        }
    }
};

int main()
{
    Test t_243;
    char name_243[20];
    int roll_243, age_243;
    char cou_243[10];
    int marks_243[5];

    cout << "Enter Name: ";
    gets(name_243);
    cout << "Enter Roll: ";
    cin >> roll_243;
    cout << "Enter Age: ";
    cin >> age_243;
    cout << "Enter Course: ";
    getchar();
    gets(cou_243);
    cout<<"Enter marks in 5 subjects: "<<endl;
    for(int i_243=0;i_243<5;i_243++)
    {
    cout<<"Subject "<<i_243+1<<":";
    cin>>marks_243[i_243];
    }

    t_243.getdata(name_243, roll_243, age_243, cou_243,marks_243);
    t_243.display();
    return 0;
}
