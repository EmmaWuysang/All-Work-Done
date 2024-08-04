/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on June 5, 2024 3:22 AM
 * Purpose: Develop a game of MESS (CHESS)
 */

//System Libraries
#include <iostream> //Input-Output Library
#include "ChessBoard.h"

using namespace std;
// note: accidentally made it row column instead of column., so all of the functions, etc are written that way. exa. (row,col) not (col,row)
// did not implement placePiece

//Program Execution Begins Here
int main() {
    char userC; // User Column/Row
    int userR;
    char userTC; // Where to Move, toColumn/toRow
    int userTR;
    int hold; // to monitor how many iterations the moves occur
    char endP; // to end program
    ChessBoard* board = new ChessBoard(); // instance of chessBoard, where the board will build, etc
    board->initialize(); // assigns board positions to the pieces
    board->displayB(); // displays the board
    cout<<"_______________________\n";
    int turn=0; // for who moves
    
    
    // start of main  program
    do{
        turn+=1;
        if(turn%2!=0){ // even numbers
            
            // given position
            cout<<"You are moving for white.\n";
            cout<<"Enter in a position (ex. e1): \n";
            cin>>userC>>userR;
            
            // to position
            cout<<"Enter in the destination position (ex. e1): \n";
            cin>>userTC>>userTR;
            
            // conversions
            int intC = userC - 'a'; // converted TC
            int intTC = userTC - 'a';
            userR = userR-1;
            userTR = userTR-1;
            
            // main call to member functions
            Position toPos(userTR, intTC); // to position
            Position startPos(userR, intC); // starting position
            
            // set a piece to the board
            ChessPiece* piece1 = board->getPiece(startPos);
            
            //verification for if white
            while((piece1 != nullptr) && (piece1->getColor() != WHITE)){
                cout<<"You chose a black piece. Try Again.\n";
                cout<<"Enter in a position FOR WHITE (ex. e1): \n";
                cin>>userC>>userR;
                cout<<"Enter in the destination position (ex. e1): \n";
                cin>>userTC>>userTR;
                // conversion, to ints
                intC = userC - 'a';
                intTC = userTC - 'a';
                userR = userR - 1;
                userTR = userTR - 1;
                
                // initialize instances for Position
                startPos = Position(userR, intC);
                toPos = Position(userTR, intTC);
                piece1 = board->getPiece(startPos);
            }
            board->move(startPos,toPos); // call moves
            board->displayB(); // re-display board
        }

        else{ // MOVES FOR BLACK
            cout<<"You are moving for black.\n";
            cout<<"Enter in a position (ex. e1): \n";
            cin>>userC>>userR;
            
            // to position
            cout<<"Enter in the destination position (ex. e1): \n";
            cin>>userTC>>userTR;
            
            // conversions
            int intC = userC - 'a'; // converted TC
            int intTC = userTC - 'a';
            userR = userR-1;
            userTR = userTR-1;
            
            // main call to member functions
            Position toPos(userTR, intTC); // to position
            Position startPos(userR, intC); // starting position
            
            // set a piece to the board
            ChessPiece* piece1 = board->getPiece(startPos);
            
            //verification for if white
            while((piece1 != nullptr) && (piece1->getColor() != BLACK)){
                cout<<"You chose a white piece. Try Again.\n";
                cout<<"Enter in a position FOR BLACK (ex. e1): \n";
                cin>>userC>>userR;
                cout<<"Enter in the destination position (ex. e1): \n";
                cin>>userTC>>userTR;
                intC = userC - 'a';
                intTC = userTC - 'a';
                userR = userR - 1;
                userTR = userTR - 1;

                startPos = Position(userR, intC);
                toPos = Position(userTR, intTC);
                piece1 = board->getPiece(startPos);
            }
            board->move(startPos,toPos);
            board->displayB();
            
        }

        hold+=1; // every 5 moves, user is asked if they want to quit
        
        if(hold%5 == 0){
            cout<<"Would you like to stop playing?\n(type e for end, to continue type c)\n "; 
            cin>>endP;
            endP = tolower(endP);
        }
    }while(endP!='e'); // ends program
    
    cout<<"Thank you for playing!\n ";
    delete board; // de-allocates memory

    //Exit the program
    return 0;
}