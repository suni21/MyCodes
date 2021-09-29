#include <iostream>
#include <math.h>
using namespace std;

class shape
{
protected:
    float ar;

public:
    void display()
    {
        cout << "Area: " << ar << "sq units\n";
    }
};

class circle : public shape
{
    int radius;

public:
    void getdata(int r)
    {
        radius = r;
    }
    void calcArea()
    {
        ar = 3.14 * radius * radius;
    }
};

class rectangle : public shape
{
    int leng, breath;

public:
    void getdata(int l, int b)
    {
        leng = l;
        breath = b;
    }
    void calcArea()
    {
        ar = leng * breath;
    }
};

class triangle : public shape
{
    int a, b, c;

public:
    void getdata(int s1, int s2, int s3)
    {
        a = s1;
        b = s2;
        c = s3;
    }
    void calcArea()
    {
        float s = (a + b + c) / 2.0;
        ar = sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

int main()
{
    int r_243, l_243, br_243, a_243, b_243, c_243;
    circle c1_243;
    triangle t1_243;
    rectangle r1_243;
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
    c1_243.getdata(r_243);
    c1_243.calcArea();
    r1_243.getdata(l_243, br_243);
    r1_243.calcArea();
    t1_243.getdata(a_243, b_243, c_243);
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