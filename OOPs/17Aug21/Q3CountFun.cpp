#include <iostream>
using namespace std;

class test
{
    int data_243;

public:
    static int in_243;
    static int out_243;
    void input(int num)
    {
        data_243 = num;
        in_243++;
    }
    void diplay()
    {
        cout << "value : " << data_243 << endl;
        out_243++;
    }
    static void showcount()
    {
        cout << "Input function is called this time:" << in_243;
        cout << "Output function is called this time:" << out_243;
    }
};
int test ::in_243;
int test ::out_243;

int main()
{
    test ob1_243, ob2_243, ob3_243;
    ob1_243.input(17);
    ob2_243.input(11);
    ob3_243.input(2);

    ob1_243.diplay();
    ob2_243.diplay();
    ob3_243.diplay();

    cout << "input func is called " << test::in_243 << " times" << endl;
    cout << "output func is called " << test::out_243 << " times" << endl;
    return 0;
}
