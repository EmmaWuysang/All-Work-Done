/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 10, 2024, 12:48 PM
 * Purpose: Checks if meeting Violates Law Regulations for Maximum Room Capacity
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
    //Set the random number seed
    
    //Declare Variables
    int max,num;

    //Display the outputs
    cout<<"Input the maximum room capacity and the number of people.\n";
    
    //Initialize or input i.e. set variable values
    cin>>max>>num;
    
    //Boolean statements to check # of people
    if (num>max)
    {  cout<<"Meeting cannot be held.\n";
       cout<<"Reduce number of people by "<<num-max<<" to avoid fire violation.";
        }
    else if (num<max)
    {    cout<<"Meeting can be held.\n";
        cout<<"Increasing the number of people by "<<max-num<<" will be allowed without violation.";
        }
        
    //Exit stage right or left!
    return 0;
}

