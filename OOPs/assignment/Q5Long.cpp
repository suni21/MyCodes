#include <iostream>
#include <string.h>
using namespace std;

class students
{
    char name[30];
    int roll;
    float marks[5], total_marks, avg;
    static float avgMarks_class;

  public:
    void getdata(char *n, int r);
    void display();
    friend void AvgClass(students *s_243, int n_243); 
    friend void belowAvg(students *s_243, int n_243);
    friend void aboveAvg(students *s_243, int n_243);
    friend void findHighest(students *s_243, int n_243);
    friend void arrsort(students s_243[], int n_243);
};

void students :: getdata(char *n, int r)
{

    strcpy(name, n);
    roll=r;
    float total = 0;
    for (int i_243 = 0; i_243 < 5; i_243++)
    {
        total = total + marks[i_243];
    }
    total_marks = total;
    avg = total / 5;
}
void students ::display()
{
    cout << "\nName: " << name << endl;
    cout << "Roll: " << roll << endl;
    cout << "\nAverage marks of student:" << avg << endl;
}

float students::avgMarks_class; //static memory

//Average of the class
void AvgClass(students *s_243, int n_243)
{
    float total=0;
    for (int i_243 = 0; i_243 < n_243; i_243++)
    {
        total+=(s_243+i_243)->total_marks;
    }
    students::avgMarks_class = total/5;
    cout << "\nAverage marks of the class: " << students::avgMarks_class<<endl;
}

//Below Average 
void belowAvg(students *s_243, int n_243)
{
cout << "\nBelow average marks students:\n";
    for(int i_243 = 0; i_243 < n_243; i_243++)
    {
        if(s_243[i_243].total_marks < students :: avgMarks_class)
        {
            s_243[i_243].display();
        }
    }
}

//Above Average
void aboveAvg(students *s_243, int n_243)
{
    cout << "\nAbove average marks students:\n";
    for(int i_243 = 0; i_243 < n_243; i_243++)
    {
        if(s_243[i_243].total_marks > students :: avgMarks_class)
        {
            s_243[i_243].display();
        }
    }
}

//Order of the students
void arrsort(students s_243[], int n_243)
{
    cout<<"Order"<<endl;
	for (int i_243 = 0; i_243 < n_243 - 1; i_243++)
	{
		for (int j_243 = i_243 + 1; j_243 < n_243; j_243++)
		{
			if (s_243[i_243].total_marks < s_243[j_243].total_marks)
			{
				students temp;
				temp = s_243[i_243];
				s_243[i_243] = s_243[j_243];
				s_243[j_243] = temp;
			}
		}
	}
}

//Highest marks
void findHighest(students *s_243, int n_243)
{
    cout<<"\nHighest marks secured by the student:";
    students temp;
    for(int i_243 = 0; i_243 < n_243; i_243++)
    {
        if(temp.total_marks < s_243[i_243].total_marks)
            temp = s_243[i_243];
    }
    temp.display();
}

int main()
{
    int n_243,roll;
    char name[30];
    float marks[5];

    cout << "\nEnter number of students: ";
    cin >> n_243;
    
    students ob_243[n_243];
    for (int i_243 = 0; i_243 < n_243; i_243++)
    {
        cout << "\nEnter name: ";
        getchar();
        gets(name);
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter the marks of 5 subjects:\n";
        for(int i_243 = 0; i_243 < 5; i_243++)
        {
            cout << "marks" << i_243 + 1<<":";
            cin >> marks[i_243];
        }
        ob_243[i_243].getdata(name,roll);
    }
    cout << "Details:"<<endl;
    for (int i_243 = 0; i_243 < n_243; i_243++)
    {
        ob_243[i_243].display();
    }
    cout<<endl;
    belowAvg(ob_243,n_243);
    aboveAvg(ob_243,n_243);
    arrsort(ob_243,n_243);
    for(int i_243 = 0; i_243 < n_243; i_243++)
    {
        ob_243[i_243].display();
    }
   findHighest(ob_243, n_243);
    return 0;
}
