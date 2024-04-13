#include "dates.h"

Date::Date()
{
    mMonth = '\0';
    mYear = '\0';
}

Date::Date(int month, int year)
{
    mYear = year;
}


Date::Date(int day, int month, int year)
{
    mDay = day;
    mMonth = month;
    mYear = year;
}

int Date::GetDay()
{
    return mDay;
}
void Date::SetDay(int day)
{
    mDay = day;
}

int Date::GetMonth()
{
    return mMonth;
}
void Date::SetMonth(int month)
{
    mMonth = month;
}

int Date::GetYear()
{
    return mYear;
}
void Date::SetYear(int year)
{
    mYear = year;
}

string Date::ToString()
{
    string strDay = to_string(GetDay());
    string strMonth = to_string(GetMonth());
    string strYear = to_string(GetYear());

    string date = strYear + "/" + strMonth + "/" + strDay;

    return date;
}

istream & operator >>( istream & input, Date & D )
{
    string dd, myStringValidate, validate, myDay, myMonth, myYear;
    int elseCounter;

    //get the line till 'Space'
    getline(input, myStringValidate,' ');
    validate = myStringValidate.substr(0,1);

    if((validate == "") || (validate == ",") || (validate == "N/A"))
    {
    }
    else
    {
        stringstream myDate(myStringValidate);
        //Day
        getline(myDate,myDay,'/');
        D.SetDay(stoi(myDay));
        //Month
        getline(myDate,myMonth,'/');
        D.SetMonth(stoi(myMonth));
        //Year
        getline(myDate,myYear,' ');
        D.SetYear(stoi(myYear));
    }
    return input;
}

ostream & operator <<( ostream & os, Date & D )
{
    string outDate;
    Date inDate;
    inDate.SetDay(D.GetDay());
    inDate.SetMonth(D.GetMonth());
    inDate.SetYear(D.GetYear());

    outDate = to_string(D.GetDay()) + "/" + to_string(D.GetMonth()) + "/" + to_string(D.GetYear());

    os << outDate;

    return os;
}





















