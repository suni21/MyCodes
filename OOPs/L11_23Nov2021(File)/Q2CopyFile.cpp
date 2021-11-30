#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;
int main()
{
     ifstream fin;
     fin.open("FIRST.txt");
     ofstream fout;
     fout.open("SECOND.txt");
     if(!fin|| !fout)
     {
        cout << "File not available\n";
        exit(1);
    }
     char ch;
     while(!fin.eof())
     {
          fin.get(ch);
          fout.put(ch);
     }
     cout<<"\n Data has been copied\n";
     fin.close();
     fout.close();
     return 0;
}