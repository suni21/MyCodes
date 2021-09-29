#include <iostream>
#include <string.h>
using namespace std;

class Batsman
{
    int run, n_50s, n_100s;
    float avg, str_rate;

public:
    Batsman(int r, int h, int c, float av, float s)
    {
        cout << "Constructor is called for class Batsman\n";
        run = r;
        n_50s = h;
        n_100s = c;
        avg = av;
        str_rate = s; 
    }
    void display()
    {
        cout << "Run Scored: " << run << endl;
        cout << "No of half centuries: " << n_50s << endl;
        cout << "No of centuries: " << n_100s << endl;
        cout << "Average Score: " << avg << endl;
        cout << "Strike rate: " << str_rate << endl;
    }
    ~Batsman()
    {
        cout << "Destructor is called for class Batsman\n";
    }
};   
class Baller
{
    char type[10];
    int n_wic, hatrick;
    float r_rate;
    float speed;
    char figure;

public:
    Baller(char *t, int w, int rate, int sp, int ha, int f)
    {
        cout << "Constructor is called for class Baller\n";
        strcpy(type, t);
        n_wic = w;
        hatrick = ha;
        r_rate = rate;
        speed = sp;
        figure = f;
    }
    void display()
    {
        cout << "Type(Spin/Pace): " << type << endl;
        cout << "No of wickets: " << n_wic << endl;
        cout<<"No of hatticks: "<<hatrick<<endl;
        cout << "RunRate: " << r_rate << endl;
        cout << "Speed: " << speed << endl;
        cout << "Best figure: " << figure << endl;
    }
    ~Baller()
    {
        cout << "Destructor is called for class Baller\n";
    }
};

class Allrounder : public Batsman, public Baller
{
    int mom, in_match, n_catch, rank, sty_player;

public:
    Allrounder(int m, int i, int n, int ra, int st) : Batsman(r,h,c,av,s) , Baller(t,w,rate,sp,ha,f)
    {
        cout << "Constructor is called for class Allrounder\n";
        mom = m;
        in_match = i;
        n_catch = n;
        rank = ra;
        sty_player = st;
    }
    void display()
    {
        Batsman::display();
        Baller::display();
        cout << "No of man of the matches: " << mom<<endl;
        cout << "No of international matches: " << in_match<<endl;
        cout << "No of catches: " << n_catch<<endl;
        cout << "ICC ranking: " << rank<<endl;
        cout << "Stylish player of the match: " << sty_player<<endl;
    }
    }
    ~Allrounder()
    {
        cout << "\nDestructor is called for class Allrounder\n";
    }
};

int main()
{
    Allrounder a;
    return 0;

}