#include <iostream>
#include <math.h>
using namespace std;

class fraction
{
    int numer, deno;

public:
    void data(int num1_243, int num2_243)
    {
        numer = num1_243;
        deno = num2_243;
    }

    void displayData()
    {
        
        cout << numer << "/" << deno << endl;
    }
    fraction add(fraction f1_243, fraction f2);
    fraction subtact(fraction &f1_243, fraction &f2_243);
    fraction multiply(fraction *f1_243, fraction *f2_243);
};

fraction fraction ::add(fraction f1_243, fraction f2_243)
{
    fraction t_243;
    t_243.numer = (f1_243.numer * f2_243.deno) + (f1_243.deno * f2_243.numer);
    t_243.deno = f1_243.deno * f2_243.deno;
    return t_243;
}
fraction fraction ::subtact(fraction &f1_243, fraction &f2_243)
{
    fraction t_243;
    t_243.numer = (f1_243.numer * f2_243.deno) - (f1_243.deno * f2_243.numer);
    t_243.deno = f1_243.deno * f2_243.deno;
    return t_243;
}
fraction fraction ::multiply(fraction *f1_243, fraction *f2_243)
{
    fraction t_243;
    t_243.numer = f1_243->numer * f2_243->numer;
    t_243.deno = f1_243->deno * f2_243->deno;
    return t_243;
}

int main()
{
    fraction f1_243, f2_243, f3_243, f4_243, f5_243;
    f1_243.data(3, 5);
    f2_243.data(4, 9);
    cout << "Fraction: ";
    cout<<endl;
    f1_243.displayData();
    f2_243.displayData();

    f3_243 = f3_243.add(f1_243, f2_243);
    f4_243 = f4_243.subtact(f1_243, f2_243);
    f5_243 = f5_243.multiply(&f1_243, &f2_243);

    cout << "\nSolution:" << endl;

    cout << "Addition of the fraction : ";
    f3_243.displayData();

    cout << "Subtraction of the fraction : ";
    f4_243.displayData();

    cout << "Multiplicatiopn of the fraction : ";
    f5_243.displayData();
    return 0;
}
