#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:
        complex() //default constructor
        {
            real=10;
            img=6;
        }
        complex(int a, int b) //parameterised constructor
        {
            real=a;
            img=b;
        }
        complex(const complex &c1,const complex &c2)
        {
            real=c1.real;
            img=c2.img;
        }[]
        void display()
        {
            cout<<"The number is:\n";
            cout<<real<<"+"<<img<<"i"<<endl;
        }
        ~complex()  //destructor
        {
            cout<<"Destructor is called(invoked)"<<endl;
        }
};
int main()
{
    complex c1;
    c1.display();
    complex c2(10,6);
    c2.display();
    complex c3(c1);
    c3.display();
    complex c4(c2);
    c4.display();

    return 0;
}
