#include <iostream>
#include <string.h>
using namespace std;

class product
{
    protected:
    char name[30];
    float cost;
    char expiry_Date[10],current_Date[10];;

    public:
    product(char *n, float c)
    {
        strcpy(name, n);
        cost=c;
    }
    
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Price: " << cost << endl;
    }
    product operator>(product p1)
    {
        int ex_year, ex_month,ex_date;
        int cu_year,cu_month,cu_date;

        if(cu_year > ex_year)
            throw 1;
        else if(cu_year == ex_year && cu_month > ex_month)
            throw 1;
        else if(cu_month == ex_month && cu_date > ex_date)
            throw 1;
        else if(cu_year==ex_year && cu_month==ex_month && cu_date==ex_date)    
            throw 0;
        cout<<"\nProduct is good to use. "<<endl;
    }
};

int main()
{
    char name[30];
    float cost;
    int ex_year, ex_month,ex_date;
    int cu_year,cu_month,cu_date;

    cout<<"Enter name: ";
    gets(name);
    cout<<"Enter price: ";
    cin>>cost;
    cout<<"Enter expirydate: ";
    cout<<"\nyear: ";
    cin>>ex_year;
    cout<<"month: ";
    cin>>ex_month;
    cout<<"date: ";
    cin>>ex_date;
    
    cout<<"Enter current date: ";
    cout<<"\nyear: ";
    cin>>cu_year;
    cout<<"month: ";
    cin>>cu_month;
    cout<<"date: ";
    cin>>cu_date;

    product p_243(name,cost);
    p_243.display();
    cout<<"Expiry data: "<<ex_date<<"."<<ex_month<<"."<<ex_year;
    cout<<"\nCurrent data: "<<cu_date<<"."<<cu_month<<"."<<cu_year<<endl;
    
    try
    {
        if(cu_year > ex_year)
            throw 1;
        else if(cu_year == ex_year && cu_month > ex_month)
            throw 1;
        else if(cu_month == ex_month && cu_date > ex_date)
            throw 1; 
        cout<<"\nProduct is good to use. "<<endl;       
    }

    catch(int a)
    {
        cout<<"\nExpired product. ";
    }
   return 0; 
}
