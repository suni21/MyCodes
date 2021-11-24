#include <iostream>
#include <string.h>
using namespace std;

class media
{

protected:
    char title[50];
    float price;

public:
    media(char *s, float a)
    {
        strcpy(title, s);
        price = a;
    }
    virtual void display() {}
};

class book : public media
{
    int pages;

public:
    book(char *s, float a, int p) : media(s, a)
    {
        pages = p;
    }
    void display()
    {
        cout <<"\nTitle : "<< title;
        cout <<"\nPages : "<< pages;
        cout <<"\nPrice : "<< price;
    }
};

class tape : public media
{
    float time;

public:
    tape(char *s, float a, float t) : media(s, a)
    {
        time = t;
    }
    void display()
    {
        cout <<"\nTitle : "<< title;
        cout <<"\nPlay time : "<< time <<"mins";
        cout <<"\nPrice : "<< price;
    }
};

int main()
{
    book book1_243("C++", 450, 350);
    tape tape1_243("C", 90, 55);
    media *list_243[2];
    list_243[0] = &book1_243;
    list_243[1] = &tape1_243;
    list_243[0]->display();
    list_243[1]->display();

return 0;
}