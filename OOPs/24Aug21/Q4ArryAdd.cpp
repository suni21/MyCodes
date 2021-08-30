#include <iostream>
using namespace std;

class Arry2D
{
    int *arr;
    int len;

public:
    Arry2D()
    {
        arr = new int[1];
        len = 0;
    }

    Arry2D(int *array, int n)
    {
        len = n;
        arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = array[i];
        }
    }

    Arry2D(const Arry2D &ob)
    {
        len = ob.len;
        arr = new int[len];
        for (int i = 0; i < len; i++)
        {
            arr[i] = ob.arr[i]; 
        }
    }

    ~Arry2D(){
        delete[] arr;
    }

    void concatArray(Arry2D ob1, Arry2D ob2);

    void display()
    {
        for (int i = 0; i < len; i++)
        {
            cout << " " << arr[i];
        }
        cout << "\n";
    }
};

void Arry2D ::concatArray(Arry2D ob1, Arry2D ob2)
{
    len = ob1.len + ob2.len;
    delete[] arr;
    arr = new int[len];
    int i = 0;
    for (i = 0; i < ob1.len; i++)
    {
        arr[i] = ob1.arr[i];
        if(i < ob2.len)
        {
            arr[i + ob1.len] = ob2.arr[i];
        }
    }
}

int main()
{
    int arr_243[30], n_243;
    cout << "Enter the number of elements of array 1: ";
    cin >> n_243;
    cout << "Enter the elements: ";
    for(int i_243 = 0; i_243 < n_243; i_243++)
    {
        cin >> arr_243[i_243];
    }
    Arry2D a1_243(arr_243, n_243);

    cout << "Enter the number of elements of array 2: ";
    cin >> n_243;
    cout << "Enter the elements: ";
    for(int i_243 = 0; i_243 < n_243; i_243++)
    {
        cin >> arr_243[i_243];
    }
    Arry2D a2_243(arr_243, n_243);
    Arry2D a3_243;
    a3_243.concatArray(a1_243, a2_243);
    
    a1_243.display();
    a2_243.display();
    a3_243.display();

    return 0;
}