#include<iostream>
using namespace std;

class Arry2D
{
    int m,n;
    Arry2D(int size);
    void setArry(int index, Arry2D &)
}
int main()
{
    int m,n;
    int* arr = new int[m * n]; //dyanamic memory allocation

    for (int i = 0; i < m.len; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            *(arr + i * n + j) = ++c;
        }
    }

    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << *(arr + i * n + j)
                 << " ";
        }

}