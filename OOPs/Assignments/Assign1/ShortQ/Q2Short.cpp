#include<iostream>
using namespace std;
int fun(int x, int y)
{
return x + y ;
}
double fun(float x, float y)
{
return x * y ;
}
int main()
{
cout<<fun(5 , 10);
return 0;
}