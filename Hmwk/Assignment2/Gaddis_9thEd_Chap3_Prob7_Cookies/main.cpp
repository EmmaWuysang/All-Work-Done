/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 9, 2024, 12:35 PM
 * Purpose: How many calories were gained from eaten cookies.
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
    int cookies, serving, perbag,bsecook,oneserv,percook;
    
    //Initialize or input i.e. set variable values
    bsecook = 40; // base cookies per bag
    serving = 300;
    perbag = 10;

    // Map the outputs
    oneserv = bsecook/perbag; // 4 cookies is equivalent to one serving
    percook = serving/oneserv; // 75 calories per cookie
    
    //Display the outputs
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?\n";
    cin>>cookies;
    cout<<"You consumed "<<cookies*percook<<" calories.";
    
    //Exit stage right or left!
    return 0;
}