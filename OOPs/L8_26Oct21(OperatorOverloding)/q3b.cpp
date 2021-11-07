#include <iostream>
using namespace std;
class time
{
private:
    int hr_243, mm_243, ss_243;

public:
    time()
    {
        hr_243 = 0;
        mm_243 = 0;
        ss_243 = 0;
    }
    time(int a_243, int b_243, int c_243)
    {
        hr_243 = a_243;
        mm_243 = b_243;
        ss_243 = c_243;
    }
    void display()
    {
        cout << hr_243 << " hr " << mm_243 << " mm " << ss_243 << " ss ";
    }
    friend time operator++(time &t1_243)
    {
        ++t1_243.ss_243;
        if (t1_243.ss_243 > 60)
        {
            t1_243.ss_243 = 0;
            ++t1_243.mm_243;
        }
        if (t1_243.mm_243 > 60)
        {
            t1_243.mm_243 = 0;
            ++t1_243.hr_243;
        }
        if (t1_243.hr_243 > 23)
        {
            t1_243.hr_243 = 0;
        }
    }
    friend time operator--(time &t1_243)
    {
        --t1_243.ss_243;
        if (t1_243.ss_243 < 0)
        {
            t1_243.ss_243 = 59;
            --t1_243.mm_243;
        }
        if (t1_243.mm_243 < 0)
        {
            t1_243.mm_243 = 59;
            --t1_243.hr_243;
        }
        if (t1_243.hr_243 < 0)
        {
            t1_243.hr_243 = 23;
        }
    }
};
int main()
{
    time t_243(5, 5, 5);
    ++t_243;
    t_243.display();
    --t_243;
    t_243.display();
    return 0;
}
