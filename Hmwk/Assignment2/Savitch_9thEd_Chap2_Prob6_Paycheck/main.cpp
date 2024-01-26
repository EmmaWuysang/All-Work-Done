/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 9, 2024, 10:12 PM
 * Purpose: Calculates Given Paycheck with Rate, and Hours along w/ Overtime.
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
    float hrs,rate,pychk,result;

    //Display the outputs
    cout<<"This program calculates the gross paycheck.\n";
    cout<<"Input the pay rate in $'s/hr and the number of hours.\n";
    
    //Initialize
    cin>>rate>>hrs;
    pychk = hrs * rate;
    
    //Map outputs
    result = (hrs>40)? (40*rate)+((rate*2)*(hrs-40)): pychk; //finds result with working overtime, or hours below 40
    
    //Back to display
    cout<<fixed<<setprecision(2)<<"Paycheck = $"<<setw(7)<<result;
    
    //Exit stage right or left!
    return 0;
}

