#include <iostream>
#include "Date.h"

using namespace std;

int main()
{


Date d1; // static object

int d_day, d_month, d_year;


cout<<"Input Day:";
cin >> d_day;

cout<<"Input Month :";
cin >> d_month;

cout<<"Input Year:";
cin >> d_year;

d1.setDay(d_day);
d1.setMonth( d_month);
d1.setYear(d_year);

cout<<d1.getDay()<<"/"<<d1.getMonth()<<"/"<<d1.getYear()<<endl;

    return 0;
}

