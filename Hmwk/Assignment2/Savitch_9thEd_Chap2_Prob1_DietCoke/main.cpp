/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 9, 2024, 10:49 PM
 * Purpose: How many soda pops can you consume before dying.
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
    int msedose,msemas,sodamas,tltcans; // mouse dose, mouse mass, soda mass
    float wod,usrwght; // weight of dieter, user weight
    const float sodaswtr = 0.001f; // soda sweetener
    
    //Initialize or input i.e. set variable values
    wod = 45359.2/100;
    msedose = 5;
    msemas = 35;
    sodamas = 350;
    
    // User input, program starts
    cout<<"Program to calculate the limit of Soda Pop Consumption.\n";
    cout<<"Input the desired dieters weight in lbs.\n";
    
    cin>>usrwght;
    tltcans = (usrwght*wod*msedose)/(sodamas*sodaswtr*msemas); // finds mass that kills dieter and divides that by amt of sweetener.
    
    cout<<"The maximum number of soda pop cans\n";
    cout<<"which can be consumed is "<<tltcans<<" cans";
    
    //Exit stage right or left!
    return 0;
}

