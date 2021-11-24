#include <iostream>
using namespace std;

template <class T>
void minmum(T num1, T num2)
{
    if(num1<num2)
    {
        cout<<num1;
    }
    else
    {
        cout<<num2;
    }
}

int main()
{
    int n1, n2;
    float n3, n4;
    cout << "Enter 2 integers: " << endl;
    cin >> n1 >> n2;
    cout << "Minimum number: \n";
    minmum(n1,n2);
    cout << "\nEnter 2 float: " << endl;
    cin >> n3 >> n4;
    cout << "Minimum number: \n";
    minmum(n3,n4);

    return 0;
}
