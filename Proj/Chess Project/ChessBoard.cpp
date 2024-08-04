/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on June 5, 2024 3:22 AM
 * Purpose: Develop a game of MESS (CHESS)
 */

// Implementation file for ChessBoard class

#include "ChessBoard.h"
#include "ChessPiece.h"
#include "Rook.h"
#include "Queen.h"
#include "King.h"
#include "Bishop.h"
#include "Pawn.h"
#include "Knight.h"
#include <vector>
#include <iostream>
using namespace std;

ChessBoard::ChessBoard() { // constructor initializing 2 dimensional array
    for(int r=0; r<8; r++){
        for(int c=0; c<8; c++){
            board[r][c] = NULL;
        }
    }
}

ChessBoard::~ChessBoard() { // destructor for chessboard
    for(int r=0; r<8; r++){
        for(int c=0; c<8; c++){
            if(board[r][c] != NULL){
                delete board[r][c];
            }
        }
    }
}

void ChessBoard::initialize(){ // assigns pieces to the board, took out placePiece

    // goal : get the pieces on the board
    // each left side will be labeled with (1-8) and bottom side (A-H)
    for(int i=0;i<8;i++){
        board[1][i] = new Pawn(this, WHITE);
        board[6][i] = new Pawn(this, BLACK);

        
        switch (i)
        { // switch case which handles assigning spots to temporary pieces this will initialize the board
            case 0:
                board[0][i] = new Rook(this, WHITE);
                board[7][i] = new Rook(this, BLACK);
                break;
            case 1:
                board[0][i] = new Knight(this, WHITE);
                board[7][i] = new Knight(this, BLACK);
                break;
            case 2:
                board[0][i] = new Bishop(this, WHITE);
                board[7][i] = new Bishop(this, BLACK);
                break;
            case 3:
                board[0][i] = new Queen(this, WHITE);
                board[7][i] = new Queen(this, BLACK);
                break;
            case 4:
                board[0][i] = new King(this, WHITE);
                board[7][i] = new King(this, BLACK);
                break;
            case 5:
                board[0][i] = new Bishop(this, WHITE);
                board[7][i] = new Bishop(this, BLACK);
                break;
            case 6:
                board[0][i] = new Knight(this, WHITE);
                board[7][i] = new Knight(this, BLACK);
                break;
            case 7:
                board[0][i] = new Rook(this, WHITE);
                board[7][i] = new Rook(this, BLACK);
                break;   
        }
    }
    for (int row = 0; row < 8; row++) { // sets the rows and columns 
        for (int col = 0; col < 8; col++) {
            if (board[row][col] != nullptr) {
                board[row][col]->setRow(row);
                board[row][col]->setColumn(col);
            }
        }
    }
}
    
void ChessBoard::displayB(){ // display board
    // to print board
    int r_count = 9;
    for(int r=0;r<9;r++){
        r_count -=1; //increments down to get side numbers
        if(r!=0){
            cout<<endl;
        }
        for(int c=0;c<8;c++){
            cout<<"+---";
        }
        cout<<"+";
        cout<<endl;
        if(r!=8){
            for(int c=0;c<8;c++){ // row to column for loops to print the pieces
                cout<<"| ";
                if(board[r_count-1][c] != nullptr){ // if not a nullptr inside the array 
                    cout<<board[r_count-1][c]->toString(); // prints the count from 7-0, while c increases exa. [7][0]
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<"|  "<<r_count;
        }
    }
    cout<<"  A   B   C   D   E   F   G   H"<<endl; // prints bottom row
    cout<<"\nWhich piece do you want to move?\n";
}

// basically a duplicate of get position, takes arguments though

string ChessBoard::stringMove(int row, int col){ // gives the string move, but takes in two args.
    string pos = "";
    pos += (col + 'a'); // position of column as a num
    pos += (row + 1) + '0';
    return pos; // returns position
}

ChessPiece* ChessBoard::getPiece(Position position) { // gets the piece position
    if (position.getRow() >= 0 && position.getRow() < 8 && position.getColumn() >= 0 && position.getColumn() < 8) {
        return board[position.getRow()][position.getColumn()]; // Return the piece at the specified position
    } else {
        return nullptr; // Position is out of bounds, return nullptr
    }
}

bool ChessBoard::move(Position fromPosition, Position toPosition){ // moves the pieces
    vector<string> *play = board[fromPosition.getRow()][fromPosition.getColumn()]->legalMoves(); // call to check if moves legal
    bool check = false;
    
    string toPos = ChessBoard::stringMove(toPosition.getRow(),toPosition.getColumn()); // holds string of destination position
    int i = 0;
    while(i<(play->size()) && !check){ // iterates through the vector array
        if((*play)[i] == toPos){
            check = true;
        }
        i = i+1;
    }

    if(!check){ // if there are no legal moves
        cout<<"Move was out of bounds/Not Legal..\n";
        return false; 
    }
    
    // moves the pieces
    ChessPiece* piece = board[fromPosition.getRow()][fromPosition.getColumn()];
    board[toPosition.getRow()][toPosition.getColumn()] = piece;
    board[fromPosition.getRow()][fromPosition.getColumn()] = nullptr; // keeps the space, need nullptr for memory allocation
    piece->setPosition(toPosition);

    return true;
}