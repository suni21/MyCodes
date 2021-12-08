#include <iostream>
using namespace std;

class num2;
class num1
{
    int x;
    friend void compare(num1, num2);

public:
    void getData(int a)
    {
        x = a;
    }
    void display()
    {
        cout << "Number 1= " << x << endl;
    }
};

class num2
{
    int y;
    friend void compare(num1, num2);

public:
    void getData(int b)
    {
        y = b;
    }
    void display()
    {
        cout << "Number 2= " << y << endl;
    }
};

void compare(num1 ob1, num2 ob2)
{
    if (ob1.x > ob2.y)
        ob1.display();

    else
        ob2.display();
}

int main()
{
    num1 o1_243;
    num2 o2_243;
    o1_243.getData(10);
    o2_243.getData(28);
    o1_243.display();
    o2_243.display();
    cout << "\nLargest: \n";
    compare(o1_243, o2_243);
    return 0;
}