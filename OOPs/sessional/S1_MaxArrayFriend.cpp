#include <iostream>
#include <string.h>

using namespace std;

class arr
{
    int array_num[10];

public:
    void getData()
    {
        int n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter ";
            cout << "obj " << i + 1 << "=";
            cin >> array_num[i];
        }
    }
    void displayData()
    {
        cout << "Laregest obj= " << endl;
    }

    friend int largest(arr num[], int n)
    {
        for (int i = 1; i < n; i++)
        {
            if (num[0] < num[i])
                num[0] = num[i];
        }
    }
};

int main()
{
    int n_243;
    int max=0;
    cout << "Enter no of objects= ";
    cin >> n_243;

    arr a_243[n_243];
    for (int i = 0; i < n_243; i++)
    {
        a_243[i].getData();
    }
    max=largest(a_243, n_243);
    for (int i = 0; i < n_243; i++)
    {
        a_243[i].displayData();
    }
    return 0;
}