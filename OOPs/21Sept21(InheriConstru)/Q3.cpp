#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    char name[30];
    int roll, age;
public:
    Student()
    {
        cout << "Constructor is called for class Student\n";
    }
    ~Student()
    {
        cout << "Destructor is called for class Student\n";
    }
};

class test : virtual public Student
{
    int marks[3];
public:
  test()
  {
     cout << "Constructor is called for class test\n"; 
  }
  ~test()
  {
     cout << "Destructor is called for class test\n"; 
  }
};

class activities : virtual public Student
{
    int actMark[2];
public:
    activities()
    {
        cout << "Constructor is called for class activities\n";
    }
    ~activities()
    {
        cout << "Destructor is called for class activities\n";
    }
};

class result : public test, public activities
{
    int total;
    float percent;
    char grade;
public:
result()
    {
        cout << "Constructor is called for class result\n";
    }
    ~result()
    {
        cout << "\nDestructor is called for class result\n";
    }
    
};

int main(){
    result ob1_243;
    return 0;
}