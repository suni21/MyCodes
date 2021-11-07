#include <iostream>
#include <string.h>

using namespace std;

class book
{
private:
    char author_243[20], name_243[20];
    float price_243;
    int quantity_243;

public:
    void getdata(char *p_243, char *q_243, float pr_243, int qt_243)
    {
        strcpy(name_243, q_243);
        strcpy(author_243, p_243);
        price_243 = pr_243;
        quantity_243 = qt_243;
    }
    friend void search(book *, int, char *, char *);
};

void search(book *b_243, int n_243, char *nm_243, char *auth_243)
{
    int qty_243, i_243, flag_243 = 0;
    for (i_243 = 0; i_243 < n_243; i_243++)
    {
        if (strcmp(b_243[i_243].name_243, nm_243) == 0 && strcmp(b_243[i_243].author_243, auth_243) == 0)
        {
            flag_243 = 1;
            break;
        }
    }
    if (flag_243 == 0)
    {
        cout << "\nBook not available.";
        return;
    }
    cout << "\nEnter the quantity - ";
    cin >> qty_243;
    if (qty_243 <= b_243[i_243].quantity_243)
    {
        cout << "\nName\tAuthor\tPrice\tQuantity\tTotal\n";
        cout << b_243[i_243].name_243 << "\t" << b_243[i_243].author_243 << "\t" << b_243[i_243].price_243 << "\t" << qty_243 << "\t\t" << qty_243 * b_243[i_243].price_243;
    }
    else
    {
        cout << "\nRequired copies not in stock";
    }
}

int main()
{
    int n_243;
    cout << "\nEnter the number of books - ";
    cin >> n_243;
    book b1_243[n_243];
    int qt_243;
    float pr_243;
    char p_243[20], q_243[20], nm_243[20], auth_243[20];
    for (int i_243 = 0; i_243 < n_243; i_243++)
    {
        cout << "\nEnter Author - ";
        getchar();
        gets(p_243);
        cout << "\nEnter Name - ";
        gets(q_243);
        cout << "\nEnter Price - ";
        cin >> pr_243;
        cout << "\nEnter Quantity - ";
        cin >> qt_243;
        b1_243[i_243].getdata(p_243, q_243, pr_243, qt_243);
    }
    cout << "\nEnter the name of the author - ";
    getchar();
    gets(auth_243);
    cout << "\nEnter the name of the book - ";
    gets(nm_243);
    search(b1_243, n_243, nm_243, auth_243);
    return 0;
}