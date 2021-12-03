#include<iostream>
using namespace std;

float zeroDivision(int a, int b)
{
    if(b==0)
    {
        throw((char *) "Division by 0.");
    }
    else
    {
        return (a/b);
    } 
   
}

int main()
{
    int num1,num2;
    cout<<"\nEnter no. 1=";
    cin>>num1;
    cout<<"Enter no. 2=";
    cin>>num2;
   try
   {
     zeroDivision(num1,num2);
   }
   catch(char *m)
   {
       cout<<m;
       cout<<"\nAn exception occured.\n";
   }
 return 0;   
}

