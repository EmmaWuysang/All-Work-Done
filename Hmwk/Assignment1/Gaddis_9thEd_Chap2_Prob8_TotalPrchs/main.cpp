/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 5, 2024, 6:00 PM
 * Purpose: Lists items in cart, along with the total without the sales tax, and with.
 */

//System Libraries
#include <iostream> //Input-Output Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    float item1,item2,item3,item4,item5,subtotl,fnltotl,saletax; // used float because of decimal points, less bytes than doubles
    //Initialize all variables
    item1=15.95, item2=24.95, item3=6.95, item4=12.95, item5=3.95; // all the items and its assigned costs
    //Process or Map solutions
    subtotl = item1+item2+item3+item4+item5; //before sales tax
    saletax = (subtotl*0.07); // 7% of the subtotal
    fnltotl = subtotl + saletax; // final total after sales tax
    //Display the output
    cout<<"The price of each item in order is; item 1 - $"<<item1<<", item 2 - $"<<item2<<", item 3 - $"<<item3<<", item 4 - $"<<item4<<", and item 5 - $"<<item5<<"."<<endl;
    cout<<"The subtotal of the sale is $"<<subtotl<<"."<<endl;
    cout<<"The amount of sales tax is 7%, which is $"<<saletax<<" therefore the total cost is $"<< fnltotl<<"."<<endl;
    //Exit the program
    return 0;
}

