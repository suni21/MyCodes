#include <iostream>
using namespace std;

class a
{
    public:
    virtual void display()
    {
        cout<<"in a";
    }
};
class b: public a
{
    public:
    void print()
    {
        cout<<"in b";
    }
};
class c: public b
{
    void mydisplay()
    {
        cout<<"in c";
    }
};
int main()
{
cout<<"size pf class c"<<sizeof(c);
return 0;
}