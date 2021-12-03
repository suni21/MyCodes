#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream f1;
    f1.open("Count.txt", ios::in);
    char ch, u;
    int no_ch = 0, no_wo = 0, no_l = 1;
    int upp = 0, low = 0, sp_no = 0, dig = 0;

    if (!f1)
    {
        cout << "File not available\n";
        exit(1);
    }

    while (f1.eof() == 0)
    {
        f1.get(ch);
        if (ch == '\n')
        {
            no_l++;
        }
        if (ch >= 'A' && ch <= 'Z')
        {
            upp++;
        }
        if (ch >= 'a' && ch <= 'z')
        {
            low++;
        }
        if (ch == '(' || ch == ')' || ch == '*' || ch == '&')
        {
            sp_no++;
        }
    }
    cout << "\nNo of lines= " << no_l;
    cout << "\nNo of upper case letters= " << upp;
    cout << "\nNo of lower case letters= " << low;
    cout << "\nNo of special symbols= " << sp_no;
    f1.close();

    return 0;
}