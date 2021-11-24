#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;
int main()
{
     ifstream fin;
     fin.open("name.txt");
     ofstream fout;
     fout.open("SECOND.txt");
     char ch;
     while(!fin.eof())
     {
          fin.get(ch);
          fout<<ch;
     }
     cout<<"\n Data has been copied";
     fin.close();
     fout.close();
     return 0;
}