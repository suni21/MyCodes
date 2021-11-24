#include <iostream>
using namespace std;

template <class T>
class pairr
{
private:
    T num1, num2;

public:
    pairr(T n1, T n2)
    {
        num1 = n1;
        num2 = n2;
    }
    T get_max(T num1, T num2)
    {
        if (num1 > num2)
        {
            return num1;
        }
        else
        {
            return num2;
        }
    }
    void display()
    {
        cout<<"\nMax number= "<<get_max(num1,num2)<<endl;
    }
};
int main()
{
    int n1, n2;
    cout <<"Enter 2 numbers: \n";
    cin >> n1 >> n2;
    pairr<int>p(n1, n2);
    p.display();

    return 0;
}
