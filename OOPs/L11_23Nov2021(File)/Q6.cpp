#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main()
{
    fstream f1;
    char ch[20] , c;

    f1.open("Convert.txt",ios::in | ios :: out);
    if(!f1)
    {
        cout << "File not available\n";
        exit(1);
    }
    cout<<"Enter string to convert:";
    cin>>ch;

    f1.seekp(0);
    int i;
    while(ch[i])
    {
        f1.put(ch[i]);
        i++;
    }
    f1.seekg(0);
    while(f1)
    {
        f1.get(c);
        if(islower(c))
        {
        c = c-32;
        }
        else if(isupper(c))
        {
            c = c+32;
        }
        f1.seekg(-1,ios::cur);
        f1.put(c);
    }
    f1.clear();
    cout<<f1.tellg()<<endl;
    f1.seekg(0);
    while(f1.eof() == 0)
    {
        f1.get(c);
        cout << c;
    }
    f1.close();

    return 0;
}