#include<iostream>
using namespace std;

class Point
{
    int i,j,k;
    public:
    Point()
    {
        i=0;
        j=0;
        k=0;
    }
    Point(int x,int y,int z)
    {
       i=x;
       j=y;
       k=z;
    }
    void display()
    {
        cout<<i<<"cm"<<j<<"cm"<<k<<"cm";
        cout<<"\n";
    }
    void operator-();  
};
void Point::operator-()
{
   *this->x=-x;
    y=-y;
    z=-z;
}

int main()
{
    Point d2(2,5,7);
    -d2;
    d2.display();
    return 0;
}

