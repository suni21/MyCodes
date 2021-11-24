#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream f1;
    char ch,u;
    int no_ch=0,no_wo=0,no_l=0;
    int upp=0,low=0,sp_no=0,dig=0;

    f1.open("name.txt",ios::in);
    if(!f1)
    {
        cout<<"Error.\nFile not found";
        exit(1);
    }

    while(f1.eof()==0)
    {
        f1.get(ch);
        if(ch=='\n')
        {
            no_ch++;
            no_l++;
        }

        else if(ch>='A' && ch<='Z')
        {
            upp++;
        }
        else if(ch>='a' && ch<='z')
        low++;

        else if(ch>='0' && ch<='1')
        {
            dig++;
        }
       else
       {
           sp_no++;
       } 
    }
cout<<"No of characters= "<<no_ch;
cout<<"\nNo of lines= "<<no_l;
cout<<"\nNo of upper case letters= "<<upp;
cout<<"\nNo of lower case letters= "<<low;
cout<<"\nNo of digits= "<<dig;
cout<<"\nNo of special symbols= "<<sp_no;
f1.close();

return 0;
}