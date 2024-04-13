// Time.H - Unit class definition
// author Yu Xiang

#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Time
{
private:
    int mHour;
    int mMin;
public:
    time();
    //Getter and setter
    int GetHour();
    void SetHour(int hour);
    int GetMinute();
    void SetMinute(int minute);
    //To string the Time object
    string ToString();

};

ostream & operator <<( ostream & os, Time & T );
istream & operator >>( istream & input, Time & T );


#endif // TIME_H_INCLUDED
