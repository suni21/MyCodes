#include<iostream>
#include<math.h>

using namespace std;

class Shape
{  
   public:
   float rad,base,he,si;
   Shape(float r,float l,float h,float s)
   {
       rad=r;
       base=l;
       he=h;
       si=s;
   }
  
   virtual void displayArea()
   {};
};

class circle: public Shape
{
  public:
  circle()
  {
    
  }
  void displayArea()
  {
    cout<<"Enter radius:";
    cin>>rad;
    cout<<"Circle Area="<<(2*3.14*rad);
  }
};

class square: public Shape
{
  public:
  void displayArea()
  {
    cout<<"Enter side:";
    cin>>si;
    cout<<"Square Area="<<(pow(si,2));
  }
};

class triangle: public Shape
{
  public:
  void displayArea()
  {
    cout<<"Enter height:";
    cin>>he;
    cout<<"Enter base:";
    cin>>base;
    cout<<"Triangle Area="<<((he*base)/2);
  }
};

int main()
{
  Shape *sh;
  circle c;
  triangle t;
  square s;
  sh=&c;
  sh->displayArea();
  sh=&t;
  sh->displayArea();
  sh=&s;
  sh->displayArea();
return 0;
}