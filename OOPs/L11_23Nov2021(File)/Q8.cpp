#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class file
{
    char name[10];
    int roll;
public:
    void readdata()
    {
        cout << "\nEnter name: ";
        cin >> name;
        cout << "Enter roll: ";
        cin >> roll;
    }
    void writedata()
    {
        cout << "\nName: " << name; 
        cout << "\nRoll: " << roll; 
    }
};
int main()
{
    file item[2];
    fstream f1;
    f1.open("LAST.txt", ios::in | ios::out);

    if(!f1)
    {
        cout << "File not available\n";
        exit(1);
    }

    cout << "Enter Details:";
    for (int i = 0; i < 2; i++)
    {
        item[i].readdata();
        f1.write((char *)&item[i], sizeof((item[i])));
    }
    f1.seekg(0);
    cout << "\nDetail";
    for (int i = 0; i < 2; i++)
    {
        f1.read((char *)&item[i], sizeof(item[i]));
        item[i].writedata();
    }
    f1.close();
    return 0;
}
