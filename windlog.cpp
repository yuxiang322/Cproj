#include "dates.h"
#include "time.h"
#include "windlog.h"
#include "vector.h"

using namespace std;

Windlog::Windlog()
{
}

void Windlog::SetSpeed(SpeedArray & speed)
{
    //push from vector.h
    mSpeedvect.AddElement(speed);
}

void Windlog::SetTemp(TempArray & temp)
{
    //push from vector.h
    mTempvect.AddElement(temp);
}

SpeedArray Windlog::GetSpeed(unsigned int index)
{
    SpeedArray speedVectArray;
    speedVectArray = mSpeedvect.GetElement(index);
}

SpeedArray Windlog::DeleteSpeed(unsigned int index)
{
    mSpeedvect.DeleteElement();
}

unsigned int Windlog::GetSpeedSize()
{
    return(mSpeedvect.GetSize());
}

TempArray Windlog::GetTemp(unsigned int index)
{
    TempArray tempVectArray;
    tempVectArray = mTempvect.GetElement(index);
}

TempArray Windlog::DeleteTemp(unsigned int index)
{
    mTempvect.DeleteElement();
}

unsigned int Windlog::GetTempSize()
{
    return(mTempvect.GetSize());
}

//Function for total speed...
float Windlog::GetTotalSpeed(int month, int year)
{
    float totalSpeed = 0;
    string key,validateKey,monthKey;
    int intMonthKey;
    //itr
    map<string,WindLogType> :: iterator itr;
    //initialize speed counter
    speedCounter = 0;

    //Speed vector
    SpeedArray speedVectArray;

    switch(year)
    {
    case 2007:
        for(itr = windMap2007.begin(); itr != windMap2007.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalSpeed += windLog.speed;
                //Make use of the vector to store the speeds...
                speedVectArray.speed = windLog.speed;
                SetSpeed(speedVectArray);
                speedCounter++;
            }
        }
        break;
    case 2008:
        for(itr = windMap2008.begin(); itr != windMap2008.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalSpeed += windLog.speed;
                //Make use of the vector to store the speeds...
                speedVectArray.speed = windLog.speed;
                SetSpeed(speedVectArray);
                speedCounter++;
            }
        }
        break;
    case 2009:
        for(itr = windMap2009.begin(); itr != windMap2009.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalSpeed += windLog.speed;
                //Make use of the vector to store the speeds...
                speedVectArray.speed = windLog.speed;
                SetSpeed(speedVectArray);
                speedCounter++;
            }
        }
        break;
    case 2010:
        for(itr = windMap2010.begin(); itr != windMap2010.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalSpeed += windLog.speed;
                //Make use of the vector to store the speeds...
                speedVectArray.speed = windLog.speed;
                SetSpeed(speedVectArray);
                speedCounter++;
            }
        }
        break;
    case 2011:
        for(itr = windMap2011.begin(); itr != windMap2011.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalSpeed += windLog.speed;
                //Make use of the vector to store the speeds...
                speedVectArray.speed = windLog.speed;
                SetSpeed(speedVectArray);
                speedCounter++;
            }
        }
        break;
    case 2012:
        for(itr = windMap2012.begin(); itr != windMap2012.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalSpeed += windLog.speed;
                //Make use of the vector to store the speeds...
                speedVectArray.speed = windLog.speed;
                SetSpeed(speedVectArray);
                speedCounter++;
            }
        }
        break;
    case 2013:
        for(itr = windMap2013.begin(); itr != windMap2013.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalSpeed += windLog.speed;
                //Make use of the vector to store the speeds...
                speedVectArray.speed = windLog.speed;
                SetSpeed(speedVectArray);
                speedCounter++;
            }
        }
        break;
    case 2014:
        for(itr = windMap2014.begin(); itr != windMap2014.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalSpeed += windLog.speed;
                //Make use of the vector to store the speeds...
                speedVectArray.speed = windLog.speed;
                SetSpeed(speedVectArray);
                speedCounter++;
            }
        }
        break;
    case 2015:
        for(itr = windMap2015.begin(); itr != windMap2015.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalSpeed += windLog.speed;
                //Make use of the vector to store the speeds...
                speedVectArray.speed = windLog.speed;
                SetSpeed(speedVectArray);
                speedCounter++;
            }
        }
        break;
    case 2016:
        for(itr = windMap2016.begin(); itr != windMap2016.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalSpeed += windLog.speed;
                //Make use of the vector to store the speeds...
                speedVectArray.speed = windLog.speed;
                SetSpeed(speedVectArray);
                speedCounter++;
            }
        }
        break;
    case 2021:
        for(itr = windMap2021.begin(); itr != windMap2021.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalSpeed += windLog.speed;
                //Make use of the vector to store the speeds...
                speedVectArray.speed = windLog.speed;
                SetSpeed(speedVectArray);
                speedCounter++;
            }
        }
        break;
    }
    return totalSpeed;
}

//=========================================Get average speed for specific month and year=========================
float Windlog::GetAverageSpeed(int month, int year)
{
    float totalSpeed = 0;
    float averageSpeed = 0;
    WindLogType windLog;

    //Use User year and Month
    totalSpeed = GetTotalSpeed(month, year);
    if(speedCounter == 0)
    {
        averageSpeed = 0;
    }
    else
    {
        averageSpeed = (totalSpeed / speedCounter);
    }
    return averageSpeed;
}

//=========================================Get Speed SD for specific month and year========================
float Windlog::GetSpeedSD(float average)
{
    float total = 0;
    float divSum;
    float standardDev;
    float tempFloat;
    //speedarray
    SpeedArray speedVectArray;
    unsigned int tempSize;

    if(average == 0)
    {
        standardDev = 0;
    }
    else
    {
        for(unsigned int i = 0; i < speedCounter; i++)
        {
            speedVectArray = GetSpeed(i);
            tempFloat = speedVectArray.speed;
            tempFloat = (tempFloat - average);
            total = total + ((tempFloat)*(tempFloat));
        }

        divSum = total/speedCounter;

        standardDev = sqrt(divSum);
    }
    //initialise speed vector
    tempSize = GetSpeedSize();
    for(int i = 0; i < tempSize; i++)
    {
        DeleteSpeed(i);
    }
    return standardDev;
}

//======================================================Print Speed===============================================================
void Windlog::PrintSpeed(int userMonth, int userYear, float avg, float sd)
{
    string strAvg, strSD;
    string month;

    strAvg = to_string(avg);
    strSD = to_string(sd);
    month = stringmonthHolder[userMonth - 1];

    cout << "\n\n============================Average and Standard Deviation=============================" << endl;
    cout << month << " Year " << userYear << ":";
    cout << "\nAverage speed: " << strAvg << " km/h \nSample stdev: " << strSD << endl;
}

//Function for total speed...
float Windlog::GetTotalTemp(int month, int year)
{
    float totalTemp = 0;
    string key,validateKey,monthKey;
    int intMonthKey;
    //itr
    map<string,WindLogType> :: iterator itr;

    //initialize speed counter
    tempCounter = 0;

    //Temp vector
    TempArray tempVectArray;

    switch(year)
    {
    case 2007:
        for(itr = windMap2007.begin(); itr != windMap2007.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalTemp += windLog.temperature;
                //Make use of the vector to store the speeds...
                tempVectArray.temp = windLog.temperature;
                SetTemp(tempVectArray);
                tempCounter++;
            }
        }
        break;
    case 2008:
        for(itr = windMap2008.begin(); itr != windMap2008.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalTemp += windLog.temperature;
                //Make use of the vector to store the speeds...
                tempVectArray.temp = windLog.temperature;
                SetTemp(tempVectArray);
                tempCounter++;
            }
        }
        break;
    case 2009:
        for(itr = windMap2009.begin(); itr != windMap2009.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalTemp += windLog.temperature;
                //Make use of the vector to store the speeds...
                tempVectArray.temp = windLog.temperature;
                SetTemp(tempVectArray);
                tempCounter++;
            }
        }
        break;
    case 2010:
        for(itr = windMap2010.begin(); itr != windMap2010.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalTemp += windLog.temperature;
                //Make use of the vector to store the speeds...
                tempVectArray.temp = windLog.temperature;
                SetTemp(tempVectArray);
                tempCounter++;
            }
        }
        break;
    case 2011:
        for(itr = windMap2011.begin(); itr != windMap2011.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalTemp += windLog.temperature;
                //Make use of the vector to store the speeds...
                tempVectArray.temp = windLog.temperature;
                SetTemp(tempVectArray);
                tempCounter++;
            }
        }
        break;
    case 2012:
        for(itr = windMap2012.begin(); itr != windMap2012.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalTemp += windLog.temperature;
                //Make use of the vector to store the speeds...
                tempVectArray.temp = windLog.temperature;
                SetTemp(tempVectArray);
                tempCounter++;
            }
        }
        break;
    case 2013:
        for(itr = windMap2013.begin(); itr != windMap2013.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalTemp += windLog.temperature;
                //Make use of the vector to store the speeds...
                tempVectArray.temp = windLog.temperature;
                SetTemp(tempVectArray);
                tempCounter++;
            }
        }
        break;
    case 2014:
        for(itr = windMap2014.begin(); itr != windMap2014.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalTemp += windLog.temperature;
                //Make use of the vector to store the speeds...
                tempVectArray.temp = windLog.temperature;
                SetTemp(tempVectArray);
                tempCounter++;
            }
        }
        break;
    case 2015:
        for(itr = windMap2015.begin(); itr != windMap2015.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalTemp += windLog.temperature;
                //Make use of the vector to store the speeds...
                tempVectArray.temp = windLog.temperature;
                SetTemp(tempVectArray);
                tempCounter++;
            }
        }
        break;
    case 2016:
        for(itr = windMap2016.begin(); itr != windMap2016.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalTemp += windLog.temperature;
                //Make use of the vector to store the speeds...
                tempVectArray.temp = windLog.temperature;
                SetTemp(tempVectArray);
                tempCounter++;
            }
        }
        break;
    case 2021:
        for(itr = windMap2021.begin(); itr != windMap2021.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalTemp += windLog.temperature;
                //Make use of the vector to store the speeds...
                tempVectArray.temp = windLog.temperature;
                SetTemp(tempVectArray);
                tempCounter++;
            }
        }
        break;
    }
    return totalTemp;
}

//===================== Get average Air temperature of each month specific year ===================================================
float Windlog::GetAverageTemp(int month, int year)
{
    float totalTemp = 0;
    float averageTemp = 0;
    WindLogType windLog;

    totalTemp = GetTotalTemp(month, year);

    if(tempCounter == 0)
    {
        averageTemp = 0;
    }
    else
    {
        averageTemp = (totalTemp / tempCounter);
    }
    return averageTemp;
}

//====================================================== SD for temperature =========================================================
float Windlog::GetTempSD(float avgTemp)
{
    float tempTotal;
    float tempDivSum;
    float tempStandardDev;
    float tempFloat;
    TempArray tempVectArray;
    unsigned int tempSize;

    if(avgTemp == 0)
    {
        tempStandardDev = 0;
    }
    else
    {
        for(unsigned int j = 0; j < tempCounter; j++)
        {
            tempVectArray = GetTemp(j);
            tempFloat = tempVectArray.temp;
            tempFloat = (tempFloat - avgTemp);
            tempTotal = tempTotal + ((tempFloat)*(tempFloat));
        }
        tempDivSum = (tempTotal/tempCounter);
        tempStandardDev = sqrt(tempDivSum);
    }
    //initialize
    tempSize = GetTempSize();
    for(int i = 0; i < tempSize; i++)
    {
        DeleteTemp(i);
    }
    return tempStandardDev;
}

//=================================== PRINT out temperature ==========================================================================
void Windlog::PrintTemp(int userYear, float avgTempArr[12], float sdTempArr[12])
{
    string strAvg;
    string strSD;

    cout << "\n\n============================Average and Standard Deviation=============================" << endl;
    cout << "Year: " << userYear << endl;
    for(int i = 0; i < 12; i++)
    {
        //if no data
        if((avgTempArr[i] == 0) && (sdTempArr[i] == 0))
        {
            cout << stringmonthHolder[i] << ": No Data" << endl;
        }
        else
        {
            //convert
            strAvg = to_string(avgTempArr[i]);
            strSD = to_string(sdTempArr[i]);
            cout << stringmonthHolder[i] << ": average: " << strAvg << "," << " stdev:" << strSD << endl;
        }
    }
}

//========================================= Total Radiation ========================================================================
float Windlog::GetTotalSR(int month, int year)
{
    float totalSR = 0;
    string key,validateKey,monthKey;
    int intMonthKey;

    //itr
    map<string,WindLogType> :: iterator itr;
    switch(year)
    {
    case 2007:
        for(itr = windMap2007.begin(); itr != windMap2007.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalSR += windLog.solarRadiation;
            }
        }
        break;
    case 2008:
        for(itr = windMap2008.begin(); itr != windMap2008.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalSR += windLog.solarRadiation;
            }
        }
        break;
    case 2009:
        for(itr = windMap2009.begin(); itr != windMap2009.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalSR += windLog.solarRadiation;
            }
        }
        break;
    case 2010:
        for(itr = windMap2010.begin(); itr != windMap2010.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalSR += windLog.solarRadiation;
            }
        }
        break;
    case 2011:
        for(itr = windMap2011.begin(); itr != windMap2011.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalSR += windLog.solarRadiation;
            }
        }
        break;
    case 2012:
        for(itr = windMap2012.begin(); itr != windMap2012.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalSR += windLog.solarRadiation;
            }
        }
        break;
    case 2013:
        for(itr = windMap2013.begin(); itr != windMap2013.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalSR += windLog.solarRadiation;
            }
        }
        break;
    case 2014:
        for(itr = windMap2014.begin(); itr != windMap2014.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalSR += windLog.solarRadiation;
            }
        }
        break;
    case 2015:
        for(itr = windMap2015.begin(); itr != windMap2015.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalSR += windLog.solarRadiation;
            }
        }
        break;
    case 2016:
        for(itr = windMap2016.begin(); itr != windMap2016.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalSR += windLog.solarRadiation;
            }
        }
        break;
    case 2021:
        for(itr = windMap2021.begin(); itr != windMap2021.end(); itr++)
        {
            //Get Object from map
            WindLogType windLog;
            windLog = itr->second;
            //assign key of every record
            key = itr->first;
            //String stream to validate the month
            stringstream ss(key);
            //remove first **/ YEAR
            getline(ss,validateKey,'/');
            //get the month
            getline(ss,monthKey,'/');
            intMonthKey = stoi(monthKey);

            //Validate month if True add speed to total
            if(intMonthKey == month)
            {
                totalSR += windLog.solarRadiation;
            }
        }
        break;
    }
    return totalSR;
}

//============================================== SR print =======================================================
void Windlog::PrintSR(int userYear, float srTotalArr[12])
{
    string strTotal;
    cout << "\n\n============================ Total SR =============================" << endl;
    cout << "Year: " << userYear << endl;
    for(int i = 0; i < 12; i++)
    {
        //if no data
        if(srTotalArr[i] == 0)
        {
            cout << stringmonthHolder[i] << ": No Data" << endl;
        }
        else
        {
            //convert
            strTotal = to_string(srTotalArr[i]);
            cout << stringmonthHolder[i] << ": " << strTotal << " kWh/m2" << endl;
        }
    }
}

//=============================================== Write to CSV file ===============================================
void Windlog::PrintToFile(string filename, int userYear)
{
    float speedHolderAvg[12] = {0}; //for Speed
    float speedHolderSD[12] = {0}; //for Speed
    float tempHolderAvg[12] = {0}; //for TEMP
    float tempHolderSD[12] = {0}; //for TEMP
    float holderTotal[12] = {0}; //for SR
    int monthIndexHolder[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    string speedToPrint, speedToPrintSD;
    string tempToPrint, tempToPrintSD;
    string printSR;
    string myMonth;

    for(int i = 0; i < 12; i++)
    {
        //Speed average
        speedHolderAvg[i] = GetAverageSpeed(monthIndexHolder[i], userYear);
        //speed SD
        speedHolderSD[i] = GetSpeedSD(speedHolderAvg[i]);
        //TEMP average
        tempHolderAvg[i] = GetAverageTemp(monthIndexHolder[i], userYear); // need to pass in the MONTH
        //TEMP standard deviation
        tempHolderSD[i] = GetTempSD(tempHolderAvg[i]);
        //total SR
        holderTotal[i] = GetTotalSR(monthIndexHolder[i], userYear); // need to pass in the MONTH
    }
    //Write to file
    ofstream outFile(filename);
    //header
    outFile << "Year " << to_string(userYear) << "\n";
    //write the lines
    for(int i = 0; i < 12; i++)
    {
        myMonth = stringmonthHolder[i];
        //Speed Avg and SD
        if(speedHolderAvg[i] == 0)
        {
            speedToPrint = "";
        }
        else
        {
            speedToPrint = to_string(speedHolderAvg[i]);
        }
        if(speedHolderSD[i] == 0)
        {
            speedToPrintSD = "";
        }
        else
        {
            speedToPrintSD = to_string(speedHolderSD[i]);
        }
        //Temp avg and sd
        if(tempHolderAvg[i] == 0)
        {
            tempToPrint = "";
        }
        else
        {
            tempToPrint = to_string(tempHolderAvg[i]);
        }
        if(tempHolderSD[i] == 0)
        {
            tempToPrintSD = "";
        }
        else
        {
            tempToPrintSD = to_string(tempHolderSD[i]);
        }
        //total SR
        if(holderTotal[i] == 0)
        {
            printSR = "";
        }
        else
        {
            printSR = to_string(holderTotal[i]);
        }

        //Validate whether if all has data
        if((speedHolderAvg[i] == 0) && (speedHolderSD[i] == 0) && (holderTotal[i] == 0))
        {
            outFile << "" << "\n";
        }
        else
        {
            outFile << myMonth << "," << speedToPrint << "(" << speedToPrintSD << ")" << "," <<
                    tempToPrint << "(" << tempToPrintSD << ")" << "," << printSR << "\n";
        }
    }
    outFile.close();
    cout << "\nData is printed out to WindTempSolar.csv" << endl << endl;
}

//inserting data into BST
void Windlog::InsertBst(Date inDate)
{
    storedDate<Date>.InsertData(inDate);
}

//Calling in order
void Windlog::CallInorder()
{
    //Call in Order...
    storedDate<Date>.InOrder();
}


//Insert Data into Respective map
void Windlog::InsertMap(string key, WindLogType windLog)
{
    string year;
    int intYear;
    //Based on mapKey first getline "/" insert respectively
    //SS the KEY
    stringstream ss(key);
    //Get the YEAR of the Record to be inserted..
    getline(ss, year, '/');
    //convert to int
    intYear = stoi(year);
    //insert into respective MAPS

    switch(intYear)
    {
    case 2007:
        windMap2007.insert(pair <string,WindLogType> (key,windLog));
        break;
    case 2008:
        windMap2008.insert(pair <string,WindLogType> (key,windLog));
        break;
    case 2009:
        windMap2009.insert(pair <string,WindLogType> (key,windLog));
        break;
    case 2010:
        windMap2010.insert(pair <string,WindLogType> (key,windLog));
        break;
    case 2011:
        windMap2011.insert(pair <string,WindLogType> (key,windLog));
        break;
    case 2012:
        windMap2012.insert(pair <string,WindLogType> (key,windLog));
        break;
    case 2013:
        windMap2013.insert(pair <string,WindLogType> (key,windLog));
        break;
    case 2014:
        windMap2014.insert(pair <string,WindLogType> (key,windLog));
        break;
    case 2015:
        windMap2015.insert(pair <string,WindLogType> (key,windLog));
        break;
    case 2016:
        windMap2016.insert(pair <string,WindLogType> (key,windLog));
        break;
    case 2021:
        windMap2021.insert(pair <string,WindLogType> (key,windLog));
        break;
    }
}

//BST Search
bool Windlog::BstSearch(int year)
{
    return storedDate<Date>.Search(year);
}

//=================================================================== Menu ==========================================================================
void Windlog::Menu()
{
    int userMenuChoice, userYear, userMonth;
    float speedHolderAvg[12] = {0}; //for Speed
    float speedHolderSD[12] = {0}; //for Speed
    float tempHolderAvg[12] = {0}; //for TEMP
    float tempHolderSD[12] = {0}; //for TEMP
    float holderTotal[12] = {0}; //for SR
    int monthIndexHolder[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    string theMonth;

    do
    {
        cout << "\n\n1. Calculate the average wind speed and sample standard deviation given a specified month and year." << endl
             << "2. Calculate the average ambient air temperature and sample standard deviation for each month given a specified year." << endl
             << "3. Calculate the total solar radiation for each month given a specified year." << endl
             << "4. Output data to file: WindTempSolar.csv" << endl
             << "5. Clear all Data and Reloading of Data from met_index.txt" << endl
             << "6. Exit the program." << endl;

        cout << "Enter choice 1-6: ";
        cin >> userMenuChoice;

        switch(userMenuChoice)
        {

        case 1:
            float avgSpd, spdSD;
            //get Year
            while(true)
            {
                cout << "Enter the Year: ";
                cin >> userYear;
                if(!cin)
                {
                    cout << "Invalid value. Enter again: " << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(),'\n');
                    continue;
                }
                else
                {
                    break;
                }
            }
            //get Month
            while(true)
            {
                cout << "Enter the Month 1-12: ";

                while(true)
                {
                    cin >> userMonth;
                    if(!cin)
                    {
                        cout << "Invalid value. Enter again: " << endl;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(),'\n');
                        continue;
                    }
                    else
                    {
                        break;
                    }

                }

                if((userMonth >= 1) && (userMonth <= 12))
                {
                    break;
                }
                else
                {
                    cout << "Invalid input detected!" << endl;
                }
            }
            //Validate for data inside BST... Year
            if(BstSearch(userYear))
            {
                //Get the Average speed
                avgSpd = GetAverageSpeed(userMonth, userYear);
                //Get the Speed SD
                spdSD = GetSpeedSD(avgSpd);
                //Print the Speed
                PrintSpeed(userMonth, userYear, avgSpd, spdSD);
            }
            else
            {
                theMonth = stringmonthHolder[userMonth - 1];
                cout << "\n\n============================Average and Standard Deviation=============================" << endl;
                cout << theMonth << " Year " << userYear << ":";
                cout << " No Data" << endl;
            }
            break;
        case 2:
            while(true)
            {
                cout << "Enter the Year: ";
                cin >> userYear;
                if(!cin)
                {
                    cout << "Invalid value. Enter again: " << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(),'\n');
                    continue;
                }
                else
                {
                    break;
                }
            }
            //Validate for data inside BST... Year
            if(BstSearch(userYear)) //true
            {
                for(int i = 0; i < 12; i++)
                {
                    //average Temp for each month of specified year
                    tempHolderAvg[i] = GetAverageTemp(monthIndexHolder[i], userYear);
                    //standard deviation for each month of specified year
                    tempHolderSD[i] = GetTempSD(tempHolderAvg[i]);
                }
                //print temperature
                PrintTemp(userYear,tempHolderAvg,tempHolderSD);
            }
            else
            {
                cout << "\n\n============================Average and Standard Deviation=============================" << endl;
                cout << " Year " << userYear << ":";
                cout << " No Data" << endl;
            }

            break;
        case 3:
            while(true)
            {
                cout << "Enter the Year: ";
                cin >> userYear;
                if(!cin)
                {
                    cout << "Invalid value. Enter again: " << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(),'\n');
                    continue;
                }
                else
                {
                    break;
                }
            }
            //Validate for data inside BST... Year
            if(BstSearch(userYear))
            {
                for(int i = 0; i < 12; i++)
                {
                    //Total SR for each month of the year
                    holderTotal[i] = GetTotalSR(monthIndexHolder[i], userYear); // need to pass in the MONTH
                }
                //print SR
                PrintSR(userYear, holderTotal);
            }
            else
            {
                cout << "\n\n============================Average and Standard Deviation=============================" << endl;
                cout << " Year " << userYear << ":";
                cout << " No Data" << endl;
            }

            break;
        case 4:
            while(true)
            {
                cout << "Enter the Year: ";
                cin >> userYear;
                if(!cin)
                {
                    cout << "Invalid value. Enter again: " << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(),'\n');
                    continue;
                }
                else
                {
                    break;
                }
            }
            //Write to CSV file
            PrintToFile("WindTempSolar.csv", userYear);
            break;
        case 5:
        {
            string myString,inFile;
            char choice;
            Windlog windLog;
            ifstream dataFile("met_index.txt");

            cout << "This will Discard all Data and Reload the new Data from: met_index.txt\nEnter Y/n: " << endl;
            cin >> choice;

            if(toupper(choice) == 'Y')
            {
                cout << "Discarding Data and Reloading Data from: met_index.txt" << endl;
                //Discard all data in BST and MAPS
                DeleteBST();
                DeleteMAP();
                if( !dataFile )
                {
                    cout << "File not file" << endl;
                }

                cout << "Data is loading..." << endl;
                while(getline(dataFile, myString))
                {
                    inFile = myString;

                    cout << "File Loaded:  " << inFile << endl;

                    ifstream infile(inFile);

                    if( !infile )
                    {
                        cout << "File not file" << endl;
                    }
                    //read data
                    infile >> windLog;
                }

                windLog.CallInorder();
                windLog.Menu();
            }
            else
            {
                cout << "Invalid Entry." << endl;
            }

        }
        break;

        case 6:
            cout << "Exited Program" << endl << endl;
            break;
        }
    }
    while(userMenuChoice != 6);
}

istream & operator >>(istream &input, Windlog & W)
{
    string dd;
    unsigned int indexOne,indexTwo,sIndex,srIndex,tempIndex;
    WindLogType windLogType;
    string headerHolder[18];
    string myString;
    string validateString;
    string validate;
    string mapKey;
    int month = 0;
    //First row is data not needed
    getline(input,validateString, '\n');
    //insert to array.
    stringstream data(validateString);
    for(int i = 0; i < 18; i++)
    {
        getline(data, myString, ',');
        headerHolder[i] = myString;
    }
    //get Indexes
    for(int i = 0; i < 18; i++)
    {
        if(headerHolder[i] == "S")
        {
            //sIndex = i - 2;
            sIndex = i;
        }
        if(headerHolder[i] == "SR")
        {
            //srIndex = i - 2;
            srIndex = i;
        }
        if(headerHolder[i] == "T")
        {
            //tempIndex = i - 2;
            tempIndex = i;
        }
    }
    while(input.peek() != EOF)
    {
        input >> windLogType.d;
        input >> windLogType.t;
        getline(input,dd);
        //check for dd
        validate = dd.substr(0,3);
        //cout << validate << endl;
        //get the string in DD
        if(validate == "\0")
        {
            cout << "N/A and Empty found" << endl;
        }
        else
        {
            string myData;
            stringstream inData(dd);
            int indexCounter = 1;

            while(getline(inData,myData,','))
            {
                if(indexCounter == sIndex)
                {
                    if(myData == "N/A")
                    {
                        windLogType.speed = 0;
                    }
                    else
                    {
                        windLogType.speed = stof(myData) * 3.6;
                    }
                }
                if(indexCounter == srIndex)
                {
                    if(myData == "N/A")
                    {
                        windLogType.solarRadiation = 0;
                    }
                    else
                    {
                        windLogType.solarRadiation = stof(myData);
                    }
                }
                if(indexCounter == tempIndex)
                {
                    if(myData == "N/A")
                    {
                        windLogType.temperature = 0;
                    }
                    else
                    {
                        windLogType.temperature = stof(myData);
                    }
                }
                indexCounter++;
            }
            //Create Date object
            Date bstDate(month, windLogType.d.GetYear());
            //insert data into BST
            W.InsertBst(bstDate);
            //Create the key for the MAP
            mapKey = windLogType.d.ToString() + "|" + windLogType.t.ToString();
            //insert data into MAP
            W.InsertMap(mapKey, windLogType);
        }
    }//end while
}

//operator overload <
bool operator<(Date & myDate, Date & tempDate)
{
    if(myDate.GetYear() > tempDate.GetYear())
    {
        return false;
    }
    else
    {
        return true;
    }
}
//operator overload >
bool operator>(Date & myDate, Date & tempDate)
{
    if(myDate.GetYear() < tempDate.GetYear())
    {
        return false;
    }
    else
    {
        return true;

    }
}
//operator overload ==
bool operator==(Date & myDate, Date & tempDate)
{

    if(myDate.GetYear() == tempDate.GetYear())
    {
        return true;
    }
    else
    {
        return false;
    }
}


//=======================Bonus==========================================

void Windlog::DeleteBST()
{
    cout << "=============================================================================================" << endl;
    storedDate<Date>.DestroyTree();
    cout << "=============================================================================================" << endl;
    CallInorder();
    cout << "=============================================================================================" << endl;
}

void Windlog::DeleteMAP()
{
    cout << "=========================================Size of all Maps=========================================" << endl;
    cout << "Size of Map2007: " << windMap2007.size() << endl;
    cout << "Size of Map2008: " << windMap2008.size() << endl;
    cout << "Size of Map2009: " << windMap2009.size() << endl;
    cout << "Size of Map2010: " << windMap2010.size() << endl;
    cout << "Size of Map2011: " << windMap2011.size() << endl;
    cout << "Size of Map2012: " << windMap2012.size() << endl;
    cout << "Size of Map2013: " << windMap2013.size() << endl;
    cout << "Size of Map2014: " << windMap2014.size() << endl;
    cout << "Size of Map2015: " << windMap2015.size() << endl;
    cout << "Size of Map2016: " << windMap2016.size() << endl;
    cout << "Size of Map2021: " << windMap2021.size() << endl;
    cout << "=============================================================================================" << endl << endl;

    windMap2007.clear();
    windMap2008.clear();
    windMap2009.clear();
    windMap2010.clear();
    windMap2011.clear();
    windMap2012.clear();
    windMap2013.clear();
    windMap2014.clear();
    windMap2015.clear();
    windMap2016.clear();
    windMap2021.clear();
    cout << "=========================================Size of all Maps after Clearing=========================================" << endl;
    cout << "Size of Map2007: " << windMap2007.size() << endl;
    cout << "Size of Map2008: " << windMap2008.size() << endl;
    cout << "Size of Map2009: " << windMap2009.size() << endl;
    cout << "Size of Map2010: " << windMap2010.size() << endl;
    cout << "Size of Map2011: " << windMap2011.size() << endl;
    cout << "Size of Map2012: " << windMap2012.size() << endl;
    cout << "Size of Map2013: " << windMap2013.size() << endl;
    cout << "Size of Map2014: " << windMap2014.size() << endl;
    cout << "Size of Map2015: " << windMap2015.size() << endl;
    cout << "Size of Map2016: " << windMap2016.size() << endl;
    cout << "Size of Map2021: " << windMap2021.size() << endl;
    cout << "=============================================================================================" << endl << endl;
}


















