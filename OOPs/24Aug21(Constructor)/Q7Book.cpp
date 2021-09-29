#include<iostream>
using namespace std;

class Books
{
    char author[30];
    char title[30];
    char pub[50];
    float price;
    int copies;

    public:
    Books();
    void getdata();
    void display();
};
void Books::getdata()
{
 cout<<"\nEnter name of the author: ";
 cin>>author;
 cout<<"\nEnter title of the book: ";
 cin>>title;
 cout<<"\nEnter publisher of the book: ";
 cin>>pub;
 cout<<"\nEnter price of the book: ";
 cin>>price;
 cout<<"\nEnter stock of book: ";
 cin>>copies;
}
void Books::display();
{
 cout<<"\n";
 cout<<author<<"\t"<<title<<"\t"<<pub<<"\t"<<price<<"\t"<<copies;

