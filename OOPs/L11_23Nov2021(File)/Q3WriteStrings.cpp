#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream fin;
    fin.open("WriteString.txt", ios ::out);
    if (!fin)
    {
        cout << "File not available\n";
        exit(1);
    }
    string str;
    cout << "Enter strings(10)\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "\nEnter:";
        cin >> str;
        fin << str << endl;
    }
    fin.close();

    fin.open("WriteString.txt", ios ::in);
    for (int i = 0; i < 10; i++)
    {
        fin >> str;
        cout << str << endl;
    }
    fin.close();
    return 0;
}