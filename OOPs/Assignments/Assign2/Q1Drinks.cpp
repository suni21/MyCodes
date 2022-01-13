#include<iostream>
#include <fstream>
#include<string.h>
using namespace std;

class Drinks
{
    int D_code;
    char D_name[13];
    int D_size;
    float D_price;

    public:
    void getDrink()
    {
        cout << "\nEnter code: ";
        cin >> D_code;
        cout << "Enter name: ";
        getchar();
        gets(D_name);
        cout << "Enter size: ";
        cin >> D_size;
        cout << "Enter price: ";
        cin >> D_price;
    }
    void showDirnk()
    {
        cout << "\nCode: "<<D_code<<endl;
        cout << "Name: "<<D_name<<endl;
        cout << "Size: "<<D_size<<endl;
        cout << "Price: "<<D_price<<endl;
    }
    char *getname()
    {
        return D_name;
    }
};

int main()
{
    fstream f1;
    f1.open("Drinks.txt", ios::in | ios::out | ios::trunc);
    Drinks d1[3];

    if(!f1)
    {
        cout << "File not available\n";
        exit(1);
    }

    cout << "Enter Details:";
    for (int i = 0; i < 3; i++)
    {
        d1[i].getDrink();
        f1.write((char *)&d1[i], sizeof((d1[i])));
    }

    f1.seekg(0);
    for (int i = 0; i < 3; i++)
    {
        f1.read((char *)&d1[i], sizeof(d1[i]));

        if(!strcmp(d1[i].getname(),"indy cola"))
        {
            d1[i].showDirnk();
        }
        else if(!strcmp(d1[i].getname(),"INDY COLA"))
        {
            d1[i].showDirnk();
        }
        cout<<"\nNo details will be displayed since indy cola is not there";
    }

    f1.close();
    return 0;
}