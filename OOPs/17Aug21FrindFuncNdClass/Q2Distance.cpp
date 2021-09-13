#include <iostream>
using namespace std;

class dis_meter;
class dis_feet
{
    int feet_243;
    int inches_243;
    friend void compare(dis_feet, dis_meter);

public:
    void getData(int a, int b)
    {
        feet_243 = a;
        inches_243 = b;
    }
    void display()
    {
        cout << feet_243 << "'" << inches_243 << "''" << endl;
    }
};

class dis_meter
{
    int meter_243;
    int centi_243;
    friend void compare(dis_feet, dis_meter);

public:
    void getData(int a, int b)
    {
        meter_243 = a;
        centi_243 = b;
    }
    void display()
    {
        cout <<meter_243<<"m"<<"\t"<<centi_243<<"cm"<<endl;

    }
};

void compare(dis_feet o1, dis_meter o2)
{
    float num1 = (o1.feet_243 * 0.3048) + (o1.inches_243 * 0.0254);
    float num2 = o2.meter_243 + (o2.centi_243 / 100.00);
    if (num1 > num2)
        o1.display();

    else
        o2.display();
}

int main()
{
    dis_feet o1_243;
    dis_meter o2_243;
    o1_243.getData(10, 20);
    o2_243.getData(2, 30);
    o1_243.display();
    o2_243.display();
    cout << "\nLargest: ";
    compare(o1_243, o2_243);
    return 0;
}