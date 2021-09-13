#include<iostream>
#include<string.h>
using namespace std;
class BankAccount
{
    int ID;
    char *name;
    int account_no;
    double account_balance;
    char *Email;
    public:
    BankAccount()
    {
        name=new char[20];
        ID=243;
        account_no=2006243;
        account_balance=1000;
        Email=new char[15];
    }
    BankAccount(char *na,int id,int n,int b,char *e)
    {
        name=new char[strlen(na)+1];
        strcpy(name,na);
        ID=id;
        account_no=n;
        account_balance=b;
        Email=new char[strlen(e)+1];
        strcpy(Email,e);
    }
    BankAccount(const BankAccount &o)
    {
        ID=o.ID;
        account_no=o.account_no;
        account_balance=o.account_balance;
        name=new char[strlen(o.name)+1];
        strcpy(name,o.name);
        Email=new char[strlen(o.Email)+1];
        strcpy(Email,o.Email);

    }
    void getbalance()
    {
        double amount;
        cout<<"enter amount to deposit"<<endl;
        cin>>amount;
        account_balance+=amount;
    }
    void withdraw(int amount)
    {
        if(account_balance>500) 
        {
         account_balance-=amount;
         cout<<"Transaction done!"<<endl;
        }
        else
        {
        cout<<"Transaction not done!"<<endl;
        }
    }
    void display()
    {
        cout<<"name: "<<name<<endl;
        cout<<"account_balance : "<<account_balance<<endl;
        cout<<"account_no : "<<account_no<<endl;
        cout<<"id : "<<ID<<endl;
        cout<<"email : "<<Email<<endl;

    }
    friend void maximum(BankAccount *ob, int n);
};

void maximum(BankAccount *ob, int n)
{
    BankAccount max = ob[0];
    for(int i = 1; i < n; i++)
    {
        if(max.account_balance < ob[i].account_balance)
            max = ob[i];
    }
    max.display();
}

int main()
{
    int id,ac_no;
    double balance;
    char name[20],email[15];
    int n;
    cout<<"Enter no of customer"<<endl;
    cin>>n;
    
    BankAccount b[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the details" << i + 1 << endl;
        cout << "Name: ";
        getchar();
        gets(name);
        cout << "ID: ";
        cin >> id;
        cout << "Account No: ";
        cin >> ac_no;
        cout << "Account Balance: ";
        cin >> balance;
        cout << "Email: ";
        getchar();
        gets(email);
        b[i] = BankAccount(name, id, ac_no, balance, email);

        b[i].withdraw(200);
        b[i].display();

    }
    
    return 0;
}