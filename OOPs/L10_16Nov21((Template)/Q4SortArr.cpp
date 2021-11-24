#include <iostream>
using namespace std;

template <class T, int size>
void sort_Arr(T a[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                T temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main()
{
    int n1[5];
    float n2[5];

    cout << "Enter integer: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> n1[i];
    }
    sort_Arr<int, 5>(n1);

    cout << "\nSorted integer array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << n1[i] << " ";
    }

    cout << "\nEnter float: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> n2[i];
    }
    sort_Arr<float, 5>(n2);

    cout << "\nSorted float array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << n2[i] << " ";
    }
    return 0;
}