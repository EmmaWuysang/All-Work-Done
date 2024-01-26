/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 11, 2024, 2:31 PM
 * Purpose:  Sorts names alphabetically.
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
    string nameone,nametwo,namethre;

    //Display the outputs
    cout<<"Sorting Names\n";
    cout<<"Input 3 names\n";
    
    // Takes inputs 
    cin>>nameone>>nametwo>>namethre;
    
    // Creates Nested Variables
    // Compares ASCII Code with first input
    if (nameone<nametwo and nameone<namethre)
    {   cout<<nameone<<endl;
        if (nametwo>namethre)
        {
            cout<<nametwo<<endl;
            cout<<namethre;
        }
        else
        {
            cout<<namethre<<endl;
            cout<<nametwo;
        }
    }
    
    // Compares ASCII Code with second input
    else if (nametwo<nameone and nametwo<namethre)
    {   cout<<nametwo<<endl;
        if (nameone<namethre)
        {
            cout<<nameone<<endl;
            cout<<namethre;
        }
        else
        {
            cout<<namethre<<endl;
            cout<<nameone;
        }
    }
    
    // Compares ASCII Code with third input
    else if (namethre<nameone and namethre<nametwo)
    {   cout<<namethre<<endl;
        if (nametwo<nameone)
        {
            cout<<nametwo<<endl;
            cout<<nameone;
        }
        else
        {
            cout<<nameone<<endl;
            cout<<nametwo;
        }
    }
    //Exit stage right or left!
    return 0;
}

