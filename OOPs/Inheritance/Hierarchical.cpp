#include<iostream>
#include<string.h>
using namespace std;

class person
{
    char name[20],sex[5];
    int age;
    public:
    void getdata(char *n, char *g, int a)
    {
        strcpy(name,n);
        strcpy(sex,g);
        age=a;
    }
    void display()
    {
        cout<<"\nName: "<<name;
        cout<<"\nSex: "<<sex;
        cout<<"\nAge: "<<age;
    }
};

class student:public person
{
    char institution[30],major[10];
    public:
    void getdata(char *i,char *mo,char *n, char *g, int a)
    {
        person::getdata(n,g,a);
        strcpy(institution,i);
        strcpy(major,mo);
    }
    void display()
    {
        person::display();
        cout<<"\nName of the college: "<<institution;
        cout<<"\nMajor in: "<<major<<endl;
    }
};

class employee:public person
{
    char comapany[50];
    float salary;
    public:
    void getdata(char *c,float s,char *n, char *g, int a)
    {
        person::getdata(n,g,a);
        strcpy(comapany,c);
        salary=s;
    }
    void display()
    {
        person::display();
        cout<<"\nName of the company: "<<comapany;
        cout<<"\nSalary: "<<salary;
    }
};

int main()
{
    student s;
    employee emp;
    char name[30],sex[10];
    int age;
    char insti[50], major[10];
    char name_company[50];
    float sal;
    cout<<"Enter details of person: "<<endl;
    cout<<"Name: ";
    cin>>name;
    cout<<"Sex: ";
    cin>>sex;
    cout<<"Age: ";
    cin>>age;

    cout<<"\nEnter data: "<<endl;
    cout<<"Name of the college: ";
    cin>>insti;
    cout<<"Major in: ";
    cin>>major;
    s.getdata(insti,major,name,sex,age);
    cout<<"\nStudent detail:";
    s.display();

    cout<<"\nEnter data:"<<endl;
    cout<<"Name of the company: ";
    cin>>name_company;
    cout<<"Salary: ";
    cin>>sal;
    emp.getdata(name_company,sal,name,sex,age);
    cout<<"\nEmployee detail:";
    emp.display();

    return 0;

}