#include <iostream>
#include <fstream>
using namespace std;

class BOOKS
{
    int Bno;
    char title[30];

public:
    void Enter()
    {
        cout << "\nEnter book no.= ";
        cin >> Bno;
        cout << "Enter book title= ";
        getchar();
        gets(title);
    }
    int RBno()
    {
        return Bno;
    }
    void display()
    {
        cout << "Book number= " << Bno << endl;
        cout << "Book title= " << title << endl;
    }
};

void searchBook(fstream &f1, int bookno)
{
    if (!f1)
    {
        cout << "File not available\n";
        exit(1);
    }
    else
    {
        BOOKS b;
        int found = 0;
        while (f1)
        {
            f1.read((char *)&b, sizeof(b));
            if (b.RBno() == bookno)
            {
                b.display();
                found = 1;
                break;
            }
        }
        if (!found)
            cout << "record is not found ";
    }
}

int main()
{
    fstream f1;
    f1.open("BOOKs.DAT", ios ::in | ios ::out | ios ::trunc);
    BOOKS b;

    if (!f1)
    {
        cout << "File not available\n";
        exit(1);
    }

    int bNo, n;

    cout << "\nEnter data: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        b.Enter();
        f1.write((char *)&b, sizeof(b));
    }

    cout << "Enter book no. to search: ";
    cin >> bNo;

    searchBook(f1, bNo);
    f1.close();
    return 0;
}
