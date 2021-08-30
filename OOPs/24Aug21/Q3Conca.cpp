#include<iostream>
#include<string.h>
using namespace std;

class myStr
{
    char *str_243;
    int len_243;
    public:
        myStr(){
            str_243 = new char[1];
            len_243 = 0;
        }
        myStr(char *s)
        {
            len_243 =  strlen(s);
            str_243 = new char[len_243 + 1];
            strcpy(str_243, s);
        }

        myStr(const myStr &o)
        {
            len_243 = o.len_243;
            str_243 = new char[o.len_243 + 1];
            strcpy(str_243, o.str_243);
        }

        void display()
        {
            cout << str_243 << endl;
        }
        void concat(myStr o1, myStr o2);
        
        ~myStr()
        {
            delete[] str_243;
        }
};

void myStr :: concat(myStr o1, myStr o2)
{
    len_243 = strlen(o1.str_243) + strlen(o2.str_243);
    delete[] str_243; 
    str_243 = new char[len_243 + 1];
    strcpy(str_243, o1.str_243);
    strcat(str_243, o2.str_243);
}

int main(){
    char str_243[30];
    cout << "Enter 1st string: ";
    gets(str_243);
    myStr s1_243(str_243);
    cout << "Enter 2nd string: ";
    gets(str_243);
    myStr s2_243(str_243);
    myStr s3_243;
    s3_243.concat(s1_243, s2_243);
    s3_243.display();
    return 0;
}