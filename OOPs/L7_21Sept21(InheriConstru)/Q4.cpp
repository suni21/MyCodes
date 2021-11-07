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
        ar=0;
    }
    void display()
    {
        cout << "Area: " << ar << "sq units\n";
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
     circle(int r) :shape()
    {
        cout << "Constructor is called for class circle\n";
        radius = r;
    }
    void calcArea()
    {
        ar = 3.14 * radius * radius;
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
    rectangle(int l, int b) :shape()
    {
        cout << "Constructor is called for class rectangle\n";
        
        leng = l;
        breath = b;
    }
    void calcArea()
    {
        ar = leng * breath;
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
     triangle(int s1, int s2, int s3) :shape()
    {
        cout << "Constructor is called for class triangle\n";
        a = s1;
        b = s2;
        c = s3;
    }
    void calcArea()
    {
        float s = (a + b + c) / 2.0;
        ar = sqrt(s * (s - a) * (s - b) * (s - c));
    }
    ~triangle()
    {
        cout << "\nDestructor is called for class triangle\n";
    }
};
int main()
{
    int r_243, l_243, br_243, a_243, b_243, c_243;
    cout << "Enter data for AREA calculation: " << endl;
    cout << "For circle: " << endl;
    cout << "Radius: ";
    cin >> r_243;
    cout << "\nFor rectangle: " << endl;
    cout << "Length: ";
    cin >> l_243;
    cout << "Breadth: ";
    cin >> br_243;
    cout << "\nFor triangle: " << endl;
    cout << "Side 1: ";
    cin >> a_243;
    cout << "Side 2: ";
    cin >> b_243;
    cout << "Side 3: ";
    cin >> c_243;

    circle c1_243(r_243);
    c1_243.calcArea();

    rectangle r1_243(l_243, br_243);
    r1_243.calcArea();

    triangle t1_243(a_243, b_243, c_243);
    t1_243.calcArea();
    
    cout << "Areas: " << endl;
    cout << "Circle: " << endl;
    c1_243.display();
    cout << "Rectangle: " << endl;
    r1_243.display();
    cout << "Triangle: " << endl;
    t1_243.display();
    return 0;
}