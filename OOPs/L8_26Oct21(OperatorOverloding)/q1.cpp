#include <iostream>
using namespace std;
class binary
{
private:
    int feet_243, inch_243;

public:
    binary()
    {
        feet_243 = 0;
        inch_243 = 0;
    }
    binary(int a_243, int b_243)
    {
        feet_243 = a_243;
        inch_243 = b_243;
    }
    void display()
    {
        cout << feet_243 << " feet " << inch_243 << " inch ";
    }
    friend binary operator+(int, binary);
};
binary operator+(int x_243, binary b_243)
{
    b_243.inch_243 = x_243 + b_243.inch_243;
    if (b_243.inch_243 > 12)
    {
        int temp_243 = b_243.inch_243 / 12;
        b_243.feet_243 += temp_243;
        b_243.inch_243 = b_243.inch_243 % 12;
    }
    return b_243;
}
int main()
{
    binary b1_243(5, 5), b2_243;
    int x_243 = 5;
    b2_243 = x_243 + b1_243;
    b2_243.display();
    return 0;
}
