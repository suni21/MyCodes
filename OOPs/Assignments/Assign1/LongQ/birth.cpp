#include <iostream>
using namespace std;

struct date
{
    int d, m, y;
};

class age
{
    struct date present;
    struct date birthday;

public:
    void setPresent(int dd, int mm, int yy)
    {
        present.d = dd;
        present.m = mm;
        present.y = yy;
    }

    void setBirthday(int dd, int mm, int yy)
    {
        birthday.d = dd;
        birthday.m = mm;
        birthday.y = yy;
    }
    void showAge();
};

void age ::showAge()
{
    int year, months, days;
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    
    if(birthday.d > present.d)
    {
        present.d += month[birthday.m - 1];
        present.m--;
    }

    if(birthday.m > present.m)
    {
        present.y--;
        present.m += 12;
    }

    days = present.d - birthday.d;
    months = present.m - birthday.m;
    year = present.y - birthday.y;
    cout << "Your age is " << year << "years " << months << "months " << days << "days\n";
}

int main()
{
    age ob_243;
    int date_243, m_243, y_243;
    cout << "Enter the present date in ddmmyyyy format: ";
    cin >> date_243 >> m_243 >> y_243;
    ob_243.setPresent(date_243, m_243, y_243);
    cout << "Enter the Birth date in ddmmyyyy format: ";
    cin >> date_243 >> m_243 >> y_243;
    ob_243.setBirthday(date_243, m_243, y_243);

    ob_243.showAge();
    return 0;
}