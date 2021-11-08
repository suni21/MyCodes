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
        ar = 3.14 * rad * rad;
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
    Shape *sh;
    Circle c(5);
    Triangle t(4, 6);
    Square sq(12);
    sh = &c;
    sh->calArea();
    sh->displayArea();
    sh = &t;
    sh->calArea();
    sh->displayArea();
    sh = &sq;
    sh->calArea();
    sh->displayArea();
    return 0;
}