/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 9, 2024, 6:12 PM
 * Purpose:  Finds the Average of 5 Integers
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
    //Set the random number seed
    
    //Declare Variables
    int num1, num2, num3, num4, num5;

    //Display the outputs
    cout<<"Input 5 numbers to average."<<endl;
    cin>>num1>>num2>>num3>>num4>>num5;
    cout<<"The average = "<<fixed<<setprecision(1)<<static_cast<float>(num1+num2+num3+num4+num5)/5;
    
    //Exit stage right or left!
    return 0;
}