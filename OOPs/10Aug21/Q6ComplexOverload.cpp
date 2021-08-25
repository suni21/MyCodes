#include <iostream>
using namespace std;

class complex
{
    int real, img;

public:
    void readData();
    void displaydata();
    complex add(int a, complex c);
    complex add(complex c1, complex c2);
};
void complex ::readData()
{
    cout << "Enter real and imaginary values\n";
    cin >> real >> img;
}

complex complex ::add(int a, complex c)
{
    complex t;
    t.real = a + c.real;
    t.img = c.img;
    return t;
}
complex complex ::add(complex c1, complex c2)
{
    complex t;
    t.real = c1.real + c2.real;
    t.img = c1.img + c2.img;
    return t;
}
void complex ::displaydata()
{
    cout << real << "+i" << img << endl;
}
int main()
{
    complex c1_243, c2_243, c3_243, c4_243;
    c1_243.readData();
    c2_243.readData();
    c3_243 = c3_243.add(2, c2_243);
    c4_243 = c4_243.add(c1_243, c2_243);
    c1_243.displaydata();
    c2_243.displaydata();
    c3_243.displaydata();
    c4_243.displaydata();
    return 0;
}