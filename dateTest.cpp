#include "dates.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    Date myDate;

    myDate.SetDay(20);
    myDate.SetMonth(06);
    myDate.SetYear(2203);

    cout << myDate.ToDate(myDate) << endl << endl;

    cout << "Day: " << myDate.GetDay() << endl;
    cout << "Month: " << myDate.GetMonth() << endl;
    cout << "Year: " << myDate.GetYear() << endl;
}
