/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 18, 2024, 1:08 AM
 * Purpose: Menu for Assignment 4
 */


//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char numopt;//Number of options
    unsigned short option;//Option to choose from menu
    
    //The Process -> Map Inputs to Outputs
    numopt=10;//In this case we have 10 options
    do{
        //Display user choice
        cout<<"Choose from the options displayed"<<endl;
        cout<<"1 -> Question 1 : Gaddis_9thEd_Chap5_Prob1_Sum"<<endl;
        cout<<"2 -> Question 2 : Gaddis_9thEd_Chap5_Prob7_PayInPennies"<<endl;
        cout<<"3 -> Question 3 : Gaddis_9thEd_Chap5_Prob13_MinMax"<<endl;
        cout<<"4 -> Question 4 : Gaddis_9thEd_Chap5_Prob22_Rectangle"<<endl;
        cout<<"5 -> Question 5 : Gaddis_9thEd_Chap5_Prob23_Pattern"<<endl;
        cout<<"6 -> Question 6 : Savitch_9thEd_Chap4_Prob1_MPG"<<endl;
        cout<<"7 -> Question 7 : Savitch_9Ed_Chap4_Prob2_FuelEff"<<endl;
        cout<<"8 -> Question 8 : Savitch_9Ed_Chap4_Prob4_Inflation"<<endl;
        cout<<"9 -> Question 9 : Savitch_9Ed_Chap4_Prob5_EstCost"<<endl;
        cout<<"10 -> Question 10 : Savitch_9Ed_Chap4_Prob9_2or3Max"<<endl;
        cout<<"Enter any other character aside from 1-10 to exit."<<endl;
        
        cin>>option;//Read in the option
        
        //Use a switch case to implement
        cout<<endl;
        
        switch(option){
            case 1:{ 
                // Purpose:  Take sum of given integer
                //Declare Variables
                unsigned int sum,counter,amt;

                //Initialize or input i.e. set variable values
                cout<<"Enter a positive integer!\n";
                cin>>amt;
                counter=sum=0;

                //Map inputs -> outputs
                while (counter++ != amt) {
                    sum+=counter;
                }

                //Display the outputs
                cout<<"Sum = "<<sum;

                cout<<endl<<endl;break;
            }
            case 2:{
                // Purpose: How much would you earn if your pay was doubled by the day.
                //Declare Variables
                unsigned int days, counter,result,finlPay,dollar,cents;
                
                //Input statement
                cout<<"Give a number of days to see how much you'd earn over a period of time doubled each day!\n";
                
                //Initialize or input i.e. set variable values
                cin>>days;
                counter=2;
                result=1;
                finlPay = result;

                //Map inputs -> outputs

                while (counter++<=days) {
                    result *= 2 ;
                    finlPay += result;
                }

                //Display the outputs
                // gets dollar value
                dollar = finlPay/100;

                // gets cents value
                cents = finlPay%100;

                // if cents goes outside of two digits
                if (days>3){
                cout<<"Pay = $"<<dollar<<"."<<cents;
                }
                else{
                    cout<<"Pay = $"<<dollar<<".0"<<cents;
                }
                cout<<endl<<endl;break;
            }
            case 3:{
                // Purpose: Find Minimum and Maximum from a Set of Numbers.
                //Declare Variables
                int num,max,min;
                
                //Beginning statement
                cout<<"Enter a series of integers. Once done, enter -99."<<endl;
                //Initialize or input i.e. set variable values
                cin>>num;
                max=min=num;

                //Map the outputs
                while (num!=-99){
                    cin>>num;

                    max = (max<=num)? num: max;

                    if (num!=-99){
                    min = (min>=num)? num: min;
                    }
                } 

                //Display outputs
                cout<<"Smallest number in the series is "<<min<<endl;
                cout<<"Largest  number in the series is "<<max;

                cout<<endl<<endl;break;
            }
            case 4:{
                // Purpose: Create rectangle from user measurements and string.
                //Declare Variables
                int num;
                string ltr; // chosen letter

                //Map inputs -> outputs
                cout<<"Give a positive integer and a string to create a rectangle! (exa 8 Y)\n";
                cin>>num>>ltr;

                //Display the outputs

                for (int counter=0;counter<num;counter++){ // loops until x is still less than y
                    for (int counter=0;counter<num;counter++){ //copies loop to get rows
                        cout<<ltr; // prints chosen letter
                    }
                    if (counter<num-1){ // stops endl second to last column
                    cout<<endl;
                    }
                } // loop ends
                cout<<endl<<endl;break;
            }
            case 5:{
                // Purpose: Construct a Pattern
                // Declare Variables
                int num;

                // Initalize Variables + Input Statement
                cout<<"Enter in number to create an increasing and decreasing pattern! (exa. 10)\n";
                cin>>num;

                // Map Outputs
                // executes from 1 to given num
                for(int counter=1;counter<=num;counter++) {
                    // executes loops in amount to first loop, if counter is 2, bottom loop will iterate twice.
                    for(int top=1;top<=counter;top++)
                    {
                        cout<<"+";
                    }
                cout<<endl<<endl;
                }

                // bottom half
                for(int counter=num;counter>=1;counter--) {

                    for(int bottom=1;bottom<=counter;bottom++){
                        cout<<"+";
                    }
                // only uses endl from second to last symbol.
                if (counter>1){
                cout<<endl<<endl;}
                }
                cout<<endl<<endl;break;
            }
            case 6:{
                // Purpose: Compute Miles Per Gallon
                //Declare Variables
               const float gallons = 0.264179; // constant liter to gallons
               float liters,miles,mpg;
               string start;

               //Display the outputs
               do{
                   // prevents an endline when user is finished with program.
                   if (start=="y" or start=="Y"){
                       cout<<endl;
                   }
                  // general questions
                  cout<<"Enter number of liters of gasoline:\n";
                  cin>>liters;
                  cout <<"Enter number of miles traveled:\n";
                  cin>>miles;
                  // computation for find miles per gallon
                  mpg = miles/(liters * gallons);
                  cout<<"miles per gallon:\n";
                  cout<<fixed<<setprecision(2);
                  cout<<mpg<<endl;

                  // asks if the user wants to enter in numbers again.
                  cout<<endl<<"Again: (type y/n)"<<endl;
                  cin>>start;

               } while (start!="n" and start!="N");
                cout<<endl<<endl;break;
            }    
            case 7:{
                // Purpose: Compute Miles Per Gallon with 2 cars
                //Declare Variables
                const float gallons = 0.264179; // constant liter to gallons
                float liters1,miles1,mpg1,mpg2,liters2,miles2;
                string start;

                //Display the outputs
                do{
                    // prevents an endline when user is finished with program.
                    if (start=="y"){
                        cout<<endl;
                    }
                   // general questions for first car
                   cout<<"Car 1\n";
                   cout<<"Enter number of liters of gasoline:\n";
                   cin>>liters1;
                   cout <<"Enter number of miles traveled:\n";
                   cin>>miles1;

                   // computation for find miles per gallon first car
                   mpg1 = miles1/(liters1 * gallons);
                   cout<<fixed<<setprecision(2);
                   cout<<"miles per gallon: "<<mpg1<<endl<<endl;


                   // general questions for second car
                   cout<<"Car 2\n";
                   cout<<"Enter number of liters of gasoline:\n";
                   cin>>liters2;
                   cout <<"Enter number of miles traveled:\n";
                   cin>>miles2;

                   // computation for find miles per gallon second car
                   mpg2 = miles2/(liters2 * gallons);
                   cout<<"miles per gallon: "<<mpg2<<endl<<endl;

                   if (mpg1>mpg2){
                       cout<<"Car 1 is more fuel efficient\n"<<endl;
                   }
                   else{
                      cout<<"Car 2 is more fuel efficient\n"<<endl; 
                   }
                   // asks if the user wants to enter in numbers again.
                   cout<<"Again:"<<endl;
                   cin>>start;

                } while (start!="n");


                cout<<endl<<endl;break;
            }    
            case 8:{
                // Purpose: Compute Inflation Percentage Between the Price of One Item Then and Now.
                //Declare Variables
                float crntprce,lastyr,inflprc;
                string start;

                //Displays the outputs
                do{
                    // prevents an endline when user is finished with program.
                    if (start=="y"){
                        cout<<endl;
                    }

                    // general questions
                    cout<<"Enter current price:\n";
                    cin>>crntprce;
                    cout<<"Enter year-ago price:\n";
                    cin>>lastyr;

                    // two decimal values
                    cout<<fixed<<setprecision(2);

                    // calculates inflation percentage
                    inflprc = ((crntprce-lastyr)/lastyr)*100.0;
                    cout<<"Inflation rate: "<<inflprc<<"%\n"<<endl;

                   // if user wants to do another value
                    cout<<"Again:\n";
                    cin>>start;

                    } while (start!="n");

                cout<<endl<<endl;break;
            }
            case 9:{
                // Purpose:  Compute Inflation Percentage Between the Price of One Item Then and Now.
                //Declare Variables
                float crntprce,lastyr,inflprc,estyr1,estyr2;
                string start;

                //Displays the outputs
                do{
                    // prevents an endline when user is finished with program.
                    if (start=="y"){
                        cout<<endl;
                    }

                    // general questions
                    cout<<"Enter current price:\n";
                    cin>>crntprce;
                    cout<<"Enter year-ago price:\n";
                    cin>>lastyr;

                    // two decimal values
                    cout<<fixed<<setprecision(2);

                    // calculates inflation percentage
                    inflprc = ((crntprce-lastyr)/lastyr);
                    cout<<"Inflation rate: "<<inflprc*100.0<<"%\n"<<endl;

                   // estimations for following year one and two
                    estyr1 = crntprce+(crntprce*inflprc);
                    estyr2 = estyr1+(estyr1*inflprc);

                    // prints calculations
                    cout<<"Price in one year: $"<<estyr1<<endl;
                    cout<<"Price in two year: $"<<estyr2<<endl<<endl;

                   // if user wants to do another value
                    cout<<"Again:\n";
                    cin>>start;

                } while (start!="n");

                cout<<endl<<endl;break;
            }
            case 10:{
                // Purpose: Max of Two and Three Parameters
                //Declare Variables
                float num,max2,max3;
                //Initialize or input i.e. set variable values
                cout<<fixed<<setprecision(1);

                //Display the outputs
                cout<<"Enter three numbers/floats!:"<<endl;
                max2=0;

                // loops three times
                for (int x=1;x<=3;x++){
                    cin>>num;
                    if (x<=2){ //finds max of the two floats and appends
                        max2=(num>=max2)?num:max2;
                    }

                    if (x==3){ //compares first max by third num and appends
                    max3 =(num>=max2)?num:max2;
                    }
                }

                // displays outputs
                cout<<"Largest number from two parameter function:\n";
                cout<<max2<<endl<<endl;
                cout<<"Largest number from three parameter function:\n";
                cout<<max3<<endl;


                cout<<endl<<endl;break;
            }
             default:cout<<endl<<"You've exited the program!"<<endl<<endl;break;
        }
    }while(option>0 && option<=numopt);
    
    //Exit the Program
    return 0;
}

