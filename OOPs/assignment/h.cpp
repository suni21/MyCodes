#include <iostream>
using namespace std;

class abc
{
public:
    abc()

    {

        cout << "base default" << endl;

        this->abc();

        -abc()

        {

            cout << "\n"
                 << "inside destructor" << endl;
        }
    }

    int main()

    {
        abc al;

        cout << "Hello World" << endl;

        return 0;
    }