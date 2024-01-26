/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 16, 2024, 5:35 PM
 * Purpose: Menu for Assignment 3
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
    unsigned char option,//Option to choose from menu
                  numopt;//Number of options
    
    //The Process -> Map Inputs to Outputs
    numopt='8';//In this case we have 8 options
    do{
        //Display user choice
        cout<<"Choose from the options displayed"<<endl;
        cout<<"1 -> Question 1"<<endl;
        cout<<"2 -> Question 2"<<endl;
        cout<<"3 -> Question 3"<<endl;
        cout<<"4 -> Question 4"<<endl;
        cout<<"5 -> Question 5"<<endl;
        cout<<"6 -> Question 6"<<endl;
        cout<<"7 -> Question 7"<<endl;
        cout<<"8 -> Question 8"<<endl;
        cout<<"Enter any other character aside from 1-8 to exit."<<endl;
        
        cin>>option;//Read in the option
        //Use a switch case to implement
        cout<<endl;
        
        switch(option){
            case '1':{
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
                    if (nametwo<namethre)
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
                cout<<endl<<endl;break;
            }
            case '2':{
                //Declare Variables
                int numbks,points;
                //Initialize or input i.e. set variable values
                points = 0;

                //Map inputs -> outputs
                cout<<"Book Worm Points\n";
                cout<<"Input the number of books purchased this month.\n";

                cin>>numbks;
                cout<<"Books purchased ="<<setw(3)<<numbks<<endl;

                // calculates points earned for books purchased
                points = numbks==0? points:
                         numbks==1? points+=5:
                         numbks==2? points+=15:
                         numbks==3? points+=30:
                         numbks>=4? points+=60:0;
                cout<<"Points earned   = "<<points;
                cout<<endl<<endl;break;
            }
            case '3':{
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
                cout<<endl<<endl;break;
            }
            case '4':{
                //Declare Variables
                string runr1,runr2,runr3;
                int timone,timtwo,timthre;


                //Display the outputs
                cout<<"Race Ranking Program\n";
                cout<<"Input 3 Runners\n"<<
                    "Their names, then their times (whole number) \n";

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
            cout<<endl<<endl;break;
            }
            case '5':{
            //Declare Variables
            float hrsused, balance;
            string package;
            //Initialize or input i.e. set variable values
            balance = 0.00;

            //Display the outputs
            cout<<"ISP Bill\n"
                <<"Input Package (A,B,C) and Hours\n";
                cin>>package>>hrsused;
                cout<<fixed<<setprecision(2);

                if (package!="A" and package!="B" and package!="C" or hrsused>744)
                {
                    cout<<"You need to choose a package that is A, B, or C and your hours cannot exceed 744.\n";
                    return 0;
                }
                // for package A deal
                if (package == "A")
                {
                    if (hrsused>10)
                    {
                        balance = (hrsused-10)*2.00+9.95;
                        cout<<"Bill = $ "<<balance;
                    }
                    else
                        cout<<"Bill = $ "<<balance+9.95;
                }

                // for package B deal
                else if (package == "B")
                {
                    if (hrsused>20)
                    {
                        balance = (hrsused-20)*1.00+14.95;
                        cout<<"Bill = $ "<<balance;
                    }
                    else
                        cout<<"Bill = $ "<<balance+14.95;
                }

                // package C deal
                else
                {
                    cout<<"Bill = $ "<<balance+19.95;
                }
                cout<<endl<<endl;break;

            }
            case '6':{
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
                cout<<endl<<endl;break;
            }    
            case '7':{
                //Declare Variables
                unsigned char n1, // # of 1's 
                              n10, // # of 10's 
                              n100, // # of 100's 
                              n1000; // # of 1000's 
                unsigned short num;
                string convrsn;

                //Display the outputs
                cout<<"Arabic to Roman numeral conversion.\n"
                    <<"Input the integer to convert.(number must be over 1000, less than 3000)\n";

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
                { cout<<"The number you entered is out of range!";}

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
                cout<<endl<<endl;break;
            }    
            case '8':{
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

                cout<<endl<<endl;break;
            }
             default:cout<<endl<<"You've exited the program!"<<endl<<endl;
        }
    }while(option<=numopt);
    
    //Exit the Program
    return 0;
}

