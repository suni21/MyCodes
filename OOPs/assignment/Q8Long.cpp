#include <iostream>
#include <math.h>
using namespace std;

double area(float a)
{
    float s=sqrt(3)/4.0 * pow(a, 2);
    return s;
}
double area(float a, float b)
{
    float s= 1/2.0 * (sqrt(((a * a) - ((b * b)/4)))*b);
    return s;
}
double area(float a, float b, float c)
{
    float s = (a + b + c) / 2.0;
    float ar = sqrt(s * (s - a) * (s - b) * (s - c));
    return ar;
}
int main()
{
    cout << "Area of scalene  triangle : " << area(4.6f,5.0f,3.4f) << endl;
    cout << "Area of equilateral triangle: " << area(1.2f) << endl;
    cout << "Area of isoscales triangle : " << area(12.5f, 20.4f);
    return 0;
}
