#include <iostream>
#include <sstream>
#include <limits>
#include <string>
#include <fstream>
#include "windlog.h"
#include "vector.h"
#include "dates.h"
#include "time.h"
using namespace std;

int main()
{
    WindLogType myWindLogVec;
    WindLogType getWindLogVec;
    Windlog windlog;
    Date myDate;
    Time myTime;
    int getSize;

    myDate.SetDay(12);
    myDate.SetMonth(12);
    myDate.SetYear(2012);

    myTime.SetHour(12);
    myTime.SetMinute(12);

    myWindLogVec.d = myDate;
    myWindLogVec.t = myTime;
    myWindLogVec.speed = 20.2;
    myWindLogVec.solarRadiation = 200.2;
    myWindLogVec.temperature = 37.6;

    windlog.SetWindLog(myWindLogVec);

    getSize = windlog.GetSize();
    cout << "Size of Vector: " << getSize << endl;

    getWindLogVec = windlog.Get(0);
    cout << "Get the element of WindLogVector" << endl;
    cout << "Date: " << getWindLogVec.d << "\nTime: " << getWindLogVec.t << "\nSpeed: " << getWindLogVec.speed << "\nTemp: " << getWindLogVec.temperature << "\nSR: " << getWindLogVec.solarRadiation << endl;

}
