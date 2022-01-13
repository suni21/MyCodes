#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class Stud
{
    int rNo;
    char name[20];

public:
    void Enter()
    {
        cout << "\nEnter roll: ";
        cin >> rNo;
        cout << "Enter name: ";
        getchar();
        gets(name);
    }
    void Display()
    {
        cout << "\nRoll: " << rNo<<endl; 
        cout << "Name: " << name<<endl; 
    }
};

void addNew()
{
    fstream f("Stud.dat", ios::binary | ios :: app);

    Stud s;
    int n;

    cout<<"How many objects do you wany to add?? ";
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        s.Enter();
        f.read((char*)&s,sizeof(s));
    }
    f.close();
}

int main()
{
    fstream f1;
    f1.open("Stud.dat", ios :: out | ios::binary);
    if (!f1)
    {
        cout << "File not available\n";
        exit(1);
    }

    int n;
    Stud s[n];
    cout<<"Enter in n:";
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        s[i].Enter();
        f1.write((char*)&s[i], sizeof(s[i]));
    }
    f1.close();

    addNew();


    f1.open("Stud.dat", ios :: in);
    cout<<"\nDETAILS: ";
    for(int i = 0; i < n; i++)
    {
        f1.read((char*)&s[i], sizeof(s[i]));
        s[i].Display();
    }
    f1.close();

    return 0;
}
