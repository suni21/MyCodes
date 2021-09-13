#include <iostream>
using namespace std;

class test
{
    int a;

public:
    test() { a = 0; }
    test(int x) { a = x; }
    test(const test &T)
    {
        a = T.a;
    }
    ~test() 
    {}
    test add(test X)
    {
        test T;
        T.a = a + X.a;
        return T;
    }
};
int main()
{
    test t1(5), t2(10), t3;
    t3 = t1.add(t2);
    return 0;
}