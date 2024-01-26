/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 5, 2024, 7:35 PM
 * Purpose: Calculates Acres of Land
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <cmath> // Used to round the total acres
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {

    //Declare all variables
    float acre,trctlnd,totacre; //total acre in land
    
    //Initialize all variables
    acre=43560,trctlnd=391876; // acre and tract land defined
    
    //Process or Map solutions
    totacre=trctlnd/acre; // computers how much acres are in the given land amt
    
    //Display the output
    cout<<"The number of acres within the tract of land of "<<trctlnd<<" square feet is "<<totacre<<" and rounded is, "<<round(totacre)<<"."<<endl;
    
    //Exit the program
    return 0;
}

