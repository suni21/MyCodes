#include <iostream>
using namespace std;

template <class T>
T search(T a[], int size, T key)
{
    int flag;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }
    for (int i = 0; i < size; i++)
    {
        if (a[i] == key)
        {
            cout << "\nAt position " << i + 1 << " key is found \n";
            flag = 1;
            break;
        }
    }
    cout << "\nKey not found \n";
}

int main()
{
    int n1[10], int_key;
    double n2[10], dl_key;
    char ch[10], ch_key;
    int size;

    cout << "Enter the size of array: \n";
    cin >> size;

    cout << "Enter integer: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> n1[i];
    }
    cout << "Enter key to search: \n";
    cin >> int_key;

    cout << "\nElement: ";
    search(n1, size, int_key);

    cout << "\nEnter double: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> n2[i];
    }
    cout << "Enter key to search: \n";
    cin >> dl_key;
    cout << "\nElement: ";
    search(n2, size, dl_key);

    cout << "Enter character: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> ch[i];
    }
    cout << "Enter key to search: \n";
    cin >> ch_key;
    cout << "\nElement: ";
    search(ch, size, ch_key);

    return 0;
}