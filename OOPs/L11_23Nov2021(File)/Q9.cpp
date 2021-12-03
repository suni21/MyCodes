#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream f1;
    f1.open("Wrte&Print.txt", ios ::in | ios ::out | ios ::trunc);
    if (!f1)
    {
        cout << "File doesnot exist!\n";
        exit(1);
    }
    string ch;
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter(to write in file): ";
        cin >> ch;
        f1 << ch;
    }
    cout << "\nData from file: \n";
    f1.seekg(0);
    f1 >> ch;
    cout << ch << endl;
    return 0;
}
