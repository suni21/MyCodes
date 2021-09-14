#include <iostream>
#include <string.h>
using namespace std;

class BankAccount
{
    char customerName[30];
    int customerID;
    int accountNo;
    float accountBalance;
    char email[15];

public:
    BankAccount()
    {
        customerID = 243;
        strcpy(customerName,"Suniti");
        accountNo = 2006243;
        accountBalance = 4000;
        strcpy(email,"2006243@kiit.ac.in");
    }
    BankAccount(char *c, int i, int n, float b, char *e)
    {
        customerID = i;
        strcpy(customerName,c);
        accountNo = n;
        accountBalance = b;
        strcpy(email, e);
    }
    BankAccount(const BankAccount &bA_243)
    {
        customerID = bA_243.customerID;
        strcpy(customerName,bA_243.customerName);
        accountNo = bA_243.accountNo;
        accountBalance = bA_243.accountBalance;
        strcpy(email,bA_243.email);
    }
    
    void setvalue();
    void getBalance();
    void withdraw(float aBalance);
    void display();
    friend void MaxBalEmp(BankAccount *ob, int n);

};
void BankAccount ::setvalue()
{
    cout << "Enter Name: ";
    gets(customerName);
    cout << "Enter Account Number: ";
    cin >> accountNo;
    cout << "Enter Customer ID: ";
    cin >> customerID;
    cout << "Enter Balance: ";
    cin >> accountBalance;
    cout << "Enter Email: ";
    getchar();
    gets(email);
}

void BankAccount::getBalance()
{
    float aBalance;
    accountBalance = accountBalance + aBalance;
    cout << "Available Amount: " << accountBalance << endl;
}

void BankAccount::withdraw(float aBalance)
{
    if (accountBalance - aBalance >= 500) //minimum amount is 500
    {
        accountBalance = accountBalance - aBalance;
        cout << "Rs." << aBalance << " withdrawn from account.";
        cout << "Transaction dine!" << endl;
        cout << "\nRemaining balance: " << accountBalance << endl;
    }
    else
    {
        cout << "\nNot sufficient amount." << endl;
        cout << "Transaction not dine!" << endl;
        cout << "Available Amount: " << accountBalance << endl;
    }
}
void BankAccount ::display()
{
    cout << "\nName: " << customerName << endl;
    cout << "ID: " <<customerID<<endl;    
    cout << "Account Number:" << accountNo << endl;
    cout << "Balance:\t" << accountBalance << endl;
    cout<< "Email:"<<email;
}


void MaxBalEmp(BankAccount *ob, int n)
{
 BankAccount temp=ob[0];
    for(int i = 1; i < n; i++)
    {
        if(temp.accountBalance < ob[i].accountBalance)
            temp = ob[i];
    }
    temp.display();
}


int main()
{
    
    char name[30], email[15];
    float  amount;
    int n;
    int id, aNo;
    BankAccount bA1;
    cout<<"Enter no of employess: ";
    cin>>n;
    cout<<"Enter details: "<<endl;
    for(int i=0;i<n;i++)
    {
    cout<<"Acc iD: ";
    cin>>id;
    cout<<"Acc no. : ";
    cin>>aNo;
    cout<<"Name : ";
    cin>>name;
    cout<<"Amount: ";
    cin>>amount;
    cout<<"Email : ";
    cin>>email;
    bA1.withdraw(1000);
    BankAccount bA1(name, id,aNo,amount,email);
    }
    for(int i=0;i<n;i++)
    {
    bA1.display();
    }
    return 0;
}