#include <iostream>
using namespace std;

class time
{
    int hr, min, sec;

public:
    void display();

    time()  //default constructor
    {
        hr=4;
        min=30;
        sec=3000;
    }

    time(int h, int s, int m = 0) //constructor by default
    {
        hr = h;
        min = m;
        sec = s;
    }
    time(const time &hh, const time &mm, const time &ss) //parameterised constructor
    {
        hr = hh.hr;
        min = mm.min;
        sec = ss.sec;
    }
};

void time ::display()
{
    min = min + (sec / 60);
    sec = sec % 60;
    hr = hr + (min / 60);
    min = min % 60;
    cout << hr << ":" << min << ":" << sec << endl;
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
