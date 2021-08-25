#include<iostream>  
using namespace std;    

int swap(int *a_243, int *b_243)  
{  
 int temp_243;  
 temp=*a;  
 *a_243=*b_243;  
 *b_243=temp_243;  
 return temp_243;
}  
int main()   
{    
 int a_243=36, b_243=18;    
 swap(&a_243, &b_243); 
 cout<<"Value of x is: "<<a_243<<endl;  
 cout<<"Value of y is: "<<b_243<<endl;  
 return 0;  
}    