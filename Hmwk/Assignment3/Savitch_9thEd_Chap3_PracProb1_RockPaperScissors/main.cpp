/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 12, 2024, 5:10 PM
 * Purpose: A game of Rock, Paper, Scissors
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
    string play1, play2;

    //Map inputs -> outputs
    cout<<"Rock Paper Scissors Game\n";
    cout<<"Input Player 1 and Player 2 Choices (R,P,S)\n";
    cin>>play1>>play2;
    
    // If user 1 plays paper first
    if (play1=="P" || play1=="p")
    {
        if (play2=="R" || play2=="r") 
        { 
            cout<<"Paper covers rock.";
        } 
        else if (play2=="S"|| play2=="s") 
        { 
            cout<<"Scissors cuts paper."; 
            
        }
        else { cout<<"Draw."; 
            
        }
    }
    
    // If user 1 plays Rock first
    if (play1=="R" || play1=="r")
    {
        if (play2=="P" || play2=="p")
        {
            cout<<"Paper covers rock.";
        }
        else if (play2=="S"|| play2=="s")
        {
            cout<<"Rock breaks scissors.";
        }
        else
        {
            cout<<"Draw.";
        }
    }
    
    // If user 1 plays Scissors first
    if (play1=="S" || play1=="s")
    {
        if (play2=="P" || play2=="p")
        {
            cout<<"Scissors cuts paper.";
        }
        else if (play2=="R"|| play2=="r")
        {
            cout<<"Rock breaks scissors.";
        }
        else
        {
            cout<<"Draw.";
        }
    }

    //Exit stage right or left!
    return 0;
}