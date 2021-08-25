#include<iostream>
using namespace std;

class mystr
{
    char *name;
    int len;
    public:
     mystr()
     {
         name=new char;
         len=0;
     }
     mystr(char *s, int n)
     {
         len=n;
         name=new char[len+1];
         strcpy(name,s);
     }
     void display()
     {
         cout<<"n"<<name;
     }
     void joinstr(mystr &a, mystr &b);
};
