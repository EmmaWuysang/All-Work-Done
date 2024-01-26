/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 5, 2024, 10:42 PM
 * Purpose: Finding miles per gallon car gets
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
    int galns,miles,mpg;
    //Initialize all variables
    miles = 375;
    galns = 15; // gallons
    //Process or Map solutions
    mpg = miles/galns; // miles per gallon
    //Display the output
    cout<<"A car holds 15 gallons of gasoline and can travel 375 miles before refueling."<<endl;
    cout<<"The car gets "<<mpg<<" miles per gallon."<<endl;
    //Exit the program
    return 0;
}

