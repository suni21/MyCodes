#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    complex()
    {
        real = 10;
        img = 6;
    }
    complex(int a, int b)
    {
        real = a;
        img = b;
    }
    complex(const complex &c1, const complex &c2)
    {
        real = c1.real;
        img = c2.img;
    }
    void display()
    {
        cout << real << "+" << img << "i" << endl;
    }
    ~complex() //destructor
    {
        cout << "Destructor is called" << endl;
    }
};
int main()
{
    complex c1_243;
    complex c2_243(2, 6);
    complex c3_243(c1_243);
    complex c4_243(c2_243);
    cout << "The number is:\n";
    c1_243.display();
    c2_243.display();
    c3_243.display();
    c4_243.display();
    return 0;
}
