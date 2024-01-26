/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 11, 2024, 10:01 PM
 * Purpose: Calculates the placements from a race.
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
    string runr1,runr2,runr3;
    int timone,timtwo,timthre;

    
    //Display the outputs
    cout<<"Race Ranking Program\n";
    cout<<"Input 3 Runners\n"<<
        "Their names, then their times\n";
        
    cin>>runr1>>timone>>runr2>>timtwo>>runr3>>timthre;
    
    // placement for runner 1,2/3

   if  (timone<timtwo and timone<timthre)
   {
       cout<<runr1<<"\t"<<setw(3)<<timone<<endl;
       if (timtwo<timthre)
       {
           cout<<runr2<<"\t"<<setw(3)<<timtwo<<endl;
           cout<<runr3<<"\t"<<setw(3)<<timthre;
       }
       else
       {
           cout<<runr3<<"\t"<<setw(3)<<timthre<<endl;
           cout<<runr2<<"\t"<<setw(3)<<timtwo;
       }
   }
   
    // placement for runner 2, 1/3
   
    if  (timtwo<timone and timtwo<timthre)
   {
       cout<<runr2<<"\t"<<setw(3)<<timtwo<<endl;
       if (timone<timthre)
       {
           cout<<runr1<<"\t"<<setw(3)<<timone<<endl;
           cout<<runr3<<"\t"<<setw(3)<<timthre;
       }
       else
       {
           cout<<runr3<<"\t"<<setw(3)<<timthre<<endl;
           cout<<runr1<<"\t"<<setw(3)<<timone;
       }
   }
    
    // placement for runner 3,1/2
    
    if  (timthre<timone and timthre<timtwo)
   {
       cout<<runr3<<"\t"<<setw(3)<<timthre<<endl;
       if (timtwo<timone)
       {
           cout<<runr2<<"\t"<<setw(3)<<timtwo<<endl;
           cout<<runr1<<"\t"<<setw(3)<<timone;
       }
       else
       {
           cout<<runr1<<"\t"<<setw(3)<<timone<<endl;
           cout<<runr2<<"\t"<<setw(3)<<timtwo;
       }
   }
    //Exit stage right or left!
    return 0;
}

