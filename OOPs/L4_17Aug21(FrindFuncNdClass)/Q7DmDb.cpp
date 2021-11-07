#include <iostream>
using namespace std;

class dis_meter;
class dis_feet
{
    int feet_243;
    int inches_243;
    friend dis_meter addDis(dis_feet, dis_meter);

public:
    void getData(int a_243, int b_243)
    {
        feet_243 = a_243;
        inches_243 = b_243;
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
    friend dis_meter addDis(dis_feet, dis_meter);

public:
    void getData(int a_243, int b_243)
    {
        meter_243 = a_243;
        centi_243 = b_243;
    }
    void display()
    {
        cout <<meter_243<<"m"<<"\t"<<centi_243<<"cm"<<endl;
    }
};
dis_meter addDis(dis_feet ob1_243, dis_meter ob2_243)
{
    dis_meter temp;
    float distance1_243 = (ob1_243.feet_243 * 0.3048) + (ob1_243.inches_243 * 0.0254);
    float distance2_243 = ob2_243.meter_243 + (ob2_243.centi_243 / 100.00);

    distance2_243 += distance1_243;
    int meter = (int)distance2_243;
    int centi = (distance2_243 - meter) * 100;
    temp.meter_243 = meter;
    temp.centi_243 = centi;
    return temp;
}
int main()
{
    dis_feet o1_243;
    dis_meter o2_243;
    o1_243.getData(10, 20);
    o2_243.getData(2, 30);
    o1_243.display();
    o2_243.display();
    cout << "Summation: ";
    dis_meter add_243 = addDis(o1_243, o2_243);
    add_243.display();
    return 0;
}