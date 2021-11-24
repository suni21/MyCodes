#include <iostream>
#include<string.h>

using namespace std;

class employee
{
    protected:
    char name[20];
    int id;
    int salary;
    public:
    employee(const char *n, int i)
    {
        strcpy(name, n);
        id = i;
    }
    virtual void cal()=0;
    virtual void print()=0;
};

class regular:public employee
{
    int da,hra,basic;
    public:
     regular(char const *n,int i,int d,int h,int b):employee(n,i)
    {
       da=d;
       hra=h;
       basic=b;
    }
    void cal()
    {
        da = 0.8*basic;
        hra = 0.5*basic;
        salary = da + hra + basic;
    }
    void print()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"Salary :"<<salary<<endl;
    }

};

class parttime:public employee
{
    int hours,pay;
    public:
     parttime(char const *n,int i,int hr,int p):employee(n,i)
    {
       hours=hr;
       pay=p;
    }
    void cal()
    {
        salary=hours*pay;
    }
    void print()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"Salary :"<<salary<<endl;
    }

};
int main()
{
    employee *ptr_243[2];
    regular r_243("Suniti", 243,10,400,800);
    parttime p_243("xyz",200,7,600);
    ptr_243[0]=&r_243;
    ptr_243[1]=&p_243;
    ptr_243[0]->cal();
    ptr_243[1]->cal();
    cout<<"\nDetails: "<<endl;
    cout<<"\nRegular employee: "<<endl;
    ptr_243[0]->print();
    cout<<"\nPart-time employee: "<<endl;
    ptr_243[1]->print();
    return 0;
}