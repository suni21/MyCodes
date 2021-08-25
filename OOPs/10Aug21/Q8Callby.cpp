#include <iostream>
using namespace std;

int swap(int a_243, int b_243)
{
    int temp_243;
    temp_243 = a_243;
    a_243 = b_243;
    b_243 = temp_243;
    return temp_243;
}
int swap(int *a_243, int *b_243)
{
    int temp_243;
    temp_243 = *a_243;
    *a_243 = *b_243;
    *b_243 = temp_243;
    return temp_243;
}
void swapp(int &a_243, int &b_243)
{
    int t_243 = a_243;
    a_243 = b_243;
    b_243 = t_243;
}
int main()
{
    int a_243 = 10, b_243 = 20;
    int &c_243 = a_243, &d_243 = b_243;
    swap(a_243, b_243);
    cout << "\nValue of a : " << a_243;
    cout << "\nValue of b : " << b_243;
    swap(&a_243, &b_243);
    cout << "\nValue of a : " << a_243;
    cout << "\nValue of b : " << b_243 << endl;
    swapp(c_243, d_243);
    cout << "\na : " << c_243;
    cout << " b : " << d_243;

    return 0;
}