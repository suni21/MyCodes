#include <iostream>
using namespace std;

class book
{
    char name_243[30];
    char author_243[30];
    int price_243;

public:
    friend void range(book *ob, int n, int lower, int higher);
    void getdata()
    {
        cout << "\nEnter Book Name : ";
        cin >> name_243;
        cout << "Enter Author's name : ";
        cin >> author_243;
        cout << "Enter Price : ";
        cin >> price_243;
    }
    void showdata()
    {
        cout << name_243 << "\t\t" << author_243 << "\t\t\t" << price_243 << endl;
    }
};
void range(book ob_243[], int n_243, int lower_243, int higher_243)
{
    for (int i_243 = 0; i_243 < n_243; i_243++)
    {
        if (ob_243[i_243].price_243 > lower_243 && ob_243[i_243].price_243 < higher_243)
        {
            ob_243[i_243].showdata();
        }
    }
}

int main()
{
    int n_243;
    cout << "Enter the number of books: " << endl;
    cin >> n_243;
    book b_243[n_243];
    for (int i_243 = 0; i_243 < n_243; i_243++)
    {
        b_243[i_243].getdata();
    }
    cout << "\nBook Name\t\t Author's name\t\t\tPrice" << endl;
    for (int i_243 = 0; i_243 < n_243; i_243++)
    {
        b_243[i_243].showdata();
    }

    cout << "\nDetails of the books in the range" << endl;
    range(b_243, n_243, 300, 500);

    return 0;
}
