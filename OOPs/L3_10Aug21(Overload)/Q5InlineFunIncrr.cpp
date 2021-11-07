#include <iostream>
using namespace std;

inline int incre(int num)
{
    return ++num;
}
int main()
{
    cout << incre(4) << endl;
    return 0;
}