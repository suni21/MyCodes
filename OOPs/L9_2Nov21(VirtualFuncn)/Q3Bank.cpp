#include <iostream>
#include <string.h>
using namespace std;

class Acc
{
public:
    int acc_no;
    char acc_name[20];
    float acc_bal;

    Acc(int no, char *n, float b = 0)
    {
        acc_no = no;
        strcpy(acc_name, n);
        acc_bal = b;
    }

    virtual void deposit(float amount) {}
    virtual void withdraw(float amount) {}
    virtual void dispalyData(){};
};

class Savings : public Acc
{
public:
    Savings(int no, char *n, float b = 0) : Acc(no, n, b) {}
    void deposit(float amount)
    {
        acc_bal = acc_bal + amount;
    }
    void withdraw(float amount)
    {
        if (acc_bal - amount > 1000)
        {
            acc_bal = acc_bal - amount;
            cout << "Transaction succesfull" << endl;
            cout << "Account Balance= Rs. "<<acc_bal;
        }
        else
        {
            cout << "Ammount not available." << endl;
            cout << "Balance amount= " << acc_bal << endl;
        }
    }
    void displayData()
    {
        cout << "Account no.= " << acc_no;
        cout << "Name= " << acc_name;
        cout << "Account Balance= " << acc_bal;
        cout << endl;
    }
};

class Current : public Acc
{
public:
    Current(int no, char *n, float b = 0) : Acc(no, n, b) {}
    void deposit(float amount)
    {
        acc_bal = acc_bal + amount;
        cout << "Transaction succesfull" << endl;
         cout << "Account Balance= Rs. "<<acc_bal<<endl;
    }
    void withdrawn(float amount)
    {
        float am;
        if (acc_bal - amount > 1000) //minimum amount is 1000
        {
            acc_bal = acc_bal - amount;
            cout << "\nRs." << amount << " withdrawn from account.";
            cout << "\nRemaining balance: " << acc_bal << endl;
        }
        else
        {
            am = (1000 - (acc_bal - amount)) * .15;
            acc_bal = acc_bal - amount;
            cout << "Ammount not available." << endl;
            cout << "Balance amount= " << acc_bal << endl;
        }
    }
    void displayData()
    {
        cout << "Account no.= " << acc_no;
        cout << "Name= " << acc_name;
        cout << "Account Balance= " << acc_bal;
        cout << endl;
    }
};

int main()
{
    Acc *a_243[2];
    int n_243, ch_243;
    char name_243[20];
    float bal_243;

    cout << "Enter Account Number= ";
    cin >> n_243;
    cout << "Enter Name= ";
    cin >> name_243;
    cout << "Enter Balance= ";
    cin >> bal_243;

    do
    {
        cout << "1. Savings" << endl;
        cout << "2. Current" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter choice= ";
        cin >> ch_243;

        switch (ch_243)
        {
        case 1:
        {
            cout << "Savings Account: " << endl;
            Savings s1_243(n_243, name_243, bal_243);
            a_243[0]=&s1_243;
            a_243[0]->deposit(1000);
            a_243[0]->withdraw(5000);
            a_243[0]->dispalyData();
            break;
        }
        case 2:
        {
            cout << "Current Account: " << endl;
            Current c1_243(n_243, name_243, bal_243);
            a_243[1]=&c1_243;
            a_243[1]->deposit(500);
            a_243[1]->withdraw(1500);
            a_243[1]->dispalyData();
            break;
        }   
        } 
    }while(ch_243);
 return 0;
}
