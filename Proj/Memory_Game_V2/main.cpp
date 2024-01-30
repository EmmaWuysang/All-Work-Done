/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on January 26, 2024, 12:25 PM
 * Purpose: Concentration Card Game V.3 
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function Library
#include <ctime>     //Time Library
#include <iomanip>   //Formatting Library
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
    string chce1,chce2;
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
  
    //Unique Value for first 20 cards
    card1=rand()%cardPull+1;
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
    string inpHold; // input holder
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

    
    input.close(); // closes the file after taking in the variables

    
    
    
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
                        cout<<"Proj 1, V.1 WIP\n";
                    }
                }
                else{
                    cout<<"Proj 1, V.1 WIP\n";
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
    
    while(chce1 == "y" && chce2 != "over"){
        cout<<setw(24)<<"_______________\n";
        cout<<setw(25)<<"|  a  b  c  d  |\n";
        cout<<setw(25)<<"|  e  f  g  h  |\n";
        cout<<setw(25)<<"|  i  j  k  l  |\n";
        cout<<setw(25)<<"|  m  n  o  p  |\n";
        cout<<setw(25)<<"|  q  r  s  t  |\n";
        cout<<setw(24)<<"______________\n";
        char a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t, userG1, userG2;
        a=card1;
        b=card2;
        c=card3;
        d=card4;
        e=card5;
        f=card6;
        g=card7;
        h=card8;
        i=card9;
        j=card10;
        k=card11;
        l=card12;
        m=card13;
        n=card14;
        o=card15;
        p=card16;
        q=card17;
        r=card18;
        s=card19;
        t=card20;
        cout<<"This is your board, type two letters to see if you found a match! (exa. a g)\n";

        int moves = 0;
        
        // for the A-B
        cin>>userG1>>userG2; // users guess 1 and 2
        if ((userG1=='a' && userG2=='b' && ((a-10)==b || (a+10)==b)) || (userG1=='b' && userG2=='a' && ((b-10)==a || (b+10)==a))){cout<<"That was a pair!\n";
           cout<<"You guessed the "<<newCd1<<" and "<<newCd2<<".\n"; cout<<"It took you "<<moves+1<<" moves to find the pair! \n";}
        else{cout<<"Not a pair.\n"; if(userG1=='a' && userG2=='b'){cout<<"You guessed the "<<newCd1<<" and the "<<newCd2<<".\n";}
            else{cout<<"You guessed the "<<newCd2<<" and the "<<newCd1<<".\n";}moves+=1;}

        // for the A-C
        cin>>userG1>>userG2; // users guess 1 and 2
        if ((userG1=='a' && userG2=='c' && ((a-10)==c || (a+10)==c)) || (userG1=='c' && userG2=='a' && ((c-10)==a || (c+10)==a))){cout<<"That was a pair!\n";
           cout<<"You guessed the "<<newCd1<<" and "<<newCd3<<".\n"; cout<<"It took you "<<moves+1<<" moves to find the pair! \n";}
        else{cout<<"Not a pair.\n"; if(userG1=='a' && userG2=='c'){cout<<"You guessed the "<<newCd1<<" and the "<<newCd3<<".\n";}
            else{cout<<"You guessed the "<<newCd3<<" and the "<<newCd1<<".\n";}moves+=1;}

        // for the A-D
        cin>>userG1>>userG2; // users guess 1 and 2
        if ((userG1=='a' && userG2=='d' && ((a-10)==d || (a+10)==d)) || (userG1=='d' && userG2=='a' && ((d-10)==a || (d+10)==a))){cout<<"That was a pair!\n";
           cout<<"You guessed the "<<newCd1<<" and "<<newCd4<<".\n"; cout<<"It took you "<<moves+1<<" moves to find the pair! \n";}
        else{cout<<"Not a pair.\n"; if(userG1=='a' && userG2=='d'){cout<<"You guessed the "<<newCd1<<" and the "<<newCd4<<".\n";}
            else{cout<<"You guessed the "<<newCd4<<" and the "<<newCd1<<".\n";}moves+=1;}


        // for the A-E
        cin>>userG1>>userG2; // users guess 1 and 2
        if ((userG1=='a' && userG2=='e' && ((a-10)==e || (a+10)==e)) || (userG1=='e' && userG2=='a' && ((e-10)==a || (e+10)==a))){cout<<"That was a pair!\n";
           cout<<"You guessed the "<<newCd1<<" and "<<newCd5<<".\n"; cout<<"It took you "<<moves+1<<" moves to find the pair! \n";}
        else{cout<<"Not a pair.\n"; if(userG1=='a' && userG2=='e'){cout<<"You guessed the "<<newCd1<<" and the "<<newCd5<<".\n";}
            else{cout<<"You guessed the "<<newCd5<<" and the "<<newCd1<<".\n";}moves+=1;}


        // for the A-F
        cin>>userG1>>userG2; // users guess 1 and 2
        if ((userG1=='a' && userG2=='f' && ((a-10)==f || (a+10)==f)) || (userG1=='f' && userG2=='a' && ((f-10)==a || (f+10)==a))){cout<<"That was a pair!\n";
           cout<<"You guessed the "<<newCd1<<" and "<<newCd6<<".\n"; cout<<"It took you "<<moves+1<<" moves to find the pair! \n";}
        else{cout<<"Not a pair.\n"; if(userG1=='a' && userG2=='f'){cout<<"You guessed the "<<newCd1<<" and the "<<newCd6<<".\n";}
            else{cout<<"You guessed the "<<newCd6<<" and the "<<newCd1<<".\n";}moves+=1;}


        // for the A-G
        cin>>userG1>>userG2; // users guess 1 and 2
        if ((userG1=='a' && userG2=='g' && ((a-10)==g || (a+10)==g)) || (userG1=='g' && userG2=='a' && ((g-10)==a || (g+10)==a))){cout<<"That was a pair!\n";
           cout<<"You guessed the "<<newCd1<<" and "<<newCd7<<".\n"; cout<<"It took you "<<moves+1<<" moves to find the pair! \n";}
        else{cout<<"Not a pair.\n"; if(userG1=='a' && userG2=='g'){cout<<"You guessed the "<<newCd1<<" and the "<<newCd7<<".\n";}
            else{cout<<"You guessed the "<<newCd7<<" and the "<<newCd1<<".\n";}moves+=1;}

        // for the A-H
        cin>>userG1>>userG2; // users guess 1 and 2
        if ((userG1=='a' && userG2=='h' && ((a-10)==h || (a+10)==h)) || (userG1=='h' && userG2=='a' && ((h-10)==a || (h+10)==a))){cout<<"That was a pair!\n";
           cout<<"You guessed the "<<newCd1<<" and "<<newCd8<<".\n"; cout<<"It took you "<<moves+1<<" moves to find the pair! \n";}
        else{cout<<"Not a pair.\n"; if(userG1=='a' && userG2=='h'){cout<<"You guessed the "<<newCd1<<" and the "<<newCd8<<".\n";}
            else{cout<<"You guessed the "<<newCd8<<" and the "<<newCd1<<".\n";}moves+=1;}

        // for the A-I
        cin>>userG1>>userG2; // users guess 1 and 2
        if ((userG1=='a' && userG2=='i' && ((a-10)==i || (a+10)==i)) || (userG1=='i' && userG2=='a' && ((i-10)==a || (i+10)==a))){cout<<"That was a pair!\n";
           cout<<"You guessed the "<<newCd1<<" and "<<newCd9<<".\n"; cout<<"It took you "<<moves+1<<" moves to find the pair! \n";}
        else{cout<<"Not a pair.\n"; if(userG1=='a' && userG2=='i'){cout<<"You guessed the "<<newCd1<<" and the "<<newCd9<<".\n";}
            else{cout<<"You guessed the "<<newCd9<<" and the "<<newCd1<<".\n";}moves+=1;}

        // for the A-J
        cin>>userG1>>userG2; // users guess 1 and 2
        if ((userG1=='a' && userG2=='j' && ((a-10)==j || (a+10)==j)) || (userG1=='j' && userG2=='a' && ((j-10)==a || (j+10)==a))){cout<<"That was a pair!\n";
           cout<<"You guessed the "<<newCd1<<" and "<<newCd10<<".\n"; cout<<"It took you "<<moves+1<<" moves to find the pair! \n";}
        else{cout<<"Not a pair.\n"; if(userG1=='a' && userG2=='j'){cout<<"You guessed the "<<newCd1<<" and the "<<newCd10<<".\n";}
            else{cout<<"You guessed the "<<newCd10<<" and the "<<newCd1<<".\n";}moves+=1;}

        // for the A-K
        cin>>userG1>>userG2; // users guess 1 and 2
        if ((userG1=='a' && userG2=='k' && ((a-10)==k || (a+10)==k)) || (userG1=='k' && userG2=='a' && ((k-10)==a || (k+10)==a))){cout<<"That was a pair!\n";
           cout<<"You guessed the "<<newCd1<<" and "<<newCd11<<".\n"; cout<<"It took you "<<moves+1<<" moves to find the pair! \n";}
        else{cout<<"Not a pair.\n"; if(userG1=='a' && userG2=='k'){cout<<"You guessed the "<<newCd1<<" and the "<<newCd11<<".\n";}
            else{cout<<"You guessed the "<<newCd11<<" and the "<<newCd1<<".\n";}moves+=1;}

        // for the A-L
        cin>>userG1>>userG2; // users guess 1 and 2
        if ((userG1=='a' && userG2=='l' && ((a-10)==l || (a+10)==l)) || (userG1=='l' && userG2=='a' && ((l-10)==a || (l+10)==a))){cout<<"That was a pair!\n";
           cout<<"You guessed the "<<newCd1<<" and "<<newCd12<<".\n"; cout<<"It took you "<<moves+1<<" moves to find the pair! \n";}
        else{cout<<"Not a pair.\n"; if(userG1=='a' && userG2=='l'){cout<<"You guessed the "<<newCd1<<" and the "<<newCd12<<".\n";}
            else{cout<<"You guessed the "<<newCd12<<" and the "<<newCd1<<".\n";}moves+=1;}   

        // for the A-M
        cin>>userG1>>userG2; // users guess 1 and 2
        if ((userG1=='a' && userG2=='m' && ((a-10)==m || (a+10)==m)) || (userG1=='m' && userG2=='a' && ((m-10)==a || (m+10)==a))){cout<<"That was a pair!\n";
           cout<<"You guessed the "<<newCd1<<" and "<<newCd13<<".\n"; cout<<"It took you "<<moves+1<<" moves to find the pair! \n";}
        else{cout<<"Not a pair.\n"; if(userG1=='a' && userG2=='m'){cout<<"You guessed the "<<newCd1<<" and the "<<newCd13<<".\n";}
            else{cout<<"You guessed the "<<newCd13<<" and the "<<newCd1<<".\n";}moves+=1;}

        // for the A-N
        cin>>userG1>>userG2; // users guess 1 and 2
        if ((userG1=='a' && userG2=='n' && ((a-10)==n || (a+10)==n)) || (userG1=='n' && userG2=='a' && ((n-10)==a || (n+10)==a))){cout<<"That was a pair!\n";
           cout<<"You guessed the "<<newCd1<<" and "<<newCd14<<".\n"; cout<<"It took you "<<moves+1<<" moves to find the pair! \n";}
        else{cout<<"Not a pair.\n"; if(userG1=='a' && userG2=='n'){cout<<"You guessed the "<<newCd1<<" and the "<<newCd14<<".\n";}
            else{cout<<"You guessed the "<<newCd14<<" and the "<<newCd1<<".\n";}moves+=1;}

        // for the A-O
        cin>>userG1>>userG2; // users guess 1 and 2
        if ((userG1=='a' && userG2=='o' && ((a-10)==o || (a+10)==o)) || (userG1=='o' && userG2=='a' && ((o-10)==a || (o+10)==a))){cout<<"That was a pair!\n";
           cout<<"You guessed the "<<newCd1<<" and "<<newCd15<<".\n"; cout<<"It took you "<<moves+1<<" moves to find the pair! \n";}
        else{cout<<"Not a pair.\n"; if(userG1=='a' && userG2=='o'){cout<<"You guessed the "<<newCd1<<" and the "<<newCd15<<".\n";}
            else{cout<<"You guessed the "<<newCd15<<" and the "<<newCd1<<".\n";}moves+=1;}

        // for the A-P
        cin>>userG1>>userG2; // users guess 1 and 2
        if ((userG1=='a' && userG2=='p' && ((a-10)==p || (a+10)==p)) || (userG1=='p' && userG2=='a' && ((p-10)==a || (p+10)==a))){cout<<"That was a pair!\n";
           cout<<"You guessed the "<<newCd1<<" and "<<newCd16<<".\n"; cout<<"It took you "<<moves+1<<" moves to find the pair! \n";}
        else{cout<<"Not a pair.\n"; if(userG1=='a' && userG2=='p'){cout<<"You guessed the "<<newCd1<<" and the "<<newCd16<<".\n";}
            else{cout<<"You guessed the "<<newCd16<<" and the "<<newCd1<<".\n";}moves+=1;}

        // for the A-Q
        cin>>userG1>>userG2; // users guess 1 and 2
        if ((userG1=='a' && userG2=='q' && ((a-10)==q || (a+10)==q)) || (userG1=='q' && userG2=='a' && ((q-10)==a || (q+10)==a))){cout<<"That was a pair!\n";
           cout<<"You guessed the "<<newCd1<<" and "<<newCd17<<".\n"; cout<<"It took you "<<moves+1<<" moves to find the pair! \n";}
        else{cout<<"Not a pair.\n"; if(userG1=='a' && userG2=='q'){cout<<"You guessed the "<<newCd1<<" and the "<<newCd17<<".\n";}
            else{cout<<"You guessed the "<<newCd17<<" and the "<<newCd1<<".\n";}moves+=1;}

        // for the A-R
        cin>>userG1>>userG2; // users guess 1 and 2
        if ((userG1=='a' && userG2=='r' && ((a-10)==r || (a+10)==r)) || (userG1=='r' && userG2=='a' && ((r-10)==a || (r+10)==a))){cout<<"That was a pair!\n";
           cout<<"You guessed the "<<newCd1<<" and "<<newCd18<<".\n"; cout<<"It took you "<<moves+1<<" moves to find the pair! \n";}
        else{cout<<"Not a pair.\n"; if(userG1=='a' && userG2=='r'){cout<<"You guessed the "<<newCd1<<" and the "<<newCd18<<".\n";}
            else{cout<<"You guessed the "<<newCd18<<" and the "<<newCd1<<".\n";}moves+=1;}

        // for the A-S
        cin>>userG1>>userG2; // users guess 1 and 2
        if ((userG1=='s' && userG2=='s' && ((a-10)==s || (a+10)==s)) || (userG1=='s' && userG2=='a' && ((s-10)==a || (s+10)==a))){cout<<"That was a pair!\n";
           cout<<"You guessed the "<<newCd1<<" and "<<newCd19<<".\n"; cout<<"It took you "<<moves+1<<" moves to find the pair! \n";}
        else{cout<<"Not a pair.\n"; if(userG1=='a' && userG2=='s'){cout<<"You guessed the "<<newCd1<<" and the "<<newCd19<<".\n";}
            else{cout<<"You guessed the "<<newCd19<<" and the "<<newCd1<<".\n";}moves+=1;}

        // for the A-T
        cin>>userG1>>userG2; // users guess 1 and 2
        if ((userG1=='a' && userG2=='t' && ((a-10)==t || (a+10)==t)) || (userG1=='t' && userG2=='a' && ((t-10)==a || (t+10)==a))){cout<<"That was a pair!\n";
           cout<<"You guessed the "<<newCd1<<" and "<<newCd20<<".\n"; cout<<"It took you "<<moves+1<<" moves to find the pair! \n";}
        else{cout<<"Not a pair.\n"; if(userG1=='a' && userG2=='t'){cout<<"You guessed the "<<newCd1<<" and the "<<newCd20<<".\n";}
            else{cout<<"You guessed the "<<newCd20<<" and the "<<newCd1<<".\n";}moves+=1;}
        
        
    cout<<"If you'd like to end the game before matching all the cards, type over. ";
    cin>>chce2;        
    }    
    //Exit the program
    return 0;
}
