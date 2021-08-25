#include <iostream>
using namespace std;

class dist
{
    int feet, inches;

public:
    void getdata()
    {
        cout << "\nEnter the distance in feet: ";
        cin >> feet;
        cout << "\nEnter the distance in inches: ";
        cin >> inches;
    }
    void add(dist a_243, dist b_243)
    {
        inches = a_243.inches + b_243.inches;
        feet = a_243.feet + b_243.feet + (inches / 12);
        inches = inches % 12;
    }
    void displaydata()
    {
        cout << "\nDistance:" << feet << "'" << inches << "''" << endl;
    }

    dist add(dist b_243)
    {
        dist temp_243;
        temp_243.inches = inches + b_243.inches;
        temp_243.feet = feet + b_243.feet;
        return temp_243;
    }
};

int main()
{
    dist d1_243, d2_243, d3_243, d4_243;
    d1_243.getdata();
    d1_243.displaydata();
    d2_243.getdata();
    d2_243.displaydata();
    d3_243.add(d1_243, d2_243);
    d3_243.displaydata();
    d4_243 = d1_243.add(d2_243);
    d4_243.displaydata();
    return 0;
}