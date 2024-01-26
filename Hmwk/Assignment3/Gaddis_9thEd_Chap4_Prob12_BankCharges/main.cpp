/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 11, 2024, 7:12 PM
 * Purpose: Figures out your balance from a certain num of checks + other fees.
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
    float balance,checks,chckamt,mnthfee,xtrchrg;
    //Initialize or input i.e. set variable values
    mnthfee=10.00;
    xtrchrg=15.00;

    //Display the outputs
    cout<<"Monthly Bank Fees\n";
    cout<<"Input Current Bank Balance and Number of Checks\n";
    
    cin>>balance>>checks;
    
    // If a negative amount of checks was entered in
    if (checks<0 or balance<=0.00)
    {   cout<<"Account is overdrawn.\n";
        //return 0; // might not be needed
    }
    
    // The costs for amount of checks
    chckamt = (checks<20)? checks*=0.10:
              (checks>=20 and checks<=39)? checks*=0.08:
              (checks>=40 and checks<=59)? checks*=0.06:
              (checks>=60)? checks*=0.04:0;
    
    // Display Final Outputs     
    cout<<fixed<<setprecision(2);
    cout<<"Balance     $"<<setw(9)<<balance<<endl;
    cout<<"Check Fee   $"<<setw(9)<<checks<<endl;
    cout<<"Monthly Fee $"<<setw(9)<<mnthfee<<endl;
    
    // If your balance is under $400, it'll be charged for being under min balance.
    if (balance<400.0)
    {    cout<<"Low Balance $"<<setw(9)<<xtrchrg<<endl;
         cout<<"New Balance $"<<setw(9)<<balance-checks-mnthfee-xtrchrg;
    }
    else
    {   cout<<"Low Balance $"<<setw(9)<<"0.00"<<endl;
        cout<<"New Balance $"<<setw(9)<<balance-checks-mnthfee;
    }
    //Exit stage right or left!
    return 0;
}

