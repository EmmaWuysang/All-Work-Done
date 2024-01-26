/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 17, 2024, 3:29 PM
 * Purpose: Display Sales of Each Store with (*)
 */

//System Libraries
#include <iostream> //Input-Output Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {

    //Declare all variables
    int store1,store2,store3,store4,store5;

    //Display the output
    for (int i=1;i<=5;i++){
        cout<<"Enter today's sales for store "<<i<<":\n";
        switch(i){ // stores input
            case 5:cin>>store5;break;
            case 4:cin>>store4;break;
            case 3:cin>>store3;break;
            case 2:cin>>store2;break;
            case 1:cin>>store1;
        }
    }
    
    // converts to the amount of 100's
    store1=store1/100;
    store2=store2/100;
    store3=store3/100;
    store4=store4/100;
    store5=store5/100;
    
    cout<<"SALES BAR CHART(Each*=$100)\n";
    
    // store 1 sales
    cout<<"Store 1: ";
    for (int j=1;j<=store1;j++){
        cout<<"*";
    }
    cout<<endl;
    
    // store 2 sales
    cout<<"Store 2: ";
    for (int j=1;j<=store2;j++){
        cout<<"*";
    }
    cout<<endl;
    
    // store 3 sales
    cout<<"Store 3: ";
    for (int j=1;j<=store3;j++){
        cout<<"*";
    }
    cout<<endl;

    // store 4 sales
    cout<<"Store 4: ";
    for (int j=1;j<=store4;j++){
        cout<<"*";
    }
    cout<<endl;

    // store 5 sales
    cout<<"Store 5: ";
    for (int j=1;j<=store5;j++){
        cout<<"*";
    }
    cout<<endl;

    //Exit the program
    return 0;
}

