#include <iostream>
#include <fstream>
#include<string>
#include <vector>
#include"OpenFile.h"
#include "Drivers.h"
#include "Trips.h"



using namespace CodeKataExample;
    int main()
    {
        //Various declarations to use the .h declarations for the other source files.
        Trips trips;
        Drivers driver;
        OpenFile open;
        

        //Call to use the readFile function within OpenFile
        open.readFile(driver.driverVector, trips.tripVector);
        
        //Regular return function
        return 0;
    };




