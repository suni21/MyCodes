#include<iostream>
using namespace std;

class test
{
    int i;
    static int count;
    public:
    test()
    {
        count++;
    }
    test(int t)
    {
        i=t;
        count++;
    }
    static void display()
    {
        cout<<"\nTotal no of time objects are created:"<<count;
    }
};
int test::count;
int main()
{
   test t1;
   test t2(4);
   test t3(t1);
   test::display();
   
   return 0;


}