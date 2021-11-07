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
    Distance operator +(Distance d1);
    void display()
    {
        cout<<feet<<"'"<<inch<<"''";
        cout<<"\n";
    }
};
Distance Distance::operator +(Distance d1)
{
    Distance d;
    d.feet=feet+d1.feet;
    d.inch=inch+d1.inch;
    if(d.inch>=12)
    {
        d.feet++;
        d.inch-=12;
    }
    return d;
}

int main()
{
    Distance d1(2,8),d2(6,11),d3;
    d3=d1+d2;
    d1.display();
    d2.display();
    d3.display();
    return 0;
}

