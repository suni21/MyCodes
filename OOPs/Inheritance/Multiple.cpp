#include<iostream>
using namespace std;

class scooty
{
   public: 
  int cost;
  void scootyCost(int c)
  {
      cost=c;
      
  }
};

class car
{
    protected:
   int model_no;
    public:
   void setModel(int m)
   {
       model_no=m;
       
   } 
};

class vehical: public scooty, public car
{
    char noOfWheels;
    public:
    void wheels(int w)
    {
        noOfWheels=w;
        
    }
    void display()
    {
        cout<<"\nCost: "<<cost<<endl;
        cout<<"Model no.: "<<model_no<<endl;
    }
};

int main()
{
    vehical v;
    int w1, model, cost;
    cout<<"No. of wheel: ";
    cin>>w1;
    v.wheels(w1);
    cout<<"Enter cost: ";
    cin>>cost;
    v.scootyCost(cost);
    cout<<"Enter model no: ";
    cin>>model;
    v.setModel(model);
    v.display();

    return 0;
}