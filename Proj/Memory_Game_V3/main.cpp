/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 24, 2024, 3:06 PM
 * Purpose: Concentration Card Game V.2 
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function Library
#include <ctime>     //Time Library
#include <fstream>   //File Library
#include <string>

using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all variables
    const int cardAmt=20; // Amount of Cards
    string chce1;
    int usrgues;
    fstream out;
    string fileName;
    string face, suit;
    unsigned short card1, card2, card3, card4, card5, card6, card7, card8, card9, card10,
                   card11,card12,card13,card14,card15,card16,card17,card18,card19,card20;
    fstream input;
    string newCd1,newCd2,newCd3,newCd4,newCd5,newCd6,newCd7,newCd8,newCd9,newCd10,
            newCd11,newCd12,newCd13,newCd14,newCd15,newCd16,newCd17,newCd18,newCd19,newCd20;
    //Initialize all variables
    char slctn; // selection
    float score = 0.00;
    
    //Process or Map solutions
    fileName="Indx.dat"; // card Index
    out.open(fileName,ios::out);
    for (int card=0;card<=20;card++){
        if (card%10==0){ // Ace
            face = "Ace";
        }
        else if (card%10==1){ // Two
            face = "2";
        }
        else if (card%10==2){ // Three
            face = "3";
        }
        else if (card%10==3){ // Four
            face = "4";
        }
        else if (card%10==4){ // Five
            face = "5";
        }
        else if (card%10==5){ // Six
            face = "6";
        }
        else if (card%10==6){ // Seven
            face = "7";
        }
        else if (card%10==7){ // Eight
            face = "8";
        }
        else if (card%10==8){ // Nine
            face = "9";
        }
        else{ // Ten
           face = "10"; 
        }
        
        // Spades Appending Suit
        if (card/10==0){ 
            suit="Spades";
        }
        // Hearts Appending Suit
        else{
            suit="Hearts";
        }
        
        out<<face<<"of"<<suit<<endl;
    }
    
    // close the file
    out.close();
    
    fileName="Indx.dat";
    input.open(fileName.c_str(),ios::in);
    
    //Initialize Variables
    int cardPull=20;
    card1=rand()%cardPull+1;
    //Unique Value for first 2 cards
    do{
        card2=rand()%cardPull+1;
    }while(card1==card2);
 
    do{
        card3=rand()%cardPull+1;
    }while(card1==card3 || card2==card3);
    
    do{
        card4=rand()%cardPull+1;
    }while(card1==card4 || card2==card4 || card3==card4);
 
    do{
        card5=rand()%cardPull+1;
    }while(card1==card5 || card2==card5 || card3==card5 || card4==card5);
    
    do{
        card6=rand()%cardPull+1;
    }while(card1==card6 || card2==card6 || card3==card6 || card4==card6 || card5==card6);
 
    do{
        card7=rand()%cardPull+1;
    }while(card1==card7 || card2==card7 || card3==card7 || card4==card7 || card5==card7 || card6==card7);
    
    do{
        card8=rand()%cardPull+1;
    }while(card1==card8 || card2==card8 || card3==card8 || card4==card8 || card5==card8 || card6==card8 || card7==card8);
 
    do{
        card9=rand()%cardPull+1;
    }while(card1==card9 || card2==card9 || card3==card9 || card4==card9 || card5==card9 || card6==card9 || card7==card9 || card8==card9);

    do{
        card10=rand()%cardPull+1;
    }while(card1==card10 || card2==card10 || card3==card10 || card4==card10 || card5==card10 || card6==card10 || card7==card10 || card8==card10 || card9==card10);

    do{
        card11=rand()%cardPull+1;
    }while(card1==card11 || card2==card11 || card3==card11 || card4==card11 || card5==card11 || card6==card11 || card7==card11 || card8==card11 || card9==card11 || card10==card11);
    
    for(card12=rand()%cardPull+1;card1==card12 || card2==card12 || card3==card12 || card4==card12 || card5==card12 || card6==card12 || card7==card12 || card8==card12 || card9==card12 || card10==card12 || card11==card12;card12=rand()%cardPull+1);
    
    for(card13=rand()%cardPull+1;card1==card13 || card2==card13 || card3==card13 || card4==card13 || card5==card13 || card6==card13 || card7==card13 || card8==card13 || card9==card13 || card10==card13 || card11==card13 || card12==card13;card13=rand()%cardPull+1);
    
    for(card14=rand()%cardPull+1;card1==card14 || card2==card14 || card3==card14 || card4==card14 || card5==card14 || card6==card14 || card7==card14 || card8==card14 || card9==card14 || card10==card14 || card11==card14 || card12==card14 || card13==card14;card14=rand()%cardPull+1);
    
    for(card15=rand()%cardPull+1;card1==card15 || card2==card15 || card3==card15 || card4==card15 || card5==card15 || card6==card15 || card7==card15 || card8==card15 || card9==card15 || card10==card15 || card11==card15 || card12==card15 || card13==card15 || card14==card15 ;card15=rand()%cardPull+1);
    
    for(card16=rand()%cardPull+1;card1==card16 || card2==card16 || card3==card16 || card4==card16 || card5==card16 || card6==card16 || card7==card16 || card8==card16 || card9==card16 || card10==card16 || card11==card16 || card12==card16 || card13==card16 || card14==card16 || card15==card16;card16=rand()%cardPull+1);
    
    for(card17=rand()%cardPull+1;card1==card17 || card2==card17 || card3==card17 || card4==card17 || card5==card17 || card6==card17 || card7==card17 || card8==card17 || card9==card17 || card10==card17 || card11==card17 || card12==card17 || card13==card17 || card14==card17 || card15==card17 || card16==card17;card17=rand()%cardPull+1);
 
    for(card18=rand()%cardPull+1;card1==card18 || card2==card18 || card3==card18 || card4==card18 || card5==card18 || card6==card18 || card7==card18 || card8==card18 || card9==card18 || card10==card18 || card11==card18 || card12==card18 || card13==card18|| card14==card18 || card15==card18 || card16==card18 || card17==card18;card18=rand()%cardPull+1);

    for(card19=rand()%cardPull+1;card1==card19 || card2==card19 || card3==card19 || card4==card19 || card5==card19 || card6==card19 || card7==card19 || card8==card19 || card9==card19 || card10==card19 || card11==card19 || card12==card19 || card13==card19 || card14==card19 || card15==card19 || card16==card19 || card17==card19|| card18==card19;card19=rand()%cardPull+1);

    for(card20=rand()%cardPull+1;card1==card20 || card2==card20 || card3==card20 || card4==card20 || card5==card20 || card6==card20 || card7==card20 || card8==card20 || card9==card20 || card10==card20 || card11==card20 || card12==card20 || card13==card20 || card14==card20 || card15==card20 || card16==card20 || card17==card20|| card18==card20 || card19==card20 ;card20=rand()%cardPull+1);


    //Pull cards from the file
    string cardIn;
    for(int card=1;card<=cardPull;card++){
        input>>cardIn;
        if(card1==card)newCd1=cardIn;
        if(card2==card)newCd2=cardIn;
        if(card3==card)newCd3=cardIn;
        if(card4==card)newCd4=cardIn;
        if(card5==card)newCd5=cardIn;
        if(card6==card)newCd6=cardIn;
        if(card7==card)newCd7=cardIn;
        if(card8==card)newCd8=cardIn;
        if(card9==card)newCd9=cardIn;
        if(card10==card)newCd10=cardIn;
        if(card11==card)newCd11=cardIn;
        if(card12==card)newCd12=cardIn;
        if(card13==card)newCd13=cardIn;
        if(card14==card)newCd14=cardIn;
        if(card15==card)newCd15=cardIn;
        if(card16==card)newCd16=cardIn;
        if(card17==card)newCd17=cardIn;
        if(card18==card)newCd18=cardIn;
        if(card19==card)newCd19=cardIn;
        if(card20==card)newCd20=cardIn;
    }
    //Display Outputs

    cout<<setw(3)<<card1<<" "
        <<setw(3)<<card2<<" "
        <<setw(3)<<card3<<" "
        <<setw(3)<<card4<<" "
        <<setw(3)<<card5<<" "
        <<setw(3)<<card6<<" "
        <<setw(3)<<card7<<" "
        <<setw(3)<<card8<<" "
        <<setw(3)<<card9<<" "
        <<setw(3)<<card10<<" "
        <<setw(3)<<card11<<" "
        <<setw(3)<<card12<<" "
        <<setw(3)<<card13<<" "
        <<setw(3)<<card14<<" "
        <<setw(3)<<card15<<" "
        <<setw(3)<<card16<<" "
        <<setw(3)<<card17<<" "
        <<setw(3)<<card18<<" "
        <<setw(3)<<card19<<" "
        <<setw(3)<<card20<<endl;
    cout<<setw(3)<<newCd1<<" "
        <<setw(3)<<newCd2<<" "
        <<setw(3)<<newCd3<<" "
        <<setw(3)<<newCd4<<" "
        <<setw(3)<<newCd5<<" "
        <<setw(3)<<newCd6<<" "
        <<setw(3)<<newCd7<<" "
        <<setw(3)<<newCd8<<" "
        <<setw(3)<<newCd9<<" "
        <<setw(3)<<newCd10<<" "
        <<setw(3)<<newCd11<<" "
        <<setw(3)<<newCd12<<" "
        <<setw(3)<<newCd13<<" "
        <<setw(3)<<newCd14<<" "
        <<setw(3)<<newCd15<<" "
        <<setw(3)<<newCd16<<" "
        <<setw(3)<<newCd17<<" "
        <<setw(3)<<newCd18<<" "
        <<setw(3)<<newCd19<<" "
        <<setw(3)<<newCd20<<endl;
    
    
    //Exit stage right!
    input.close();

