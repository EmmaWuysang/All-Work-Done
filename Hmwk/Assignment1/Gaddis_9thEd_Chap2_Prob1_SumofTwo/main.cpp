/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 5, 2024, 12:14 AM
 * Purpose: Compute Sum of Two Numbers
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
    int frstVl,scndVl,total;
        
    //Initialize all variables
    frstVl=50; // first value
    scndVl=100; // second value
    
    //Process or Map solutions
    total = frstVl+scndVl; // computers the sum
    //Display the output
    cout<<"The sum of the integers "<<frstVl<<" and "<<scndVl<<" is: "<<total;
    //Exit the program
    return 0;
}