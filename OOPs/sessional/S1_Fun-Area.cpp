#include <iostream>
#include <math.h>

using namespace std;

float FUN_area(int r)
{
    float ar = 2 * 3.14 * r;
    return ar;
}
float FUN_area(int l, int b)
{
    float ar = l * b;
    return ar;
}
double FUN_area(int a, int b, int c)
{
    float ar = a*b*c;
    return ar;
}
int main()
{
    cout << "Volume of box= " << FUN_area(12, 10, 20) << endl;
    cout << "Area of circle= " <<FUN_area(12) << endl;
    cout << "Area of rectangle= " << FUN_area(10, 20) << endl;
    return 0;
}
