#include<iostream>
using namespace std;

int x_243 = 6; // Global x

int main()
{
  int x_243 = 10; // Local x
  cout << "Value of global x is " << ::x_243;
  cout << "\nValue of local x is " << x_243;
  return 0;
}