#include<iostream>
using namespace std;

template<class T>
void swap1(T &num1, T &num2)
{
    T temp = num1;
    num1=num2;
    num2=temp;
}

int main()
{
    int n1,n2;
    float n3,n4;
    char ch1,ch2;

    cout<<"Enter 2 integers: "<<endl;
    cin>>n1>>n2; 
    swap1(n1,n2);
    cout<<"Swapped numbers: \n"<<n1<<"\n"<<n2;

    cout<<"\nEnter 2 float: "<<endl;
    cin>>n3>>n4;
    swap1(n3,n4); 
    cout<<"Swapped numbers: \n"<<n3<<"\n"<<n4;
    
    cout<<"\nEnter 2 characters: "<<endl;
    cin>>ch1>>ch2;
    swap1(ch1,ch2);
    cout<<"Swapped numbers: \n"<<ch1<<"\n"<<ch2;
    return 0;
}