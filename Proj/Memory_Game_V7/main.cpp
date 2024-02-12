/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 30, 2024, 5:37 PM
 * Purpose: Concentration Card Game V.7
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function Library
#include <ctime>     //Time Library
#include <iomanip>   //Formatting Library
#include <fstream>   //File Library
#include <string>    //String Objects
#include <cmath>     //Math Library
using namespace std; //Library Name-space

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes
int compareGuess(char,char,int,int &, char[], string[]);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    srand(static_cast<unsigned int>(time(0))); // seeds w/ current time.
    
    //Declare all variables
    const int cardAmt=20; // Amount of Cards
    char chce1; // choice 1
    string chce2; // choice 2
    fstream out; // output file
    string fileName; // opens fstream
    string face, suit; // Hearts and Spades + Ace-10
    unsigned short card1, card2, card3, card4, card5, card6, card7, card8, card9, card10,
                   card11,card12,card13,card14,card15,card16,card17,card18,card19,card20; // group of cards
    fstream input; // input file
    string newCd1,newCd2,newCd3,newCd4,newCd5,newCd6,newCd7,newCd8,newCd9,newCd10,
            newCd11,newCd12,newCd13,newCd14,newCd15,newCd16,newCd17,newCd18,newCd19,newCd20; // takes the file, sets random sections to string.
    char slctn; // selection
    int score = 0.00; // general score
    float avg = 0.00; // guessing rate
    string gameSes; // go to loading screen/continue game
    bool ran = false; // initializes

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
    
    // file name
    fileName="Indx.dat";
    input.open(fileName.c_str(),ios::in);
    
    //Initialize Variables
    int cardPull=20;
  
    //Unique Value for card 1.
    card1=rand()%cardPull+1;
    do{
        card2=rand()%cardPull+1;
        
    //Unique Value for card 1,2.
    }while(card1==card2);
 
    //Unique Value for card 1,2,3.
    do{
        card3=rand()%cardPull+1;
    }while(card1==card3 || card2==card3);
    
    //Unique Value for card 1,2,3,4.
    do{
        card4=rand()%cardPull+1;
    }while(card1==card4 || card2==card4 || card3==card4);
 
    //Unique Value for card 1,2,3,4,5.
    do{
        card5=rand()%cardPull+1;
    }while(card1==card5 || card2==card5 || card3==card5 || card4==card5);
    
    //Unique Value for card 1,2,3,4,5,6.
    do{
        card6=rand()%cardPull+1;
    }while(card1==card6 || card2==card6 || card3==card6 || card4==card6 || card5==card6);
 
    //Unique Value for card 1,2,3,4,5,6,7.
    do{
        card7=rand()%cardPull+1;
    }while(card1==card7 || card2==card7 || card3==card7 || card4==card7 || card5==card7 || card6==card7);
    
    //Unique Value for card 1,2,3,4,5,6,7,8.
    do{
        card8=rand()%cardPull+1;
    }while(card1==card8 || card2==card8 || card3==card8 || card4==card8 || card5==card8 || card6==card8 || card7==card8);
 
    //Unique Value for card 1,2,3,4,5,6,7,8,9.
    do{
        card9=rand()%cardPull+1;
    }while(card1==card9 || card2==card9 || card3==card9 || card4==card9 || card5==card9 || card6==card9 || card7==card9 || card8==card9);

    //Unique Value for card 1,2,3,4,5,6,7,8,9,10.
    do{
        card10=rand()%cardPull+1;
    }while(card1==card10 || card2==card10 || card3==card10 || card4==card10 || card5==card10 || card6==card10 || card7==card10 || card8==card10 || card9==card10);

    //Unique Value for card 1,2,3,4,5,6,7,8,9,10,11.
    do{
        card11=rand()%cardPull+1;
    }while(card1==card11 || card2==card11 || card3==card11 || card4==card11 || card5==card11 || card6==card11 || card7==card11 || card8==card11 || card9==card11 || card10==card11);
    
    //Unique Value for card 1,2,3,4,5,6,7,8,9,10,11,12 using for loops.
    for(card12=rand()%cardPull+1;card1==card12 || card2==card12 || card3==card12 || card4==card12 || card5==card12 || card6==card12 || card7==card12 || card8==card12 || card9==card12 || card10==card12 || card11==card12;card12=rand()%cardPull+1);
    
    //Unique Value for card 1,2,3,4,5,6,7,8,9,10,11,12,13 using for loops.
    for(card13=rand()%cardPull+1;card1==card13 || card2==card13 || card3==card13 || card4==card13 || card5==card13 || card6==card13 || card7==card13 || card8==card13 || card9==card13 || card10==card13 || card11==card13 || card12==card13;card13=rand()%cardPull+1);
    
    //Unique Value for card 1,2,3,4,5,6,7,8,9,10,11,12,13,14 using for loops.
    for(card14=rand()%cardPull+1;card1==card14 || card2==card14 || card3==card14 || card4==card14 || card5==card14 || card6==card14 || card7==card14 || card8==card14 || card9==card14 || card10==card14 || card11==card14 || card12==card14 || card13==card14;card14=rand()%cardPull+1);
    
    //Unique Value for card 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 using for loops.
    for(card15=rand()%cardPull+1;card1==card15 || card2==card15 || card3==card15 || card4==card15 || card5==card15 || card6==card15 || card7==card15 || card8==card15 || card9==card15 || card10==card15 || card11==card15 || card12==card15 || card13==card15 || card14==card15 ;card15=rand()%cardPull+1);
    
    //Unique Value for card 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 using for loops.
    for(card16=rand()%cardPull+1;card1==card16 || card2==card16 || card3==card16 || card4==card16 || card5==card16 || card6==card16 || card7==card16 || card8==card16 || card9==card16 || card10==card16 || card11==card16 || card12==card16 || card13==card16 || card14==card16 || card15==card16;card16=rand()%cardPull+1);
    
    //Unique Value for card 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17 using for loops.
    for(card17=rand()%cardPull+1;card1==card17 || card2==card17 || card3==card17 || card4==card17 || card5==card17 || card6==card17 || card7==card17 || card8==card17 || card9==card17 || card10==card17 || card11==card17 || card12==card17 || card13==card17 || card14==card17 || card15==card17 || card16==card17;card17=rand()%cardPull+1);
 
    //Unique Value for card 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18 using for loops.
    for(card18=rand()%cardPull+1;card1==card18 || card2==card18 || card3==card18 || card4==card18 || card5==card18 || card6==card18 || card7==card18 || card8==card18 || card9==card18 || card10==card18 || card11==card18 || card12==card18 || card13==card18|| card14==card18 || card15==card18 || card16==card18 || card17==card18;card18=rand()%cardPull+1);

    //Unique Value for card 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,19 using for loops.
    for(card19=rand()%cardPull+1;card1==card19 || card2==card19 || card3==card19 || card4==card19 || card5==card19 || card6==card19 || card7==card19 || card8==card19 || card9==card19 || card10==card19 || card11==card19 || card12==card19 || card13==card19 || card14==card19 || card15==card19 || card16==card19 || card17==card19|| card18==card19;card19=rand()%cardPull+1);

    //Unique Value for card 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,19,20 using for loops.
    for(card20=rand()%cardPull+1;card1==card20 || card2==card20 || card3==card20 || card4==card20 || card5==card20 || card6==card20 || card7==card20 || card8==card20 || card9==card20 || card10==card20 || card11==card20 || card12==card20 || card13==card20 || card14==card20 || card15==card20 || card16==card20 || card17==card20|| card18==card20 || card19==card20 ;card20=rand()%cardPull+1);


    //Pulls cards from the file
    string inpHold; // input holder
    
    /*loops from 1-20, taking the random num and finding
     *  the position of the string, finally, 
     * setting into a variable.
     */
    
    for(int order=1;order<=cardPull;order++){
        input>>inpHold;
        if(card1==order)newCd1=inpHold;
        else if(card2==order)newCd2=inpHold;
        else if(card3==order)newCd3=inpHold;
        else if(card4==order)newCd4=inpHold;
        else if(card5==order)newCd5=inpHold;
        else if(card6==order)newCd6=inpHold;
        else if(card7==order)newCd7=inpHold;
        else if(card8==order)newCd8=inpHold;
        else if(card9==order)newCd9=inpHold;
        else if(card10==order)newCd10=inpHold;
        else if(card11==order)newCd11=inpHold;
        else if(card12==order)newCd12=inpHold;
        else if(card13==order)newCd13=inpHold;
        else if(card14==order)newCd14=inpHold;
        else if(card15==order)newCd15=inpHold;
        else if(card16==order)newCd16=inpHold;
        else if(card17==order)newCd17=inpHold;
        else if(card18==order)newCd18=inpHold;
        else if(card19==order)newCd19=inpHold;
        else if(card20==order)newCd20=inpHold;
    }
    string cardNam[20] = {newCd1,newCd2,newCd3,newCd4,newCd5,newCd6,newCd7,newCd8,newCd9,newCd10,
            newCd11,newCd12,newCd13,newCd14,newCd15,newCd16,newCd17,newCd18,newCd19,newCd20};
    input.close(); // closes the file after taking in the variables

    
    //Display the output
    cout<<"This the Concentration Card Game!\n";
    cout<<"Would you like to enter to the loading screen?(y/n) \n";
    cin>>gameSes;

    while(gameSes=="y"){ // leads to loading screen   
        cout<<"______________________________\n";
        cout<<setw(30)<<"Welcome to the Options Menu!\n"
            <<setw(31)<<"Option One (type 1) : Introduction. \n"
            <<setw(30)<<"Option Two (type 2) : Scores.\n"
            <<setw(30)<<"Option Three (type 3) : Average.\n"
            <<"______________________________\n"
            <<endl<<setw(30)<<"Enter a Character to Skip Options Screen.\n"; 
        
        if (ran){
            cout<<"You've played the game already!\n";
        }
        cin>>slctn; // selection
        cout<<endl;
        do{ // loops the switch case for user to go through as many times.
            switch(slctn){
                case '1': // basic introduction 
                    cout<<endl<<"A half a stack of cards, only the suit of Hearts and Spades will be shuffled (excluding Joker and Royals). \n"
                        <<"20 Cards (Ace-9) will be laid out individually and the goal is to match two cards in the least amount of turns.. \n"
                        <<"A matching pair is defined as two cards with the same rank. (two Aces, two fives, etc.)   \n" 
                        <<"If the two cards make a pair, you take them and count that as a point. This is a memory game!\n"
                        <<"Project 1 will have you try to find the matching card for letter a, instead of all 20.\n"
                        <<"Since there isn't a visual stack of cards, the user must type a placement (exa. a b, f a), after choosing, the cards will be revealed.\n"<<endl;
                    cout<<endl<<"Would you like to select another option? (type 1,2,3/ if not any type any other character.)\n";
                    cin>>slctn;
                    break;
                case '2': // scores
                    if (score>=0){ // still in update for project 2
                        if (score==0){ // starting score
                            cout<<fixed<<setprecision(2);
                            cout<<endl<<"Your score is currently "<<score<<".\n";
                            cout<<"Proj 1, V.1 WIP (more added in project 2)\n";
                        }
                        else{ // after run through score
                            cout<<fixed<<setprecision(2);
                            cout<<endl<<"Your score is currently "<<score<<".\n";
                            cout<<"Proj 1, V.1 WIP (more added in project 2)\n";  
                        }
                        cout<<endl<<"Would you like to select another option? (type 1,2,3/ if not any type any other character.)\n";
                        cin>>slctn; break; 
                    }
                case '3':// average
                    cout<<fixed<<setprecision(2)<<showpoint; // iomanip library use
                    avg = 0.05 *static_cast<float>(score); // 0.05 from 1/20
                    cout<<endl<<"Your average guessing rate is currently "<<avg<<"."<<endl
                              <<"Rounded, it is "<<round(avg)<<"!\n"; // utilizing round from cmath library
                    cout<<"Proj 1, V.1 WIP (more added in project 2)\n";
                    cout<<endl<<"Would you like to select another option? (type 1,2,3/ if not any type any other character.)\n";
                    cin>>slctn;
                    break;
                default:break;   //ends case '3' 
            }
        }while(slctn=='1' || slctn=='2' || slctn=='3'); // selection if equals 1,2,or 3.
        // If the user wants to play the game
        cout<<"Want To Play?(y/any other character) \n"<<endl; // user input to begin game
        cin>>chce1;
        cout<<endl<<endl<<endl;

        chce1+=chce1<=97?32:0; // uppercase to lowercase
        chce2="";
        while(chce1 == 'y' && chce2 != "over"){
            cout<<setw(34)<<"The Concentration Card Board!\n";
            cout<<setw(24)<<"_______________\n";
            cout<<setw(25)<<"|  a  b  c  d  |\n";
            cout<<setw(25)<<"|  e  f  g  h  |\n";
            cout<<setw(25)<<"|  i  j  k  l  |\n";
            cout<<setw(25)<<"|  m  n  o  p  |\n";
            cout<<setw(25)<<"|  q  r  s  t  |\n";
            cout<<setw(24)<<"______________\n";
            char a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t, userG1, userG2; // for comparison from string letter to char
            int SIZE = 20;
            a=card1; //takes value from initial card1 (etc)
            b=card2;
            c=card3;
            d=card4;
            e=card5;
            f=card6;
            g=card7;
            h=card8;
            i=card9;
            j=card10;//takes value from initial card10 (etc)
            k=card11;
            l=card12;
            m=card13;
            n=card14;
            o=card15;
            p=card16;
            q=card17;
            r=card18;
            s=card19;
            t=card20;//takes value from initial card20 (etc)
            char deck[SIZE] = {a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t};
            cout<<"This is your board, try to find the matching pair to a! \n"
                    "Type two letters to see if you found a match! (exa. a g)\n";
            unsigned int moves = 0; // counter for amount of moves made
            bool complete = false; // initializes
            int fndAll = 0;
            while(fndAll != 10 && chce2 != "over"){ //stops when pair is found
                cin>>userG1>>userG2; // users guess 1 and 2  
                fndAll = compareGuess(userG1,userG2,moves,score,deck,cardNam);
                
            }
    
            cout<<endl<<"If you'd like to end the game, type over, if you want to keep trying type anything else. \n";
            cout<<"Reminder, most, if not each time you play the game, it'll be different! (Just re-run the game!)\n";
            cin>>chce2;    // ends loop of game, can get better score if tried again.
        }
        cout<<"Are you completely done? If you'd like to go back to the home screen type y, if not, any other character will do. ";
        ran=true; // if user has run the game
        cin>>gameSes; // ends program if any other character then y typed.
    }
    //Exit the program
    return 0;
}


int compareGuess(char userG1,char userG2,int moves,int &score, char deck[], string cardNam[]){
    bool complete;
    int SIZE = 20;
    char card[SIZE] = {'a','b','c','d','e','f','g','h','i',
        'j','k','l','m','n','o','p','q','r','s','t'};
    int temp1,temp2 = 0; // holds  indices to access deck
    static int fndAll = 0;
    

    for (int i=0;i<SIZE;i++){ // iterates through the card size
        if (userG1==card[i]){ // if their guess is inside the ASCII array
            cout<<userG1<<" was "<<cardNam[i]<<". "<<endl;
            temp1 = i;
        }
        
        else{
            cout<<"";
        }
        if (userG2==card[i]){
            cout<<userG2<<" was "<<cardNam[i]<<". "<<endl;
            temp2 = i;
        }
        
        
        else{
            cout<<"";
        }
    }

    if (deck[temp1]+10==deck[temp2] || deck[temp1]-10==deck[temp2] ){
        cout<<"They are a pair! \n"<<endl;
        moves += 1;
        fndAll+=1;
        deck[temp1] = -11;
        deck[temp2] = -11;
    }
    else if (deck[temp1]==-11 && deck[temp2]==-11){
        cout<<"These have already been matched to a pair..!\n"<<endl;
    }
    else{
        cout<<"No pair.."<<endl;
        cout<<endl;
        moves += 1;
    }
    
    if (fndAll==10){
        cout<<"You've found all ten pairs! Congrats.\n"<<endl;
        return 10;
    }
    
} // game now ends after all 10 pairs guessed! next job - transfer scores to home page,etc.