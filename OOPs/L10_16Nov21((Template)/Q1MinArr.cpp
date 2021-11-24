#include <iostream>
using namespace std;

template <class T>
T minmum(T a[], int size)
{
    T min = a[0];
    for (int i = 0; i < size; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return (min);
}

int main()
{
    int n1[5];
    float n3[5];
    int size;
    int min_i;
    float min_f;

    cout << "Enter the size of array: \n";
    cin >> size;
    cout << "Enter integers: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> n1[i];
    }
    min_i = minmum(n1, size);
    cout << "Minimum number: \n"
         << min_i;
    cout << "\nEnter float: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> n3[i];
    }
    min_f = minmum(n3, size);
    cout << "Minimum number: \n"
         << min_f;

    return 0;
}
