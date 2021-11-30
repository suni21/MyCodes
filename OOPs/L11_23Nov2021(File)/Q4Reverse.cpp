#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char ch;
    int n;
    ifstream fin;
    fin.open("Reverse&Count.txt");

    if(!fin)
    {
        cout << "File not available\n";
        exit(1);
    }
    fin.seekg(0, ios :: end);

    n = fin.tellg();
    cout << "Size:"<< n << endl;
    for(int i = 1; i <= n; i++)
    {
        fin.seekg(-i, ios :: end);
        fin.get(ch);
        cout << ch;
    }
    fin.close();
    return 0;
}