#include "time.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    Time myTime;

    myTime.SetHour(12);
    myTime.SetMinute(12);

    cout << myTime.ToString(myTime) << endl << endl;

    cout << "Hours: " << myTime.GetHour() << endl;
    cout << "Minute: " << myTime.GetMinute() << endl;
}
