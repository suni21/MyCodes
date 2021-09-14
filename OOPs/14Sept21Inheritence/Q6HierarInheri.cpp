#include <iostream>
#include <string.h>
using namespace std;

class Cricketer
{
    char name[20];
    int age, j_no, n_ODI;

public:
    void getdata(char *n, int a, int j, int o)
    {
        strcpy(name, n);
        age = a;
        j_no = j;
        n_ODI = o;
    }

    void display()
    {
        cout << "Name: " << name<<endl;
        cout << "Age: " << age<<endl;
        cout << "Jersey no.: " << j_no<<endl;
        cout << "No of ODIs played: " << n_ODI<<endl;
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
    void getdata(char *n, int a, int j, int o, int r, int h, int c, int six, int l, int hscore, char *ha, float av, float s)
    {
        Cricketer::getdata(n, a, j, o);
        run = r;
        n_50s = h;
        n_100s = c;
        n_6s = six;
        longest = l;
        high_score = hscore;
        strcpy(handb, ha);
        avg = av;
        str_rate = s;
    }

    void display()
    {
        Cricketer::display();
        cout << "\nRun Scored: " << run << endl;
        cout << "No of half centuries: " << n_50s << endl;
        cout << "No of centuries: " << n_100s << endl;
        cout << "No of sixes: " << n_6s << endl;
        cout << "Average Score: " << avg << endl;
        cout << "Strike rate: " << str_rate << endl;
        cout << "Highest Score: " << high_score << endl;
        cout << "R/L: " << handb << endl;
        cout << "Longest hit: " << longest << endl;
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
    void getdata(char *n, int a, int j, int o, char *t, int w, int rate, int sp, float ec, char *ha)
    {
        Cricketer::getdata(n, a, j, o);
        strcpy(type, t);
        n_wic = w;
        r_rate = rate;
        speed = sp;
        ec = ec;
        strcpy(handbal, ha);
    }

    void display()
    {
        Cricketer::display();
        cout << "Type(Spin/Pace): " << type<<endl;
        cout << "No of wickets: " << n_wic << endl;
        cout << "RunRate: " << r_rate<<endl;
        cout << "Speed: " << speed<<endl;
        cout << "Economy: " << eco<<endl;
        cout << "Hand(R/L): " << handbal<<endl;
    }
};

int main()
{
    Batsman bat;
    Baller ball;

    char name[20];
    int age, j_no, n_ODI;

    int run, n_50s, n_100s, n_6s;
    int longest;
    char handb[5];
    int high_score;
    float avg, str_rate;

    char type[10];
    int n_wic;
    float r_rate;
    float speed, eco;
    char handball[5];

    cout << "\nName: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Jersey no.: ";
    cin >> j_no;
    cout << "No of ODIs played: ";
    cin >> n_ODI;

    cout << "\nEnter data: "<<endl;
    cout << "Run Scored: ";
    cin >> run;
    cout << "No of half centuries: ";
    cin >> n_50s;
    cout << "No of centuries: ";
    cin >> n_100s;
    cout << "No of sixes: ";
    cin >> n_6s;
    cout << "Longest hit: ";
    cin >> longest;
    cout << "Highest Score: ";
    cin >> high_score;
    cout << "R/L: ";
    cin >> handb;
    cout << "Average Score: ";
    cin >> avg;
    cout << "Strike rate: ";
    cin >> str_rate;

    bat.getdata(name, age, j_no, n_ODI, run, n_50s, n_100s, n_6s, longest, high_score, handb, avg, str_rate);
    cout << "\nBatsman detail: ";
    bat.display();

    cout << "\nEnter data:" << endl;
    cout << "Type(Spin/Pace): ";
    cin >> type;
    cout << "No of wickets: ";
    cin >> n_wic;
    cout << "RunRate: ";
    cin >> r_rate;
    cout << "Speed: ";
    cin >> speed;
    cout << "Economy: ";
    cin >> eco;
    cout << "Hand(R/L): ";
    cin >> handball;

    ball.getdata(name, age, j_no, n_ODI, type, n_wic, r_rate, speed, eco, handball);
    cout << "\nBaller details:"<<endl;
    ball.display();

    return 0;
}