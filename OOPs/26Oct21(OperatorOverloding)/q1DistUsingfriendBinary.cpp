#include<iostream>
using namespace std;

class Distance
{
    int inch,feet;
    public:
    Distance()
    {
        feet=0;
        inch=0;
    }
    Distance(int f,int i)
    {
        feet=f;
        inch=i;
    }
    void display()
    {
        cout<<feet<<"'"<<inch<<"''";
        cout<<"\n";
    }
    friend Distance operator +(Distance d1,Distance d2);
    
};
Distance operator +(Distance d1,Distance d2)
{
    Distance d;
    d.feet=d1.feet+d2.feet;
    d.inch=d1.inch+d2.inch;
    return d;
}

int main()
{
    Distance d1(2,5),d2(6,9),d3;
    d3=d1+d2;
    d1.display();
    d2.display();
    d3.display();
    return 0;
}

