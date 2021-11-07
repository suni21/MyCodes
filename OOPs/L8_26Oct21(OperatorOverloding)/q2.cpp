#include <iostream>
using namespace std;

class array
{
private:
    int arr_243[5];

public:
    friend istream &operator>>(istream &, array &);
    friend ostream &operator<<(ostream &, const array &);
};
istream &operator>>(istream &in, array &c)
{
    cout << "Enter array " << endl;
    for (int i_243 = 0; i_243 < 5; i_243++)
        in >> c.arr_243[i_243];
    return in;
}
ostream &operator<<(ostream &out, const array &c)
{
    out << "The array is : " << endl;
    for (int i_243 = 0; i_243 < 5; i_243++)
        out << c.arr_243[i_243] << endl;
    return out;
}
int main()
{
    array a_243;
    cin >> a_243;
    cout << a_243;
    return 0;
}
