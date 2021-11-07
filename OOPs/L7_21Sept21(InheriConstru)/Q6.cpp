#include <iostream>
#include <string.h>
using namespace std;

class Cricketer
{
    char name[20];
    int age, j_no, n_ODI;

public:
    Cricketer(char *n, int a, int j, int oo)
    {
        cout << "Constructor is called for class Cricketer\n";
        strcpy(name, n);
        age = a;
        j_no = j;
        n_ODI = oo;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Jersey no.: " << j_no << endl;
        cout<<"\n";
        cout << "No of ODIs played: " << n_ODI << endl;
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

    Batsman(char *n, int a, int j, int o, int r, int h, int c,
     int six, int l, int hscore, char *ha, float av, float s) :Cricketer(n,a,j,o)
    {
        cout << "Constructor is called for class Batsman\n";
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
        cout << "Run Scored: " << run << endl;
        cout << "No of half centuries: " << n_50s << endl;
        cout << "No of centuries: " << n_100s << endl;
        cout << "No of sixes: " << n_6s << endl;
        cout << "Average Score: " << avg << endl;
        cout << "Strike rate: " << str_rate << endl;
        cout << "Highest Score: " << high_score << endl;
        cout << "R/L: " << handb << endl;
        cout << "Longest hit: " << longest << endl;
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
    Baller(char *n, int a, int j, int o, char *t,
     int w, int rate, int sp, float ec, char *ha) :Cricketer(n,a,j,o)
    {
        cout << "Constructor is called for class Baller\n";
        strcpy(type, t);
        n_wic = w;
        r_rate = rate;
        speed = sp;
        eco = ec;
        strcpy(handbal, ha);
    }

    void display()
    {
        Cricketer::display();
        cout << "Type(Spin/Pace): " << type << endl;
        cout << "No of wickets: " << n_wic << endl;
        cout << "RunRate: " << r_rate << endl;
        cout << "Speed: " << speed << endl;
        cout << "Economy: " << eco << endl;
        cout << "Hand(R/L): " << handbal << endl;
    }
    ~Baller()
    {
        cout << "\nDestructor is called for class Baller\n";
    }
};

int main()
{
    char name_243[20];
    int age_243, j_no_243, n_ODI_243;

    int run_243, n_50s_243, n_100s_243, n_6s_243;
    int longest_243;
    char handb_243[5];
    int high_score_243;
    float avg_243, str_rate_243;

    char type_243[10];
    int n_wic_243;
    float r_rate_243;
    float speed_243, eco_243;
    char handball_243[5];

    cout << "\nName: ";
    cin >> name_243;
    cout << "Age: ";
    cin >> age_243;
    cout << "Jersey no.: ";
    cin >> j_no_243;
    cout << "No of ODIs played: ";
    cin >> n_ODI_243;

    cout << "\nEnter data: " << endl;
    cout << "Run Scored: ";
    cin >> run_243;
    cout << "No of half centuries: ";
    cin >> n_50s_243;
    cout << "No of centuries: ";
    cin >> n_100s_243;
    cout << "No of sixes: ";
    cin >> n_6s_243;
    cout << "Longest hit: ";
    cin >> longest_243;
    cout << "Highest Score: ";
    cin >> high_score_243;
    cout << "R/L: ";
    cin >> handb_243;
    cout << "Average Score: ";
    cin >> avg_243;
    cout << "Strike rate: ";
    cin >> str_rate_243;
    Batsman bat_243(name_243, age_243, j_no_243, n_ODI_243, run_243, n_50s_243, n_100s_243, n_6s_243, longest_243, high_score_243, handb_243, avg_243, str_rate_243);
   
    cout << "\nEnter data:" << endl;
    cout << "Type(Spin/Pace): ";
    cin >> type_243;
    cout << "No of wickets: ";
    cin >> n_wic_243;
    cout << "RunRate: ";
    cin >> r_rate_243;
    cout << "Speed: ";
    cin >> speed_243;
    cout << "Economy: ";
    cin >> eco_243;
    cout << "Hand(R/L): ";
    cin >> handball_243;
    Baller ball_243(name_243, age_243, j_no_243, n_ODI_243, type_243, n_wic_243, r_rate_243, speed_243, eco_243, handball_243);
   
    cout << "\nBatsman detail:\n";
    bat_243.display();

    cout << "\nBaller details:" << endl;
    ball_243.display();

    return 0;
}