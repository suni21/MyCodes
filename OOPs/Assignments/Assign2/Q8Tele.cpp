#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class Directory
{
    char name[20];
    char address[30];
    char area_Code[5];
    char phno[15];

public:
    void Registr()
    {
        cout << "\nEnter name: ";
        getchar();
        gets(name);
        cout << "Enter address: ";
        getchar();
        gets(address);
        cout << "Enter the area code: ";
        getchar();
        gets(area_Code);
        cout << "Enter the phone number: ";
        getchar();
        gets(phno);
    }
    int checkcode(char AC[])
    {
        return strcmp(area_Code, AC);
    }
    void show()
    {
        cout << "\nName= " << name << endl;
        cout << "Address= " << address << endl;
        cout << "Area Code= " << area_Code << endl;
        cout << "Phone no.= " << phno << endl;
    }
};

void Copyabc()
{
    fstream f1, f2;

    f1.open("TELE.dat", ios ::in);
    f2.open("TELEBACK.dat", ios ::out);

    Directory d1;
    char ch[] = {"123"};

    while (f1.read((char *)&d1, sizeof(d1)))
    {
        if (d1.checkcode(ch) == 0)
            f2.write((char *)&d1, sizeof(d1));
    }

    f1.close();
    f2.close();
}

int main()
{
    fstream f;
    Directory d;
    int n;
    f.open("TELE.dat", ios ::out);

    if (!f)
    {
        cout << "File not available\n";
        exit(1);
    }

    cout << "\nEnter data: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        d.Registr();
        f.write((char *)&d, sizeof(d));
    }
    f.close();
    Copyabc();

    f.open("TELEBACK.dat", ios ::out);
    if (!f)
    {
        cout << "File not available\n";
        exit(1);
    }

    cout << "\nDETAILS: ";
    while (f)
    {
        f.read((char *)&d, sizeof(d));
        d.show();
    }
    f.close();
    return 0;
}