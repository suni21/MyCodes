#include <iostream>
using namespace std;

int main()
{
int i;
for(i = 1; i <= 6; i += 2)
{
if(i%2 == 0)
cout << i++ << "*\n";
else
cout << ++i << "#\n";
}
cout << i << "*\n";
return 0;
}