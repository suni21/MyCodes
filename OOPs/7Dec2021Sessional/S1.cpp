#include <iostream>
#include <string.h>
using namespace std;

class Person
{
protected:
    string name;
    int age;
    int phno;

public:
    Person(string n, int a, int p)
    {
        name = n;
        age = a;
        phno = p;
    }
    string retName()
    {
        return name;
    }
    void display()
    {
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Phone no.: " << phno << endl;
    }
};

int main()
{
    string name;
    int age;
    int phno;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter Phone no.: ";
    cin >> phno;

    Person p_243(name, age, phno);
    p_243.display();
    try
    {
        string str = p_243.retName();
        int l;
        l = str.length();
        for (int i = 0; i < l; i++)
        {
            char ch = str[i];
            if ((ch < 'A' && ch > 'Z') || (ch < 'a' && ch > 'z') || ch != ' ')
                throw 1;
        }
    }
    catch (int a)
    {
        cout << "\nError found\n";
        cout << "Special charachter present\n";

    }
    
    return 0;
}

