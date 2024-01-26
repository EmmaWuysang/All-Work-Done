/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 5, 2024, 10:02 PM
 * Purpose: Difference of Current to Future Ocean Levels in Millimeters
 */

//System Libraries
#include <iostream> //Input-Output Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {

    //Declare all variables
    float mlmtrs,fveyrs,svnyrs,tenyrs,oceanfv,oceansv,oceantn;
    
    //Initialize all variables
    mlmtrs=1.5,fveyrs=5,svnyrs=7,tenyrs=10;
    
    //Process or Map solutions
    oceanfv = (mlmtrs * fveyrs)-mlmtrs; // difference of sea level in 5 years compared to current level
    oceansv = (mlmtrs * svnyrs)-mlmtrs; // difference of sea level in 7 years compared to current level
    oceantn = (mlmtrs * tenyrs)-mlmtrs; // difference of sea level in 10 years compared to current level
    
    //Display the output
    cout<<"The ocean's levels are rising at 1.5 millimeters per year."<<endl;
    cout<<"In 5 years, the difference of the ocean's level will be "<<oceanfv<<" millimeters to the current level."<<endl;
    cout<<"In 7 years, the difference of the ocean's level will be "<<oceansv<<" millimeters to the current level."<<endl;
    cout<<"In 10 years, the difference of the ocean's level will be "<<oceantn<<" millimeters to the current level."<<endl;
    //Exit the program
    return 0;
}

