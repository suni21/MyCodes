#include <iostream>
using namespace std;

class Order
{
    int a;
    static int count;

public:
    Order()
    {
        a = 0;
        cout << "\nThe object number created is " << ++count;
    }

    Order(int i)
    {
        a = i;
        cout << "\nThe object number created is " << ++count;
    }

    Order(const Order &o)
    {
        a = o.a;
        cout << "\nThe object number created: " << ++count;
    }

    ~Order()
    {
        cout << "\nThe objest number destroyed: " << count--;
    }
};

int Order ::count;

int main()
{
    Order t1_243;
    Order t2_243(9);
    Order t3_243(t2_243);
    int i_243 = 10, j_243 = 11;

    if (i_243 < j_243)
    {
        Order t4_243(t3_243);
        Order t5_243;
        t5_243 = t4_243;
    }
    return 0;
}
