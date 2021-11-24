#include <iostream>
#include <math.h>
using namespace std;

class Shape
{
protected:
    float ar;

public:
    Shape()
    {
        ar = 0;
    }
    virtual void calArea() {}
    virtual void displayArea() {}
};

class Circle : public Shape
{
    float rad;

public:
    Circle(float r)
    {
        rad = r;
    }
    void calArea()
    {
        ar = 3.14 *(pow(rad,2));
    }
    void displayArea()
    {
        cout << "Circle Area= " << ar << endl;
    }
};

class Square : public Shape
{
    float side;

public:
    Square(float s)
    {
        side = s;
    }
    void calArea()
    {
        ar = pow(side, 2);
    }
    void displayArea()
    {
        cout << "Triangle Area= " << ar << endl;
    }
};

class Triangle : public Shape
{
    float height, base;

public:
    Triangle(float l, float b)
    {
        height = l;
        base = b;
    }
    void calArea()
    {
        ar = (height * base) / 2;
    }
    void displayArea()
    {
        cout << "Triangle Area= " << ar << endl;
    }
};

int main()
{
    Shape *sh_243;
    Circle c_243(3.5);
    Triangle t_243(10.4, 12.3);
    Square sq_243(7);
    sh_243 = &c_243;
    sh_243->calArea();
    sh_243->displayArea();
    sh_243 = &t_243;
    sh_243->calArea();
    sh_243->displayArea();
    sh_243 = &sq_243;
    sh_243->calArea();
    sh_243->displayArea();
    return 0;
}