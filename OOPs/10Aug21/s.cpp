#include <iostream>
using namespace std;
void print(char c='*', int n=80)
{
    for(int i=0;i< n;i++)
    {
        cout << c;
    }
    cout << endl;
}

int main()
{
    cout <<"\n";
    print();
    cout << "\n";
    print('!');
    cout << "\n";
    print('+', 55);
    return 0;
}
c1_243.readData();
    c2_243.readData();
    c3_243=c3_243.add(c1_243,c2_243);
    c3_243=c3_243.add(a_243, c2_243);
    c3_243.displaydata();
    return 0;
}