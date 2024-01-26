/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 5, 2024, 11:15 PM
 * Purpose: Finding amount paid for stock, commission, total.
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
    float shares, cost, stock, comisin, totl; // used float since cost is not constant, and could change.
    //Initialize all variables
    shares = 750;
    cost = 35.00;
    
    //Process or Map solutions
    stock = shares * cost;
    comisin = stock * 0.02; // 0.02 is the percent commission from the transaction
    totl = stock + comisin; // total amount paid
    
    //Display the output
    cout<<"Kathryn paid $"<<stock<<" for the stock alone."<<endl;
    cout<<"She paid $"<<comisin<<" for the commission."<<endl;
    cout<<"In total, she paid $"<<totl<<"."<<endl;
    //Exit the program
    return 0;
}

