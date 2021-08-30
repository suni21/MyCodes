#include <iostream>
#include <math.h>
using namespace std;

class fraction
{
    int numer, deno;

public:
    void data(int num1, int num2)
    {
        numer = num1;
        deno = num2;
    }

    void displayData()
    {
        
        cout << numer << "/" << deno << endl;
    }
    fraction add(fraction f1, fraction f2);
    fraction subtact(fraction &f1, fraction &f2);
    fraction multiply(fraction *f1, fraction *f2);
};

fraction fraction ::add(fraction f1, fraction f2)
{
    fraction t;
    t.numer = (f1.numer * f2.deno) + (f1.deno * f2.numer);
    t.deno = f1.deno * f2.deno;
    return t;
}
fraction fraction ::subtact(fraction &f1, fraction &f2)
{
    fraction t;
    t.numer = (f1.numer * f2.deno) - (f1.deno * f2.numer);
    t.deno = f1.deno * f2.deno;
    return t;
}
fraction fraction ::multiply(fraction *f1, fraction *f2)
{
    fraction t;
    t.numer = f1->numer * f2->numer;
    t.deno = f1->deno * f2->deno;
    return t;
}

int main()
{
    fraction f1, f2, f3, f4, f5;
    f1.data(3, 5);
    f2.data(4, 9);
    cout << "Fraction: ";
    cout<<endl;
    f1.displayData();
    f2.displayData();

    f3 = f3.add(f1, f2);
    f4 = f4.subtact(f1, f2);
    f5 = f5.multiply(&f1, &f2);

    cout << "\nSolution:" << endl;

    cout << "Addition of the fraction : ";
    f3.displayData();

    cout << "Subtraction of the fraction : ";
    f4.displayData();

    cout << "Multiplicatiopn of the fraction : ";
    f5.displayData();
    return 0;
}
