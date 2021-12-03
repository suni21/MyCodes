#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("Student.txt");
    char ch;
    if (!fin)
    {
        cout << "File not available\n";
        exit(1);
    }

    while (fin)
    {
        fin >> ch;
        cout << ch;
    }
    fin.close();
    return 0;
}