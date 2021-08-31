#include <iostream>
using namespace std;

class students
{
    char name[30];
    int roll;
    float total_marks;
    static float avgMarks;

public:
    friend float Avg(students *s_243, int n_243);
    void getdata()
    {
        cout << "\nEnter Name : ";
        cin >> name;
        cout << "Enter Roll : ";
        cin >> roll;
        cout << "Enter Total Marks : ";
        cin >> total_marks;
    }
    void display()
    {

        cout << name << "\t\t" << roll << "\t\t\t" << total_marks << endl;
    }
};
float students::avgMarks;

float Avg(students obj_243[], int n_243)
{
    for (int i_243 = 0; i_243 < n_243; i_243++)
    {
        students::avgMarks = students::avgMarks + obj_243[i_243].total_marks;
    }
    cout << "\nAverage marks of the students : " << (students::avgMarks / n_243);
}

int main()
{
    int n_243;
    cout << "Enter number of students: ";
    cin >> n_243;
    students ob_243[n_243];
    for (int i_243 = 0; i_243 < n_243; i_243++)
    {
        ob_243[i_243].getdata();
    }
    cout << "\nDetails:";
    cout << "\nName\t\t Roll no\t\t Total Marks" << endl;
    for (int i_243 = 0; i_243 < n_243; i_243++)
    {
        ob_243[i_243].display();
    }

    Avg(ob_243, n_243);

    return 0;
}
