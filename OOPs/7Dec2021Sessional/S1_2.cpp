#include <iostream>
using namespace std;

class Matrix
{
    int arr[10][10];
    int n;

public:
    void getdata()
    {
        cout << "Enter n: ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
    }

    void display()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << " " << arr[i][j];
            }
            cout << "\n";
        }
    }

    Matrix operator*(Matrix A)
    {
        int mul[10][10];
        int n;
        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < n; j++)
            {
                mul[i][j] = 0;

                for (int k = 0; k < n; k++)
                {
                    mul[i][j] += arr[i][k] * (A.arr[k][j]);
                }
            }
        }
    }
    Matrix operator=(Matrix B)
    {

        int m5[10][10];
        m5[10][10] = arr[10][10];
    }
};

int main()
{
    int n_243;
    Matrix m1, m2, m3;
    m1.getdata();
    m2.getdata();
    m3 = m1 * m2;
    m3.display();
    return 0;
}
