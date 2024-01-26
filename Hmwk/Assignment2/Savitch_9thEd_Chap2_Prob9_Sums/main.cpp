/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 9, 2024, 1:12 AM
 * Purpose: Takes 10 integers, finds negative, positive and total sum.
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

    //Declare Variables
    int total,sumneg,sumpos,one,two,three,four,five,six,seven,eight,nine,ten,x;
    
    //Display the outputs
    cout<<"Input 10 numbers, any order, positive or negative\n";
    
    //Initialize or input i.e. set variable values
    cin>>one>>two>>three>>four>>five>>six>>seven>>eight>>nine>>ten; // all the inputs
    sumneg=0;
    sumpos=0;
    //Map inputs -> outputs
    total = one+two+three+four+five+six+seven+eight+nine+ten; // sums all integers
    x = (one<0)? sumneg += one: 0; 
    x = (one>0)? sumpos += one: 0;
    x = (two<0)? sumneg += two: 0;
    x = (two>0)? sumpos += two: 0;
    x = (three<0)? sumneg += three: 0;
    x = (three>0)? sumpos += three: 0;
    x = (four<0)? sumneg += four: 0;
    x = (four>0)? sumpos += four: 0;
    x = (five<0)? sumneg += five: 0;
    x = (five>0)? sumpos += five: 0;
    x = (six<0)? sumneg += six: 0;
    x = (six>0)? sumpos += six: 0;
    x = (seven<0)? sumneg += seven: 0;
    x = (seven>0)? sumpos += seven: 0;
    x = (eight<0)? sumneg += eight: 0;
    x = (eight>0)? sumpos += eight: 0;
    x = (nine<0)? sumneg += nine: 0;
    x = (nine>0)? sumpos += nine: 0;
    x = (ten<0)? sumneg += ten: 0;
    x = (ten>0)? sumpos += ten: 0;
   
    //Display the end outputs
    cout<<"Negative sum ="<<setw(4)<<sumneg<<endl;
    cout<<"Positive sum ="<<setw(4)<<sumpos<<endl;
    cout<<"Total sum    ="<<setw(4)<<total;
    
    //Exit stage right or left!
    return 0;
}