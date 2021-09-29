#include <iostream>
#include <string.h>
using namespace std;

class Cricketer
{
    char name[20];
    int age, j_no, n_ODI;

public:
    Cricketer()
    {
        cout << "Constructor is called for class Cricketer\n";
    }
    ~Cricketer()
    {
        cout << "Destructor is called for class Cricketer\n";
    }
};

class Batsman : public Cricketer
{
    int run, n_50s, n_100s, n_6s;
    int longest;
    char handb[5];
    int high_score;
    float avg, str_rate;
    public:
    Batsman()
    {
        cout << "Constructor is called for class Batsman\n";
    }
    ~Batsman()
    {
        cout << "Destructor is called for class Batsman\n";
    }
};

class Baller : public Cricketer
{
    char type[10];
    int n_wic;
    float r_rate;
    float speed, eco;
    char handbal[5];
    public:
    Baller()
    {
        cout << "Constructor is called for class Baller\n";
    }
    ~Baller()
    {
        cout << "\nDestructor is called for class Baller\n";
    }
};

int main()
{
    Batsman bat;
    Baller ball;
    return 0;
}