// Dates.H - Unit class definition
// author Yu Xiang

#ifndef DATES_H_INCLUDED
#define DATES_H_INCLUDED

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Date
{
private:
    int mDay;
    int mMonth;
    int mYear;
public:

    Date();

    //BST date format.. just year
    Date(int month, int year);

    Date(int day, int month, int year);

    //getter and setter
    int GetDay();
    void SetDay(int day);
    int GetMonth();
    void SetMonth(int month);
    int GetYear();
    void SetYear(int year);

    //To string Date object
    string ToString();
};

ostream & operator <<( ostream & os, Date & D );
istream & operator >>( istream & input, Date & D );

#endif // DATES_H_INCLUDED
