#include <iostream>
using namespace std;

class point
{
private:
    int x_243, y_243, z_243;

public:
    point()
    {
        x_243 = 0;
        y_243 = 0;
        z_243 = 0;
    }
    point(int a_243, int b_243, int c_243)
    {
        x_243 = a_243;
        y_243 = b_243;
        z_243 = c_243;
    }
    void display()
    {
        cout << x_243 << "x " << y_243 << "y " << z_243 << "z ";
    }
    void operator-()
    {
        x_243 = -x_243;
        y_243 = -y_243;
        z_243 = -z_243;
    }
};
int main()
{
    point p1_243(5, 5, 5);
    -p1_243;
    p1_243.display();
    return 0;
}