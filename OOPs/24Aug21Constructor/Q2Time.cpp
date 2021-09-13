#include <iostream>
using namespace std;

class time
{
    int hr, min;

public:
    void display();

    time() //default constructor
    {
        hr = 4;
        min = 30;
    }

    time(int h, int m = 0) //constructor by default argument
    {
        hr = h;
        min = m;
    }
    time(const time &hh, const time &mm)
    {
        hr = hh.hr;
        min = mm.min;
    }
};

void time ::display()
{
    cout << hr << ":" << min << endl;
}
int main()
{
    time t1_243;
    t1_243.display();
    time t2_243(5);
    t2_243.display();
    time t3_243(t1_243);
    t3_243.display();
    time t4_243(t2_243);
    t4_243.display();
    return 0;
}
