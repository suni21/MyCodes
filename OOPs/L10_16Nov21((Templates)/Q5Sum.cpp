#include <iostream>
using namespace std;

template <class T>
class test
{
    T num1, num2;

public:
    test(T n1, T n2)
    {
        num1 = n1;
        num2 = n2;
    }
    T sum(T num1, T num2)
    {
        T add = num1 + num2;
    }
    void display()
    {
        cout << "\nAddition= " << sum(num1, num2);
    }
};

int main()
{
    int n1,n2;
    cout<<"Enter 2 integers: "<<endl;
    cin>>n1>>n2; 
    
    test<int> t1(n1, n2);
    t1.display();
    cout << endl;
    return 0;
}