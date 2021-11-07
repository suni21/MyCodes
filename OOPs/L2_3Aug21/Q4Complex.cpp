#include <iostream>
using namespace std;

class complex
{
    int real, img;

public:
    void getdata()
    {
        cout << "Enter the Real part: ";
        cin >> real;
        cout << "Enter Imaginary Part: ";
        cin >> img;
    }
    void displaydata()
    {
        cout << "Complex Number: " << real << "+" << img << "i" << endl;
    }
};
int main()
{
    complex ob_243[10];

    for (int i_243 = 0; i_243 < 10; i_243++)
    {
        ob_243[i_243].getdata();
    }
    for (int i_243 = 0; i_243 < 10; i_243++)
    {
        ob_243[i_243].displaydata();
    }
    return 0;
}
