/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 22, 2024, 9:06 PM
 * Purpose: Concentration Card Game V.1
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    string chce1,chce2;
    int Num1,Num2,Num3,Num4,Num5,Num6,Num7,Num8,
        Num9,Num10,Num11,Num12,Num13,Num14,Num15,Num16,
        Num17,Num18,Num19,Num20,Num21,Num22,Num23,Num24,
        Num25,Num26,Num27,Num28,Num29,Num30,usrgues,slctn,
        score,chce1,chce2;
    //Initialize all variables
    Num1 = 1234;
    //Process or Map solutions
    
    //Display the output
    //Display the output
    cout<<"This the Concentration Card Game!\n";
    cout<<"______________________________\n";
    cout<<setw(30)<<"Welcome to the Options Menu!\n"
        <<setw(31)<<"Option One : Introduction. \n"
        <<setw(30)<<"Option Two : Scores.\n"
        <<setw(30)<<"Option Three : Average.\n"
        <<"______________________________\n"
        <<endl<<setw(30)<<"Enter a Character to Skip Options Screen.\n"; 
        
    cin>>slctn; 
    cout<<endl;
    do{
        switch(slctn){
            case '1': // basic introduction 
                cout<<endl<<"A half a stack of cards, only the suit of Hearts and Spades will be shuffled (excluding Joker and Royals). \n"
                    <<"20 Cards (Ace-9) will be laid out individually and the goal is to match two cards in the least amount of turns.. \n"
                    <<"A matching pair is defined as two cards with the same rank. (two Aces, two fives, etc.)   \n" 
                    <<"If the two cards make a pair, you take them and count that as a point. This is a memory game!\n"
                    <<"Since there isn't a visual stack of cards, the user must type a placement (exa. a b, c f), after choosing, the cards will be revealed.\n"<<endl;
                cout<<endl<<"Would you like to select another option?\n";
                cin>>slctn;
                break;
            case '2': // scores
                cout<<"Would you like to check your last score?\n";
                if (score>=0){
                    if (score==0){
                        cout<<fixed<<setprecision(2);
                        cout<<"Your score is currently "<<score<<endl;
                        cout<<"Your score will increase each level you get to!\n";
                    }
                }
                else{
                    cout<<"Nothing here yet!\n";
                }
                cout<<endl<<"Would you like to select another option?\n";
                cin>>slctn;
                break;
            default:break;    
        }
    }while(slctn=='1' or slctn=='2');
    // If the user wants to play the game
    cout<<"Ready To Play?(y/n) \n"<<endl;
    cin>>chce1;
    cout<<endl<<endl<<endl;
    
    while(chce1 == "y"){
        cout<<"This is your board, type two letters to see if you found a match! (exa. a g)\n";
        cout<<setw(24)<<"_______________\n";
        cout<<setw(25)<<"|  a  b  c  d  |\n";
        cout<<setw(25)<<"|  e  f  g  h  |\n";
        cout<<setw(25)<<"|  i  j  k  l  |\n";
        cout<<setw(25)<<"|  m  n  o  p  |\n";
        cout<<setw(25)<<"|  q  r  s  t  |\n";
        cout<<setw(24)<<"______________\n";
        
     
    //Exit the program
    return 0;
}
              

/*
 * things i want to implement: 
 * ---------------
 * scoreboard
 * progression(work with floats)
 * calculate whether the users score is getting better
 * allow them to play the game
 * different numbers each time played
 * if they mess up a level, ask if they'd like to retry, if they do, give a different set of numbers
 * ideas: use srand and send those numbers into files
 */
