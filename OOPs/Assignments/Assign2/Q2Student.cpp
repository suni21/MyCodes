#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class Student
{
    int addno;
    char name[40];
    float total_marks;

public:
    void getinfo()
    {
        cout << "\nEnter admission no.: ";
        cin >> addno;
        cout << "Enter name: ";
        getchar();
        gets(name);
        cout << "Enter total marks: ";
        cin >> total_marks;
    }
    void showinfo()
    {
        cout << "Admission no: " << addno << endl;
        cout << "Name: " << name << endl;
        cout << "Total marks: " << total_marks << endl;
    }
    float rettotmarks()
    {
        return total_marks;
    }
};

void insertRecord()
{
    fstream f1;
    Student s1;
    s1.getinfo();
   f1.write((char*)&s1,sizeof(s1));
}

void displayRecord()
{
    fstream f1;
    Student s2;
    while(f1)
    {
        f1.read((char*)&s2,sizeof(s2));
        if(s2.rettotmarks() >= 456 && s2.rettotmarks() <= 498)
            {
                s2.showinfo();
            }
    }
}

int main()
{
    fstream f1;
    int n;
    cout<<"Enter no of data= ";
    cin>>n;

    f1.open("StudentPer.dat", ios :: in | ios :: out | ios :: trunc | ios::binary);
    for(int i = 0; i < n; i++)
    {
        insertRecord();
    }

    displayRecord();
    f1.close();

    return 0;
}