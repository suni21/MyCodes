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
    friend Distance operator +(int num,Distance d2); //integer addition
    
};
Distance operator +(int num,Distance d2)
{
    Distance d;
    d.feet=num+d2.feet;
    d.inch=num+d2.inch;
    return d;
}

int main()
{
    Distance d2(2,5),d3;
    d3=10+d2;
    d2.display();
    d3.display();
    return 0;
}

