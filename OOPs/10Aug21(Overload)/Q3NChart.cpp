#include <iostream>
using namespace std;

void print()
{
    for (int i_243 = 0; i_243 < 80; i_243++)
    {
        cout << "*";
    }
    cout << endl;
}
void print(int n_243)
{
    for (int i_243 = 0; i_243 < n_243; i_243++)
    {
        cout << "*";
    }
    cout << endl;
}
void print(char c_243)
{

    for (int i_243 = 0; i_243 < 80; i_243++)
    {
        cout << c_243;
    }
    cout << endl;
}
void print(char c_243, int n_243)
{

    for (int i_243 = 0; i_243 < n_243; i_243++)
    {
        cout << c_243;
    }
    cout << endl;
}
int main()
{
    char c_243;
    int n_243;
    print();
    cout << "enter the char and no. : ";
    cin >> c_243 >> n_243;
    cout << "\n";
    print(c_243);
    cout << "\n";
    print(n_243);
    cout << "\n";
    print(c_243, n_243);
    return 0;
}