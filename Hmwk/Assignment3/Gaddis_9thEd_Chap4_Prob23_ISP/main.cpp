/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 12, 2024, 4:40 PM
 * Purpose:  Calculating your balance after choosing your package and how many hours used.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    float hrsused, balance;
    string package;
    //Initialize or input i.e. set variable values
    balance = 0.00;

    //Display the outputs
    cout<<"ISP Bill\n"
        <<"Input Package (A,B,C) and Hours\n";
        cin>>package>>hrsused;
        cout<<fixed<<setprecision(2);
        
        if (package!="A" and package!="B" and package!="C" or hrsused>744)
        {
            cout<<"You need to choose a package that is A,B, or C and your hours cannot exceed 744.\n";
            return 0;
        }
        // for package A deal
        if (package == "A")
        {
            if (hrsused>10)
            {
                balance = (hrsused-10)*2.00+9.95;
                cout<<"Bill = $ "<<balance;
            }
            else
                cout<<"Bill = $ "<<balance+9.95;
        }
        
        // for package B deal
        else if (package == "B")
        {
            if (hrsused>20)
            {
                balance = (hrsused-20)*1.00+14.95;
                cout<<"Bill = $ "<<balance;
            }
            else
                cout<<"Bill = $ "<<balance+14.95;
        }
        
        // package C deal
        else
        {
            cout<<"Bill = $ "<<balance+19.95;
        }
        
    //Exit stage right or left!
    return 0;
}

