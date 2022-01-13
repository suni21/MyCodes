#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

struct PROD
{
    char PrCode[10];
    char PrDesc[10];
    int stock;
};

int main()
{
    fstream f("PRODUCT.DAT", ios::in | ios::out | ios::binary);
    PROD P;
    int flag = 0;
    char PrCode[10];
    char PrDesc[10];
    int stock;

    while (f)
    {
        f.read((char *)&P, sizeof(P));
        if (strcmp(P.PrCode, PrCode) == 0)
        {
            flag = 1;
            P.stock = stock;
            f.seekp(-sizeof(P), ios::cur);
            f.write((char *)&P, sizeof(P));
        }
        else if (flag == 0)
        {
            cout << "\nCode not found.";
            f.close();
        }
    }
    return 0;
}