#include <iostream>
using namespace std;
void print(char c='*', int n=80)
{
    for(int i=0;i< n;i++)
    {
        cout << c;
    }
    cout << endl;
}

int main()
{
    cout <<"\n";
    print();
    cout << "\n";
    print('!');
    cout << "\n";
    print('+', 55);
    return 0;
}
