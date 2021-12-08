#include <iostream>
#include<string.h>
#include<iomanip>

using namespace std;
class item
{   
	char name[20];
	char code[10];
	float price;
	int quantity;
	float total;

    public:
    friend void cal(item ob_243[],int n_243);
    void getData(char *co_243,char *n_243, float pr_243, int qu_243)
    {
            strcpy(code, co_243);
            strcpy(name, n_243);
            price = pr_243;
            quantity = qu_243;
            total = pr_243 * qu_243;
    }

	void displayitem()
	{
		cout<<left<<setw(7)<<code<<left<<setw(20)<<name<<right<<setw(7)<<price<<right<<setw(15)<<quantity<<right<<setw(7)<<total<<endl;
	}
	
};
void cal(item ob_243[],int n_243)
{
	float total = 0;
	cout<<left<<setw(7)<<"Code "<<left<<setw(20)<<"Name"<<right<<setw(7)<<"Price"<<right<<setw(15)<<"Quantity "<<right<<setw(7)<<"Total"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	for(int i_243 = 0;i_243<n_243;i_243++)
	{
		ob_243[i_243].displayitem();
		total+=ob_243[i_243].total;
	}
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"                                                Total = Rs. "<<total<<endl; 
}

int main()
{
    char name_243[20], code_243[10];
    int n_243, quantity_243;
    float price_243;
  cout<<"Enter the number of items"<<endl;
  cin>>n_243;
  item items_243[n_243];
  cout<<"Enter: "<<endl;
  for(int i_243 = 0;i_243<n_243;i_243++)
  {
  	cout<<"Code: "<<endl;
    getchar();
  	gets(code_243);
  	cout<<"Name: ";
  	gets(name_243);
  	cout<<"Price: ";
  	cin>>price_243;
  	cout<<"Quantity: ";
  	cin>>quantity_243;
    items_243[i_243].getData(code_243,name_243,price_243,quantity_243);  
  }
  cal(items_243,n_243);
  return 0;
}