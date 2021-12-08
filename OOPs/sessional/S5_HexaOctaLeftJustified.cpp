#include <iostream>
#include<iomanip>

using namespace std;
class number
{
protected:
    int val;

public:
    void setData(int i)
    {
        val = i;
    }
void showData()
{
    cout<<left<<setw(10)<<val<<left<<setw(10)<<hex<<val<<left<<setw(10)<<oct<<val<<endl;
}
};

int main()
{
    number ptr_243;
    cout<<left<<setw(10)<<"Decimal"<<left<<setw(10)<<"Hecxa  "<<left<<setw(10)<<"Octa"<<endl;
    ptr_243.setData(100.30);
    ptr_243.showData();
   return 0; 
}     