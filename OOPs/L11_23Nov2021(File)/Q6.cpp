#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    fstream f1;
    char ch ,u;

    f1.open("name.txt",ios::in);
    if(!f1)
    {
        cout<<"Error.\nFile not found";
        exit(1);
    }
   
   if(islower(ch))
    {
        ch = isupper(ch);
        cout << ch;
    }

    while(ch != '.')
    {
       if(ch>='A' && ch<='Z')
     {
        if(islower(ch))
        {
            ch = toupper(ch);
            cout << ch;
        }
     }
    }
    f1.close();

    return 0;
}