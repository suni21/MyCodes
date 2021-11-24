#include <iostream>
using namespace std;

template <class T>
class vector
{
private:
    T *v;
    int size = 3;

public:
    vector()
    {
        v = new T[size];
        for (int i = 0; i < size; i++)
        {
            v[i] = 0;
        }
    }
    vector(T *a)
    {
        v = new T[size];
        for (int i = 0; i < size; i++)
        {
            v[i] = a[i];
        }
    }
    void modify(T nval, int in)
    {
        for (int i = 0; i < size; i++)
        {
            if (i == in - 1)
            {
                v[i] = nval;
            }
        }
    }
    void multiply(T scalarval)
    {
        for (int i = 0; i < size; i++)
        {
            v[i] = scalarval * v[i];
        }
    }
    void display()
    {
        cout<<"(";
        for (int i = 0; i < size; i++)
        {
            cout << v[i];
            if (i < size - 1)
            {
                cout << "  ";
            }
        }
        cout<<")";
    cout<<"\n";
    }
};
int main()
{
    int x[3] = {2, 4, 5};
    vector<int> v;
    v = x;
    v.display();
    v.multiply(5);
    v.display();
    v.modify(3, 2);
    cout<<"\nModified data: \n";
    v.display();
    return 0;
}