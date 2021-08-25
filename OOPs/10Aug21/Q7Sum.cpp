#include <iostream>
using namespace std;

int sum(int a_243, int b_243 = 10, int c_243 = 20)
{
    int add = a_243 + b_243 + c_243;
    return add;
}

int main()
{
    int num1_243, num2_243, num3_243;
    cout << "Enter num : ";
    cin >> num1_243;
    cout << "\nEnter num : ";
    cin >> num2_243;
    cout << "\nEnter num : ";
    cin >> num3_243;
    cout << sum(num1_243, num2_243, num3_243) << endl;
    cout << sum(num1_243) << endl;
    cout << sum(num1_243, num2_243) << endl;
    return 0;
}