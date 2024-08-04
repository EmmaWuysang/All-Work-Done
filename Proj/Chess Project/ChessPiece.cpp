/* 
 * File:   ChessPiece.cpp
 * Author: Emma Wuysang
 * Created on June 5, 2024 3:22 AM
 */

#include "ChessPiece.h"
#include <iostream>

ChessPiece::ChessPiece(ChessBoard* board, Color color): board(board), color(color){}

ChessPiece::~ChessPiece(){} // destructor

void ChessPiece::setRow(int r){ // sets the row (checks if in bounds)
    if(r<0 || r>8){
        cout<<"That was an invalid row number.";
        cin>>r;
    }
    row = r;
}

void ChessPiece::setColumn(int c){ // sets the columns (checks if in bounds)
    if(c<0 || c>8){
        cout<<"That was an invalid column number.";
        cin>>c;
    }
    column = c;
}

int ChessPiece::getRow(){ // returns row
    return row;
}

int ChessPiece::getColumn(){ // returns column
    return column;
}

string ChessPiece::getPosition(){ // gives the position with letter and number (ex. e8)
    int row = getRow();
    char col = getColumn() + 'a'; // adds since chars are on ascii (0=a,1=b)
    string pos = col + to_string(row);
    return pos; // returns position
}

void ChessPiece::setPosition(Position position){
    setRow(position.getRow());
    setColumn(position.getColumn());
}

