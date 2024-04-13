#include "time.h"

Time::time()
{

}

int Time::GetHour()
{
    return mHour;
}

void Time::SetHour(int hour)
{
    mHour = hour;
}

int Time::GetMinute()
{
    return mMin;
}

void Time::SetMinute(int minute)
{
    mMin = minute;
}
//================================== To String the Time object=========================================
string Time::ToString()
{
    string outTime;

    outTime = to_string(mHour) + "|";
    outTime += to_string(mMin);

    return outTime;
}

istream & operator >>( istream & input, Time & T )
{
    int index;
    string dd;

    //get line until ,
    getline(input, dd,',');
    //get the location of :
    index = dd.find(":");
    //set the time
    T.SetHour(stoi(dd.substr(0,index)));
    //location of number after :
    T.SetMinute(stoi(dd.substr(index + 1, 2)));

    return input;
}

ostream & operator <<( ostream & os, Time & T )
{
    string outTime;

    outTime = to_string(T.GetHour()) + ":";
    outTime += to_string(T.GetMinute());

    os << outTime;

    return os;
}




























