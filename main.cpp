#include <iostream>
#include <sstream>
#include <limits>
#include <string>
#include <fstream>
#include "windlog.h"
#include "vector.h"
#include "dates.h"
#include "time.h"
#include "bst.h"


using namespace std;

int main()
{
    string myString,inFile;
    Windlog windLog;
    ifstream dataFile("met_index.txt");

    if( !dataFile )
    {
        cout << "File not file" << endl;
        return -1;
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
            return -1;
        }
        //read data
        infile >> windLog;
    }

    windLog.CallInorder();
    windLog.Menu();

    return 0;
}





