#include <iostream>
using namespace std;

class test
{
    int i;
    static int count;

public:
    test()
    {
        count++;
    }
    test(int t)
    {
        i = t;
        count++;
    }
    test(const test &t1)
    {
        i = t1.i;
        count++;
    }
    ~test()
    {
        cout << "\nDstructor is called:" << count;
    }
    static void display()
    {
        cout << "\nTotal no of time objects are created:" << count;
    }
};
int test::count;
int main()
{
    test t1_243;
    test t2_243(4);
    test t3_243(t1_243);
    test t4_243(t2_243);
    test::display();

    return 0;
}