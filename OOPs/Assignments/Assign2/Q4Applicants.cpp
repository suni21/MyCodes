#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

class Applicant
{
    char Rno[10];
    char name[20];
    int A_score;

public:
    void enroll()
    {
        cout << "\nEnter roll: ";
        cin >> Rno;
        cout << "Enter name: ";
        getchar();
        gets(name);
        cout << "Enter score: ";
        cin >> A_score;
    }
    int ReturnScore()
    {
        return A_score;
    }
    void status()
    {
        cout << "\nRoll: " << Rno << endl;
        cout << "Name: " << name << endl;
        cout << "Score: " << A_score << endl;
    }
};
void DisplayS(fstream &fin)
{
    Applicant A;
    fin.seekg(0);
    while (fin)
    {
        fin.read((char *)&A, sizeof(A));
        if(A.ReturnScore()>= 70)
              A.status();
    }
}

int main()
{
    fstream f;
    f.open("APPLY.dat", ios ::in | ios ::out | ios ::trunc);
    Applicant a;
    int n;

    cout << "Enter no. of data ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the data: \n";
        a.enroll();
        f.write((char *)&a, sizeof(a));
    }

    DisplayS(f);
    f.close();
    return 0;
}