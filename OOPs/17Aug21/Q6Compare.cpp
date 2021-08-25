#include <iostream>
using namespace std;

class second;
class first
{
    int x_243;

public:
    void getnum1()
    {
        cout << "\nEnter the value for 1st number:";
        cin >> x_243;
    }
    friend void largest(first, second);
};
class second
{
    int y_243;

public:
    void getnum2()
    {
        cout << "\nEnter the value for 2nd number:";
        cin >> y_243;
    }
    friend void largest(first, second);
};
void largest(first a_243, second b_243)
{
    if (a_243.x_243 > b_243.y_243)
    {
        cout << "\nGreater value is:" << a_243.x_243;
    }
    else
    {
        cout << "\nGreater value is:" << b_243.y_243;
    }
}
int main()
{
    first a_243;
    second b_243;
    a_243.getnum1();
    b_243.getnum2();
    largest(a_243, b_243);
    return 0;
}