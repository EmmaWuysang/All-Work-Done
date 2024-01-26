 /* File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 12, 2024, 8:45 PM
 * Purpose:  Roman Numeral Converter (only using switches/breaks)
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
    unsigned char n1, // # of 1's 
                  n10, // # of 10's 
                  n100, // # of 100's 
                  n1000; // # of 1000's 
    unsigned short num;
    string convrsn;
    
    //Display the outputs
    cout<<"Arabic to Roman numeral conversion.\n"
        <<"Input the integer to convert.\n";
    
    //Initialize or input i.e. set variable values
    cin>>num;
    
    //Map inputs -> outputs
    n1 = (num)%10;
    n10 = (num/10)%10;   
    n100=(num/100)%10;  
    n1000=(num/1000);
    
    convrsn ="";
    
    // if the given number is out of range 
    if (num>3000 or num<1000)
    { cout<<num<<" is Out of Range!"; }
    
    else
    {
        // assigns roman numerals to the 1000's
        switch(n1000){
            case 3:convrsn+="M";
            case 2:convrsn+="M";
            case 1:convrsn+="M";
        }
        
        // assigns roman numerals to the 100's
        switch(n100){
            case 9: convrsn+="CM"; break;
            case 8: convrsn+="DCCC";break;
            case 7: convrsn+="DCC";break;
            case 6: convrsn+="DC";break;
            case 5: convrsn+="D";break;
            case 4: convrsn+="CD";break;
            case 3: convrsn+="CCC";break;
            case 2: convrsn+="CC";break;
            case 1: convrsn+="C";break;
        }
        
        // assigns roman numerals to the 10's
        switch(n10){
            case 9: convrsn+="XC"; break;
            case 8: convrsn+="LXXX";break;
            case 7: convrsn+="LXX";break;
            case 6: convrsn+="LX";break;
            case 5: convrsn+="L";break;
            case 4: convrsn+="XL";break;
            case 3: convrsn+="XXX";break;
            case 2: convrsn+="XX";break;
            case 1: convrsn+="X";break;
        }
        
        // assigns roman numerals to the 1000's
        switch(n1){
            case 9: convrsn+="IX"; break;
            case 8: convrsn+="VIII";break;
            case 7: convrsn+="VII";break;
            case 6: convrsn+="VI";break;
            case 5: convrsn+="V";break;
            case 4: convrsn+="IV";break;
            case 3: convrsn+="III";break;
            case 2: convrsn+="II";break;
            case 1: convrsn+="I";break;
        }    
    
    // displays final message
    cout<<num<<" is equal to "<<convrsn;
    }
    
    //Exit stage right or left!
    return 0;
}