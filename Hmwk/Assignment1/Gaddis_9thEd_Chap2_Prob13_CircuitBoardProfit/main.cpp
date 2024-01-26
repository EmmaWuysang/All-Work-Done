/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 5, 2024, 8:10 PM
 * Purpose: Calculate % Profit from Base Cost of Item
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
    float pctprft,basecst,totl;
    
    //Initialize all variables
    pctprft = 35; // percent profit
    basecst = 14.95; // base cost
    
    //Process or Map solutions
    totl = basecst/(1-(pctprft/100)); // takes the % profit to a decimal and the difference from 1 to gain the total
    
    //Display the output
    cout<<"In order to gain a %"<<pctprft<<" profit from the base cost of "<<basecst<<", the final item price must be $"<<totl<<"."<<endl;
    //Exit the program
    return 0;
}