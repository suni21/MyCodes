#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    fstream f1;
    f1.open("Student.txt", ios :: in | ios :: out);
    char name[30], g[10];
    int phy, chem, math;

    if(!f1)
    {
        cout << "File not available\n";
        exit(1);
    }

    cout<<"Enter:";
    cout<<"\nName:";
    cin>>name;
    f1 >> name;
    cout<<"Gender:";
    cin>>g;
    f1 >> g;
    cout<<"Marks in 3 sunbjects:";
    cout<<"\nPhy=";
    cin>>phy;
    cout<<"Chem=";
    cin>>chem;
    cout<<"Maths=";
    cin>>math;
    f1 >> phy;
    f1 >> chem;
    f1 >> math;

    float avg = 0;
    avg = (phy + chem + math)/3.0;
    cout << "\nAverage marks: " << avg << endl;

    return 0;
}