#include <iostream>
using namespace std;

class poly
{
    int n;
    int *arr;

public:
    poly() {}

    poly(int *num, int len)
    {
        n = len;
        arr = new int[n];
        for (int i = 0; i < len; i++)
        {
            arr[i] = num[i];
        }
    }

    poly(const poly &p)
    {
        n = p.n;
        arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = p.arr[i];
        }
    }

    ~poly()
    {
        delete[] arr;
    }

    void display()
    {
        int i;
        for (i = n - 1; i > 0; i--)
        {
            cout << arr[i] << "x^" << i << " + ";
        }
        cout << arr[i] << "x^" << i << endl;
    }

    void add(poly p1, poly p2);
    void multiply(poly p1, poly p2);
};
void poly ::multiply(poly p1, poly p2)
{
    n = p1.n + p2.n - 1;
    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < p1.n; i++)
    {
        for (int j = 0; j < p2.n; j++)
        {
            arr[i + j] += p1.arr[i] * p2.arr[j];
        }
    }
}

void poly ::add(poly p1, poly p2)
{
    n = (p1.n > p2.n) ? p1.n : p2.n;
    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        if (i < p1.n && i < p2.n)
        {
            arr[i] = p1.arr[i] + p2.arr[i];
        }
        else if (i > p1.n)
        {
            arr[i] = p2.arr[i];
        }
        else
        {
            arr[i] = p1.arr[i];
        }
    }
}

int main()
{
    int n_243;
    poly po3_243;
    poly po4_243;

    cout << "Enter the highest degree of polynomial: ";
    cin >> n_243;
    n_243++;
    int arr_243[n_243];
    for (int i = 0; i < n_243; i++)
    {
        cout << "Enter the coefficient of degree " << i << ": ";
        cin >> arr_243[i];
    }
    poly po1_243(arr_243, n_243);

    cout << "Enter the highest degree of second polynomial: ";
    cin >> n_243;
    n_243++;
    int arr2_243[n_243];
    for (int i = 0; i < n_243; i++)
    {
        cout << "Enter the coefficient of degree " << i << ": ";
        cin >> arr2_243[i];
    }
    poly po2_243(arr2_243, n_243);
    cout << "Polynoimials: " << endl;
    po1_243.display();
    po2_243.display();
    cout << endl;
    cout << "Addition of polynomil: " << endl;
    po3_243.add(po1_243, po2_243);
    po3_243.display();
    cout << endl;
    cout << "Multiplication of polynomil: " << endl;
    po4_243.multiply(po1_243, po2_243);
    po4_243.display();
    cout << endl;

    return 0;
}
