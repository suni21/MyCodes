#include <iostream>
using namespace std;

class number
{
protected:
    int val;

public:
    void setval(int i)
    {
        val = i;
    }

    virtual void show() {}
};
class hextype : public number
{

public:
    void show()
    {
        cout << hex << val << endl;
    }
};
class dectype : public number
{
public:
    void show()
    {
        cout << val << endl;
    }
};

class octtype : public number
{
public:
    void show()
    {
        cout << oct << val << endl;
    }
};

int main()
{
    number *ptr_243;
    dectype d_243;
    hextype h_243;
    octtype o_243;

    ptr_243 = &d_243;
    ptr_243->setval(20);
    ptr_243->show();
    ptr_243 = &o_243;
    ptr_243->setval(20);
    ptr_243->show();
    ptr_243 = &h_243;
    ptr_243->setval(20);
    ptr_243->show();
}