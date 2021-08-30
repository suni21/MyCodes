#include <iostream>
using namespace std;

class time
{
    int hr, min;

public:
    void display();

    time()  //default constructor
    {
        hr=4;
        min=30;
    }

    time(int h, int m = 0) //constructor by default
    {
        hr = h;
        min = m;
    }
    time(const time &hh, const time &mm) //parameterised constructor
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
    time t1;
    t1.display();
    time t2(5, 56);
    t2.display();
    time t3(t1);
	t3.display();
    time t4(t2);
    t4.display();
    return 0;
}
