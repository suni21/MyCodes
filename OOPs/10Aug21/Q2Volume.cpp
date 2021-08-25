#include <iostream>
using namespace std;

double volume(float r_243)
{
    double vol_243 = 4 / 3.0 * 3.14 * r_243 * r_243 * r_243;
    return vol_243;
}

double volume(float r_243, float h_243)
{
    double vol_243 = 3.14 * r_243 * r_243 * h_243;
    return vol_243;
}

double volume(float l_243, float b_243, float h_243)
{
    double vol_243 = l_243 * b_243 * h_243;
    return vol_243;
}
int main()
{
    cout << "Volume of a cylinder : " << volume(4.6f, 3.8f) << endl;
    cout << "Volume of a sphere : " << volume(4.0f) << endl;
    cout << "Volume of a cuboid : " << volume(6.8f, 2.6f, 1.5f) << endl;
    return 0;
}