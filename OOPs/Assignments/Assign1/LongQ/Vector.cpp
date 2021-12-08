#include <iostream>
using namespace std;

class vector3D
{
    int x, y, z;

public:
    void setdata(int i, int j, int k)
    {
        x = i;
        y = j;
        z = k;
    }
    void modify();
    void multiplyScalAx();
    void multiplyScalAllAx();
    void display();
    void divideScalAllAx();
    void addScal();
};

void vector3D ::modify()
{
    char ch;
    int num;
    cout << "\nEnter the coordinate you want to modify: ";
    cin >> ch;
    cout << "Enter the value: ";
    cin >> num;
    switch (ch)
    {
    case 'x':
        x = num;
        break;
    case 'y':
        y = num;
        break;
    case 'z':
        z = num;
        break;
    default:
        cout << "ERROR 404!\n";
        break;
    }
}
void vector3D ::multiplyScalAx()
{
    char ch;
    int num;
    cout << "\nEnter coordinate to multiply: ";
    cin >> ch;
    cout << "\n Enter Number to Multiply : ";
    cin >> num;
    if (ch == 'x')
    {
        x *= num;
    }
    else if (ch == 'y')
    {
        y *= num;
    }
    else
    {
        z *= num;
    }
}
void vector3D ::multiplyScalAllAx()
{
    int num;
    cout << "\nEnter the number you want to multiply: ";
    cin >> num;
    x *= num;
    y *= num;
    z *= num;
}
void vector3D ::divideScalAllAx()
{
    int num;
    cout << "\nEnter the number you want to divide: ";
    cin >> num;
    x /= num;
    y /= num;
    z /= num;
}
void vector3D ::addScal()
{
    int num;
    cout << "\nEnter the number you want to add: ";
    cin >> num;
    x += num;
    y += num;
    z += num;
}
void vector3D ::display()
{
    cout << "\nVector(Co-ordinate) : (";
    cout << x << ", " << y << ", " << z;
    cout << ")" << endl;
}

int main()
{
    vector3D v;
    int ch;
    int x, y, z;
    cout << "\nEnter co-ordinates : " << endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "z: ";
    cin >> z;
    v.setdata(x, y, z);

    do
    {
        cout << "\nEnter you choice:\n";
        cout << "1 To Display 3D Vector\n";
        cout << "2 To Modify 3D Vector\n";
        cout << "3 To Multiply with Scalar value\n";
        cout << "4 To Multiply all the axis with Scalar value\n";
        cout << "5 To Divide 3D Vector\n";
        cout << "6 To Add 3D Vector\n";
        cout << "0 To EXIT\n";

        cout << "Choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            v.display();
            break;
        }
        case 2:
        {
            v.modify();
            v.display();
            break;
        }
        case 3:
        {
            v.multiplyScalAx();
            v.display();
            break;
        }
        case 4:
        {
            v.multiplyScalAllAx();
            v.display();
            break;
        }
        case 5:
        {
            v.divideScalAllAx();
            v.display();
            break;
        }
        case 6:
        {
            v.addScal();
            v.display();
        }
        }

    } while (ch);
    return 0;
}
