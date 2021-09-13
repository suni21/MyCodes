#include <iostream>
#include <math.h>
using namespace std;

float area(int r)
{
    float ar = 2 * 3.14 * r;
    return ar;
}
float area(int l, int b)
{
    float ar = l * b;
    return ar;
}
double area(int a, int b, int c)
{
    double s = (a + b + c) / 2.0;
    double ar = sqrt(s * (s - a) * (s - b) * (s - c));
    return ar;
}
int main()
{
    cout << "Area of triangle :" << area(12, 10, 20) << endl;
    cout << "Area of circle :" << area(12) << endl;
    cout << "Area of rectangle :" << area(10, 20) << endl;
    return 0;
}
