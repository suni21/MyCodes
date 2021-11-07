#include <iostream>
#include <math.h>
using namespace std;

class point
{
    int x, y;
    double dis;

public:
    void getdata()
    {
        cout << "Enter x and y coordinates: " << endl;
        cin >> x >> y;
    }
    double calc(point p_243, point q_243)
    {

        dis = sqrt((p_243.x - q_243.x) * (p_243.x - q_243.x) + (p_243.y - q_243.y) * (p_243.y - q_243.y));
        return dis;
    }
    void displaydata()
    {
        cout << "\nDistance between two point: " << dis;
    }
};
int main()
{
    point p1_243, p2_243, p3_243;
    p1_243.getdata();
    p2_243.getdata();
    p3_243.calc(p1_243, p2_243);
    p3_243.displaydata();
    return 0;
}