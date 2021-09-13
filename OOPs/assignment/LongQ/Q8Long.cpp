#include <iostream>
#include<iomanip>
#include <math.h>
using namespace std;

double area(float a_243)
{
    float s_243=sqrt(3)/4.0 * pow(a_243, 2);
    return s_243;
}
double area(float a_243, float b_243)
{
    float s_243= 1/2.0 * (sqrt(((a_243 * a_243) - ((b_243 * b_243)/4)))*b_243);
    return s_243;
}
double area(float a_243, float b_243, float c_243)
{
    float s_243 = (a_243 + b_243+ c_243) / 2.0;
    float ar_243 = sqrt(s_243 * (s_243 - a_243) * (s_243 - b_243) * (s_243 - c_243));
    return ar_243;
}
int main()
{
    cout << "Area of scalene  triangle : " <<fixed<<setprecision(2)<< area(4.6f,5.0f,3.4f) << endl;
    cout << "Area of equilateral triangle: " <<fixed<<setprecision(2)<< area(1.2f) << endl;
    cout << "Area of isoscales triangle : " <<fixed <<setprecision(2)<< area(12.5f, 20.4f);
    return 0;
}
