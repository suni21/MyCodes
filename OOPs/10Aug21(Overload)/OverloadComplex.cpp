#include<iostream>
using namespace std;

class COMPLEX
{
    private:
    int real;
    int img;

    public:
        void getData();
        void display() const;
        COMPLEX add(int a, COMPLEX c);
        COMPLEX add(COMPLEX c1_26, COMPLEX c2);
};

void COMPLEX :: getData()
{
    cout << "Enter the real part: ";
    cin >> real;
    cout << "Enter the imaginary part: ";
    cin >> img;
}

COMPLEX COMPLEX :: add(int a, COMPLEX c)
{
    COMPLEX temp;
    temp.real = a + c.real;
    temp.img = c.img;
    return temp;
}

COMPLEX COMPLEX :: add(COMPLEX c1_26, COMPLEX c2)
{
    COMPLEX temp;
    temp.real = c1_26.real + c2.real;
    temp.img = c1_26.img + c2.img;
    return temp;
}

void COMPLEX :: display() const
{
    cout << real << "+ i" << img << endl;
}
int main(){
    COMPLEX c1_26, c2_26, c3_26, c4_26;
    c1_26.getData();
    c2_26.getData();
    c3_26 = c3_26.add(4, c2_26);
    c4_26 = c4_26.add(c1_26, c2_26);

    c1_26.display();
    c2_26.display();
   c3_26.display();
    c4_26.display();
    return 0;
}