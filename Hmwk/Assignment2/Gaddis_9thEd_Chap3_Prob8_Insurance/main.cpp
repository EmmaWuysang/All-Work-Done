/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 9, 2024, 12:55 PM
 * Purpose: Insurance needed for Property
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    float insprct;
    int worth;
    //Initialize or input i.e. set variable values
    insprct = 80.0/100.0;

    //Map inputs -> outputs
    cout<<"Insurance Calculator\n";
    cout<<"How much is your house worth?\n";
    cin>>worth;
    cout<<"You need $"<<worth*insprct<<" of insurance.";
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

