// WindLog.H - Unit class definition
// author Yu Xiang

#ifndef WINDLOG_H_INCLUDED
#define WINDLOG_H_INCLUDED

#include <string>
#include <cstring>
#include <iostream>
#include <sstream>
#include <limits>
#include <cmath>
#include <fstream>
#include "Dates.h"
#include "time.h"
#include "vector.h"
#include "BST.h"
#include <cstring>
#include <cstdlib>
#include <map>

using namespace std;

typedef struct
{
    Date d;
    Time t;
    float speed;
    float temperature;
    float solarRadiation;
} WindLogType;

typedef struct
{
    float speed;

} SpeedArray;

typedef struct
{
    float temp;

} TempArray;

//BST to store the year and month..
template<class Date>
BST<Date> storedDate;

class Windlog
{
private:
    Vector<SpeedArray>mSpeedvect;
    Vector<TempArray>mTempvect;

    unsigned int speedCounter, tempCounter;
    string stringmonthHolder[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    //map STL
    map<string,WindLogType> windMap2007;
    map<string,WindLogType> windMap2008;
    map<string,WindLogType> windMap2009;
    map<string,WindLogType> windMap2010;
    map<string,WindLogType> windMap2011;
    map<string,WindLogType> windMap2012;
    map<string,WindLogType> windMap2013;
    map<string,WindLogType> windMap2014;
    map<string,WindLogType> windMap2015;
    map<string,WindLogType> windMap2016;
    map<string,WindLogType> windMap2021;
public:

    Windlog();
    void SetSpeed(SpeedArray & speed);
    void SetTemp(TempArray & temp);

    //Get the size of the the vector REMOVE
    unsigned int GetSpeedSize();
    unsigned int GetTempSize();

    //Get the element at specific index
    SpeedArray GetSpeed(unsigned int index);
    TempArray GetTemp(unsigned int index);

    //Revise the current element count
    SpeedArray DeleteSpeed(unsigned int index);
    TempArray DeleteTemp(unsigned int index);

    //Get the average
    float GetAverageSpeed(int month, int year);
    float GetAverageTemp(int month, int year);

    //Get the Standard Deviation
    float GetSpeedSD(float average);
    float GetTempSD(float avgTemp);

    //Get the total solar radiation
    float GetTotalSR(int month, int year);

    //Print out the results
    void PrintSpeed(int userMonth, int userYear, float avg, float sd);
    void PrintTemp(int userYear, float avgTempArr[12], float sdTempArr[12]);
    void PrintSR(int userYear, float srTotalArr[12]);

    //Print to CSV file
    void PrintToFile(string filename, int userYear);

    //Menu for user
    void Menu();

    //insert data into BST
    void InsertBst(Date inDate);
    //Call in order
    void CallInorder();
    //Insert data into respective Maps
    void InsertMap(string key, WindLogType windLog);
    //Get the total speed
    float GetTotalSpeed(int month, int year);
    //Get the total temperature
    float GetTotalTemp(int month, int year);

    //Get boolean of whether data exist in BST
    bool BstSearch(int year);

    //bonus
    void DeleteBST();
    void DeleteMAP();
};

//declare speed max function
std::ostream & operator <<(ostream &osObject, Windlog & W);
std::istream & operator >>(istream &input, Windlog & W);

//operator overload for BST
bool operator<(Date & myDate, Date & tempDate);
bool operator>(Date & myDate, Date & tempDate);
bool operator==(Date & myDate, Date & tempDate);

#endif // WINDLOG_H_INCLUDED
