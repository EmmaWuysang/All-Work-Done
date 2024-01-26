/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 9, 2024, 2:09 AM
 * Purpose: Calculates the 2021 Military Budget as a Percentage of the Federal Budget.
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <iomanip> // User Input Libraries
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {

    //Declare all variables
    float milBdgt,fedBdgt,mlPrcnt;
    
    //Initialize all variables
    milBdgt=8.01e11f;    //Military Budget = 801 Billion   
    fedBdgt=4.8e12f;    //Federal Budget  = 4.8 Trillion
    
    //Process or Map solutions
    mlPrcnt = (milBdgt/fedBdgt)*100;
    //Display the output
    cout<<"The military budget as a percentage is "<<setprecision(3)<<mlPrcnt<<"% of the federal budget."<<endl;
    //Exit the program
    return 0;
}

