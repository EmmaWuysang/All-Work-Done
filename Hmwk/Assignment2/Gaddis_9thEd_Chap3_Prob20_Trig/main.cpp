/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 9, 2024, 9:05 PM
 * Purpose: Find the trigonometric values from entered degrees.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    float dgres,radian;
    
    //Initialize or input i.e. set variable values
    radian = 0.0174533; // the quivalent to one degree in radians,

    //Display the outputs
    cout<<"Calculate trig functions\n";
    cout<<"Input the angle in degrees.\n";
    cin>>dgres; // takes output in degrees
    cout<<fixed<<setprecision(4);
    cout<<"sin("<<static_cast<int>(dgres)<<") = "<<sin(dgres*radian)<<endl; // must convert degrees to radian when using trig values.
    cout<<"cos("<<static_cast<int>(dgres)<<") = "<<cos(dgres*radian)<<endl;
    cout<<"tan("<<static_cast<int>(dgres)<<") = "<<tan(dgres*radian);
    
    //Exit stage right or left!
    return 0;
}

