#include <iostream>
#include <math.h>
using namespace std;

class shape
{
protected:
    float ar;

public:
    shape()
    {
        cout << "Constructor is called for class shape\n";
    }
    ~shape()
    {
        cout << "Destructor is called for class shape\n";
    }
};

class circle : public shape
{
    int radius;

public:
     circle()
    {
        cout << "Constructor is called for class circle\n";
    }
    ~circle()
    {
        cout << "Destructor is called for class circle\n";
    }
};

class rectangle : public shape
{
    int leng, breath;

public:
    rectangle()
    {
        cout << "Constructor is called for class rectangle\n";
    }
    ~rectangle()
    {
        cout << "Destructor is called for class rectangle\n";
    }
};

class triangle : public shape
{
    int a, b, c;

public:
     triangle()
    {
        cout << "Constructor is called for class triangle\n";
    }
    ~triangle()
    {
        cout << "\nDestructor is called for class triangle\n";
    }
};

int main()
{
    circle c1_243;
    triangle t1_243;
    rectangle r1_243;
    return 0;
}