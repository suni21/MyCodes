#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

struct GAME
{
    char Gamename[30];
    char participant[10][30];
};

void Basket(fstream &f)
{
    fstream f2;
    GAME g1;
    f2.open("Basket.dat", ios ::out);

    f.seekg(0);
    int flag = 0;

    while (f)
    {
        f.read((char *)&g1, sizeof(g1));
        if (!strcmp(g1.Gamename, "Basket Ball"))
        {
            f2.write((char *)&g1, sizeof(g1));
            flag = 1;
        }
    }
    if (!flag)
    {
        cout << "NoFound\n";
        exit(1);
    }
}

void gameData(GAME &g2)
{
    cout << "Enter game name:";
    cin.getline(g2.Gamename, 30);
    cout << "Enter the participants: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter name";
        cin.getline(g2.participant[i], 30);
    }
}

void displayData(const GAME &g3)
{
    cout << "Gamename: " << g3.Gamename << endl;
    cout << "Participants\n";
    for (int i = 0; i < 5; i++)
    {
        cout << g3.participant[i] << endl;
    }
}

int main()
{
    fstream f;
    f.open("Game.dat", ios ::out | ios ::in | ios ::trunc);

    int n;
    cout << "Enter data ";
    cin >> n;
    cin.ignore();
    GAME g;
    for (int i = 0; i < n; i++)
    {
        gameData(g);
        f.write((char *)&g, sizeof(g));
    }

    Basket(f);
    f.close();
    f.open("Basket.dat", ios ::in);
    if (!f)
        cout << "File unavailable\n";
    f.seekg(0);
    while (f)
    {
        f.read((char *)&g, sizeof(g));
        displayData(g);
    }
    f.close();
    return 0;
}