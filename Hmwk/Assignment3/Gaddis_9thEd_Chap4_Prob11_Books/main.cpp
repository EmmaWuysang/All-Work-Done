/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 11, 2024, 3:21 PM
 * Purpose:  Points based on books bought for the month.
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
    int numbks,points;
    //Initialize or input i.e. set variable values
    points = 0;
    
    //Map inputs -> outputs
    cout<<"Book Worm Points\n";
    cout<<"Input the number of books purchased this month.\n";
    
    cin>>numbks;
    cout<<"Books purchased ="<<setw(3)<<numbks<<endl;
    
    // calculates points earned for books purchased
    points = numbks==0? points:
             numbks==1? points+=5:
             numbks==2? points+=15:
             numbks==3? points+=30:
             numbks>=4? points+=60:0;
    cout<<"Points earned   = "<<points;
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

