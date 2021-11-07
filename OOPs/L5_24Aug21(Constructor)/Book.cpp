#include <iostream>
#include <string.h>
using namespace std;
 
class book
{
   char *author;
   char *title;
   int price;
   char *publisher;
   int stock;
 
public:
 
   book()
   {
 
   }
 
   book(char *au, char *ti, int p, char *pub, int st)
   {
       author = new char[strlen(au) + 1];
       strcpy(author, au);
       title = new char[strlen(ti) + 1];
       strcpy(title, ti);
       price = p;
       publisher = new char[strlen(pub) + 1];
       strcpy(publisher, pub);
       stock = st;
   }
 
   void display()
   {
       cout << "\nDetails\n";
       cout << "Author: " << author << endl;
       cout << "Title: " << title << endl;
       cout << "Price: " << price << endl;
       cout << "Publisher: " << publisher << endl;
       cout << "Stock: " << stock << endl;
   }
 
   friend void search(book *b, int n, char *au, char *ti);
};
 
void search(book *b, int n, char *au, char *ti)
{
   for (int i = 0; i < n; i++)
   {
       if ( strcmp(b[i].author, au) == 0 && strcmp(b[i].title, ti) == 0 )
       {
           b[i].display();
 
           int no;
           cout << "Enter the number of copies : " << endl;
           cin >> no;
 
           if (b[i].stock >= no)
           {
               int bill = no * b[i].price;
               cout << "The Total Bill is: Rs " << bill << endl;
           }
           else
               cout << " Requested copies not in stock " << endl;
           return;
       }
   }
   cout << "Requested Book is currently unavailable !" << endl;
}
 
int main()
{
   book b_243[3] = {{"Suniti","chaudhary", 100, "hfkj", 20}, {"jsjjbj", "hhsvd", 900, "jjsbdjd ", 30}, {"dkjbbj", "sssh", 500, "dfiddf",80}};
 
   for (int i_243 = 0; i_243 < 3; i_243++)
       b_243[i_243].display();
   char sAuthor_243[30], sTitle_243[30];
   cout << "Enter the name of author to search: ";
   gets(sAuthor_243);
   cout << "Enter the name of book to search: ";
   gets(sTitle_243);
   search(b_243, 3, sAuthor_243, sTitle_243);
 
   return 0;
}