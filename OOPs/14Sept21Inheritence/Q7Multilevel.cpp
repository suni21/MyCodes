#include <iostream>
#include <string.h>
using namespace std;

class Batsman
{
    int run, n_50s, n_100s;
    float avg, str_rate;

public:
    void getdata_Batsman(int r, int h, int c, float av, float s)
    {
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
};

class Baller
{
    char type[10];
    int n_wic, hatrick;
    float r_rate;
    float speed;
    char figure;

public:
    void getdata_Baller(char *t, int w, int rate, int sp, int ha, int f)
    {
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
};

class Allrounder : public Batsman, public Baller
{
    int mom, in_match, n_catch, rank, sty_player;

public:
    void getdata(int m, int i, int n, int ra, int st)
    {
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
};

int main()
{
    Allrounder a;
    int run, n_50s, n_100s;
    float avg, str_rate;

    char type[10];
    int n_wic, hatrick;
    float r_rate;
    float speed;
    int figure;

    int mom, in_match, n_catch, rank, sty_player;

    cout<<"Enter details: "<<endl;
    cout << "Run Scored: ";
    cin >> run;
    cout << "No of half centuries: ";
    cin >> n_50s;
    cout << "No of centuries: ";
    cin >> n_100s;
    cout << "Average Score: ";
    cin >> avg;
    cout << "Strike rate: ";
    cin >> str_rate;

    cout << "\nType(Spin/Pace): ";
    cin >> type;
    cout << "No of wickets: ";
    cin >> n_wic;
    cout<<"No of hatticks: ";
    cin>>hatrick;
    cout << "RunRate: ";
    cin >> r_rate;
    cout << "Speed: ";
    cin >> speed;
    cout << "Best figure: ";
    cin >> figure;

    cout << "\nNo of man of the matches: ";
    cin >> mom;
    cout << "No of international matches: ";
    cin >> in_match;
    cout << "No of catches: ";
    cin >> n_catch;
    cout << "ICC ranking: ";
    cin >> rank;
    cout << "Stylish player of the match: ";
    cin >> sty_player;
    a.getdata_Batsman(run, n_50s, n_100s, avg, str_rate);
    a.getdata_Baller(type,n_wic,hatrick,r_rate,speed,figure);
    a.getdata(mom,in_match,n_catch,rank,sty_player);
    cout<<"\nDetails: "<<endl;
    a.display();
    return 0;

}