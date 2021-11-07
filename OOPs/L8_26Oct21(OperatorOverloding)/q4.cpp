#include <iostream>
#include <string.h>
using namespace std;

class str
{
private:
    char *one_243;

public:
    str()
    {
        one_243 = new char[3];
        strcpy(one_243, "one");
    }
    str(char *a_243)
    {
        one_243 = new char[5];
        strcpy(one_243, a_243);
    }
    void display()
    {
        cout << one_243 << endl;
    }
    str operator+(str &s2_243)
    {
        str s_243;
        int l_243 = strlen(one_243) + strlen(s2_243.one_243);
        s_243.one_243 = new char[l_243 + 1];
        strcpy(s_243.one_243, one_243);
        strcat(s_243.one_243, s2_243.one_243);
        return s_243;
    }
    str operator=(const str &s2_243)
    {
        delete (one_243);
        int l_243 = strlen(s2_243.one_243);
        one_243 = new char[l_243 + 1];
        strcpy(one_243, s2_243.one_243);
        return *this;
    }
    ~str()
    {
    }
};
int main()
{
    char a_243[] = "hello", b_243[] = "world";
    str s1_243(a_243), s2_243(b_243), s3_243, s4_243;
    s3_243 = s1_243 + s2_243;
    s4_243 = s1_243;
    s3_243.display();
    s4_243.display();
    return 0;
}