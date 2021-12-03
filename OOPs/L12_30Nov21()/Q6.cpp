#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int num=0;
    cout<<"Enter number(positive)= \n";
    cin>>num;

try
{
    if(num<0)
   {
       cout<<"ERROR.Negative number\n";  
       throw num;
   } 
   else 
   {
       int sqr= sqrt(num);
       cout<<"Square root= ";
       throw sqr;
      
   }
}
catch(int m)
   {
       cout<<m;
       cout<<"\nAn exception occured.\n";
   }
 return 0; 
}
