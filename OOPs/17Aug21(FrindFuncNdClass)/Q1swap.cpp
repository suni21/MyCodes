#include <iostream>
using namespace std;

class clas2;
class clas1
{
    int num1_243;

public:
    friend void swap(clas1 &, clas2 &);
    void dataVal(int a_243)
    {
        num1_243 = a_243;
    }

    void display()
    {
        cout << "The value of num1 : " << num1_243 << endl;
    }
};

class clas2
{
    int num2_243;

public:
    friend void swap(clas1 &, clas2 &);
    void dataVal(int b_243)
    {
        num2_243 = b_243;
    }

    void display()
    {
        cout << "The value of num2 : " << num2_243 << endl;
    }
};

void swap(clas1 &o1_243, clas2 &o2_243)
{
    int temp = o1_243.num1_243;
    o1_243.num1_243 = o2_243.num2_243;
    o2_243.num2_243 = temp;
}

int main()
{
    clas1 obj1_243;
    clas2 obj2_243;
    obj1_243.dataVal(10);
    obj2_243.dataVal(15);
    obj1_243.display();
    obj2_243.display();

    swap(obj1_243, obj2_243);
    cout << "\nSwapped numbers are:" << endl;
    obj1_243.display();
    obj2_243.display();
    return 0;
}