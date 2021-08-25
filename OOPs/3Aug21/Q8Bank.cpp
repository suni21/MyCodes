#include <iostream>
using namespace std;

class BankAccount
{
    char name[30], type[10];
    int no;
    float accbalance;

public:
    void getdata();
    void deposit(float amount_243);
    void withdraw(float amount_243);
    void display();
};

void BankAccount ::getdata()
{
    cout << "Enter Name of Depositor: ";
    gets(name);
    cout << "Enter Account Number: ";
    cin >> no;
    cout << "Enter Account Type: ";
    getchar();
    gets(type);
    cout << "Enter Balance: ";
    cin >> accbalance;
    cout << endl;
}

void BankAccount ::deposit(float amount_243)
{
    accbalance = accbalance + amount_243;
    cout << "\nAmount deposited successfully." << endl;
    cout << "Available Amount: " << accbalance << endl;
    cout << endl;
}

void BankAccount ::withdraw(float amount_243)
{
    if (accbalance - amount_243 >= 500) //minimum amount is 500
    {
        accbalance = accbalance - amount_243;
        cout << "\nRs." << amount_243 << " withdrawn from account.";
        cout << "\nRemaining balance: " << accbalance << endl;
    }
    else
    {
        cout << "\nInsufficient balance ! " << endl;
        cout << "Available Amount: " << accbalance << endl;
        cout << endl;
    }
}

void BankAccount ::display()
{
    cout << "Name:" << name << endl;
    cout << "Account Number:" << no << endl;
    cout << "Account Type: " << type << endl;
    cout << "Balance:\t" << accbalance << endl;
}

int main()
{
    float amount_243;
    int ch_243;
    BankAccount acc_243;
    acc_243.getdata();

    do
    {
        cout << "Press\n1 to deposit\n2 to withdraw\n0 to exit \n";
        cout << "Enter:";
        cin >> ch_243;
        cout << endl;
        if (ch_243 == 1)
        {
            cout << "Enter the amount to deposit: " << endl;
            cin >> amount_243;
            acc_243.deposit(amount_243);
        }
        else if (ch_243 == 2)
        {
            cout << "Enter the amount to Withdraw: " << endl;
            cin >> amount_243;
            acc_243.withdraw(amount_243);
        }
        else
            break;
    } while (ch_243);

    acc_243.display();
    return 0;
}