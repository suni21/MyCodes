#include<iostream>
#include<string.h>
using namespace std;

class Books{
    char *title;
    char *author;
    float price;
    char *publisher;
    int copies;
    public:
        void setData(char *t, char *a, float pr, char *p, int st)
        {
            title = new char[strlen(t) + 1];
            author = new char[strlen(a) + 1];
            publisher = new char[strlen(p) + 1];
            strcpy(title, t);
            strcpy(author, a);
            price = pr;
            strcpy(publisher, p);
            copies = st;
        }
        void display()
        {
            cout << "The details of book are\n";
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Price: " << price << endl;
            cout << "Publisher: " << publisher << endl;
            cout << "Stock: " << stock << endl;
        }
        friend void search(Books *b, int n, char *t, char *a);

        ~Books()
        {
            delete[] title;
            delete[] author;
            delete[] publisher;
        }
};

void search(Books *b, int n, char *t, char *a)
{