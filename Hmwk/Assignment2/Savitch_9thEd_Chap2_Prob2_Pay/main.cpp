/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 10, 2024, 1:38 PM
 * Purpose: Calculates retroactive pay, new annual/monthly salary from previous annual salary.
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
    float retro, newanul,newmnth,prevsal;
    const float rtropct=0.076f;
    
    //Display question-statement
    cout<<"Input previous annual salary.\n";
    
    //Initialize or input i.e. set variable values
    cin>>prevsal;
    
    //Map inputs -> outputs
    newanul = (prevsal*rtropct)+prevsal;
    newmnth = newanul/12;
    retro = (prevsal/2)*rtropct;
    
    // Display final outputs
    cout<<fixed<<setprecision(2);
    cout<<"Retroactive pay = $"<<setw(7)<<retro<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<newanul<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<newmnth;
    
    //Exit stage right or left!
    return 0;
}

