/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 9, 2024, 9:04 PM
 * Purpose: Converts Fahrenheit to  Celsius Temperatures.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    float fhrnht;

    cout<<"Temperature Converter\n";
    cout<<"Input Degrees Fahrenheit\n";
    cin>>fhrnht;
    cout<<fixed<<setprecision(1);
    cout<<fhrnht<<" Degrees Fahrenheit = "<<(5.0/9.0)*(fhrnht-32)<<" Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}

