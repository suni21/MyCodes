#include <iostream>
using namespace std;

class dist
{
private:
    float feet_243, inch_243;

public:
    dist()
    {
        feet_243 = 0;
        inch_243 = 0;
    }
    dist(int a_243, int b_243)
    {
        feet_243 = a_243;
        inch_243 = b_243;
    }
    void display()
    {
        cout << feet_243 << " feet " << inch_243 << " inch ";
    }
    dist operator=(dist d2_243)
    {
        feet_243 = d2_243.feet_243;
        inch_243 = d2_243.inch_243;
        return *this;
    }
    bool operator==(dist d2_243)
    {
        float d1, d2;
        d1 = feet_243 + inch_243 / 12.0;
        d2 = d2_243.feet_243 + d2_243.inch_243 / 12.0;
        return (d1 == d2) ? true : false;
    }
};
int main()
{
    dist d1_243(6, 12), d2_243(6, 2), d3_243;
    d3_243 = d2_243;
    d3_243.display();
    if (d1_243 == d2_243)
        cout << "\nDistance are equal.";
    else
        cout << "\nDistance are unequal.";
    return 0;
}