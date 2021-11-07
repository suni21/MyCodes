#include <iostream>
#include <string.h>
using namespace std;

class student
{

    char name[20];
    int rollno;
    float marks[5], total = 0;
    double percentage = 0;

public:
    void getdata()
    {
        cout << "\nEnter Name : ";
        gets(name);
        cout << "\nEnter rollno: ";
        cin >> rollno;
        cout << "\nEnter marks in 5 subjects :";
        for (int i_243 = 0; i_243 < 5; i_243++)
        {
            cout << "\nSubjects " << i_243 + 1 << ":";
            cin >> marks[i_243];
            total = (total + marks[i_243]);
            percentage = total / 5;
        }
    }

    void display()
    {
        cout << "\nDETAILS";
        cout << "Name : " << name << endl;
        cout << "roll no : " << rollno << endl;

        for (int i_243 = 0; i_243 < 5; i_243++)
        {
            cout << "\nMarks of subjet" << i_243 << ":" << marks[i_243];
        }
        cout << "\nTotal marks is:" << total << endl;
        cout << "\nPercentage is:" << percentage << endl;
    }
};

int main()
{
    cout << "\nEnter Details: " << endl;
    student s_243;
    s_243.getdata();
    s_243.display();

    return 0;
}
