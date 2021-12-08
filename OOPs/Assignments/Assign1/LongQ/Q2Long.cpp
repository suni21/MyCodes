#include<iostream>
#include<stdio.h>
using namespace std;

class vector
{
        int *coord;
    public:
        vector();     
        void modify();
        void display();
        void multiply();
};
vector::vector()
{
        coord=new int[3];
        cout<<"\n Enter Co-ordinates : \n";
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                cin>>coord[i];
        }
}
void vector::modify()
{
        cout<<endl<<"\n Enter New Co-ordinates : \n";
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                cin>>coord[i];
        }
}
void vector::multiply()
{
        int num;
        cout<<endl<<"\n Enter Number to Multiply : ";
        cin>>num;
        for(int i=0; i<3; i++)
        {
                coord[i]=coord[i]*num;    
        }
}
void vector::display() 
{
        cout<<"\n Vector : (";
        for(int i=0; i<3; i++)
        {
                cout<<coord[i];
                if(i!=3-1)
                        cout<<",";
        }
        cout<<")";
}
int main()
{
        vector v;
        v.display();
        v.modify();
        v.display();
        v.multiply();
        v.display();
        return 0;
}
