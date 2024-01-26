/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 12, 2024, 3:01 PM
 * Purpose: Checks your zodiac compatibility based on given two zodiac signs.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries
//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    string frstusr, scndusr;
    int meter,meter2;
    
    //Initialize or input i.e. set variable values
    meter = 0;
    meter2 = 0;

    //Display the outputs
    cout<<"Horoscope Program which examines compatible signs.\n";
    cout<<"Input 2 signs.\n";
    cin>>frstusr>>scndusr;

    // assigns numeric value to meter, each sign grouped into correlated elements
    meter = (frstusr=="Aries")? meter+=1:
            (frstusr=="Leo")? meter+=1:
            (frstusr=="Sagittarius")? meter+=1:
            (frstusr=="Taurus")? meter+=2:
            (frstusr=="Virgo")? meter+=2:
            (frstusr=="Capricorn")? meter+=2:
            (frstusr=="Gemini")? meter+=3:
            (frstusr=="Libra")? meter+=3:
            (frstusr=="Aquarius")? meter+=3:
            (frstusr=="Cancer")? meter+=4:
            (frstusr=="Scorpio")? meter+=4:
            (frstusr=="Pisces")? meter+=4:0;

    // assigns numeric value to meter2, each sign grouped into correlated elements
        meter2 = (scndusr=="Aries")? meter2+=1:
            (scndusr=="Leo")? meter2+=1:
            (scndusr=="Sagittarius")? meter2+=1:
            (scndusr=="Taurus")? meter2+=2:
            (scndusr=="Virgo")? meter2+=2:
            (scndusr=="Capricorn")? meter2+=2:
            (scndusr=="Gemini")? meter2+=3:
            (scndusr=="Libra")? meter2+=3:
            (scndusr=="Aquarius")? meter2+=3:
            (scndusr=="Cancer")? meter2+=4:
            (scndusr=="Scorpio")? meter2+=4:
            (scndusr=="Pisces")? meter2+=4:0;
    
    // if they equal the same num, they're compatible, prints with element
    if (meter==meter2)
    {
        if (meter==1)
        {
            cout<<frstusr<<" and "<<scndusr<<" are compatible Fire signs.";
        }
        else if (meter==2)
        {
            cout<<frstusr<<" and "<<scndusr<<" are compatible Earth signs.";
        }
        else if (meter==3)
        {
            cout<<frstusr<<" and "<<scndusr<<" are compatible Air signs.";
        }
        else if (meter==4)
        {
            cout<<frstusr<<" and "<<scndusr<<" are compatible Water signs.";
        }
    }
    
    // they are not compatible
    else
    {
        cout<<frstusr<<" and "<<scndusr<<" are not compatible signs.";
    }
    
    //Exit stage right or left!
    return 0;
}

