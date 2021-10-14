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
    Allrounder(int r, int h, int c, float av, float s,char *t, int w, int rate,
     int sp, int ha, int f,int m, int i, int n, int ra, int st) :Batsman(r,h,c,av,s) , Baller(t,w,rate,sp,ha,f)
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
    ~Allrounder()
    {
        cout << "\nDestructor is called for class Allrounder\n";
    }
};


int main()
{
    int run_243, n_50s_243, n_100s_243;
    float avg_243, str_rate_243;

    char type_243[10];
    int n_wic_243, hatrick_243;
    float r_rate_243;
    float speed_243;
    int figure_243;

    int mom_243, in_match_243, n_catch_243, rank_243, sty_player_243;

    cout << "Enter details: " << endl;
    cout << "Run Scored: ";
    cin >> run_243;
    cout << "No of half centuries: ";
    cin >> n_50s_243;
    cout << "No of centuries: ";
    cin >> n_100s_243;
    cout << "Average Score: ";
    cin >> avg_243;
    cout << "Strike rate: ";
    cin >> str_rate_243;

    cout << "\nType(Spin/Pace): ";
    cin >> type_243;
    cout << "No of wickets: ";
    cin >> n_wic_243;
    cout << "No of hatticks: ";
    cin >> hatrick_243;
    cout << "RunRate: ";
    cin >> r_rate_243;
    cout << "Speed: ";
    cin >> speed_243;
    cout << "Best figure: ";
    cin >> figure_243;

    cout << "\nNo of man of the matches: ";
    cin >> mom_243;
    cout << "No of international matches: ";
    cin >> in_match_243;
    cout << "No of catches: ";
    cin >> n_catch_243;
    cout << "ICC ranking: ";
    cin >> rank_243;
    cout << "Stylish player of the match: ";
    cin >> sty_player_243;

    Allrounder a_243(run_243, n_50s_243, n_100s_243, avg_243, str_rate_243,type_243, n_wic_243, hatrick_243, r_rate_243, 
    speed_243, figure_243,mom_243, in_match_243, n_catch_243, rank_243, sty_player_243);
    cout << "\nDetails: " << endl;
    a_243.display();
    return 0;
}