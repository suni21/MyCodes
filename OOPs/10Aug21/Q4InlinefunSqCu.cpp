#include <iostream>
using namespace std;

inline int sqr(int num)
{
    return num * num;
}
inline int cube(int num)
{
    return num * num * num;
}
int main()
{
    cout << sqr(2) << endl;
    cout << cube(4) << endl;
    return 0;
}