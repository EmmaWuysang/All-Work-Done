/* 
 * File:   main.cpp
 * Author: Emma Wuysang
 * Created on June 5, 2024 3:22 AM
 * Purpose: Develop a game of MESS (CHESS)
 */

// Specification file for ChessBoard class
#ifndef CHESSBOARD_H
#define CHESSBOARD_H
#include "ChessPiece.h"
#include <string>
#include <vector>
#include <iomanip>
#include <iostream>
using namespace std;

class ChessBoard {
private:
    ChessPiece* board[8][8]; // 8X8 array
public:
    ChessBoard(); // initialize board to 8X8 array with all nullptrs
    ~ChessBoard(); // destructor
    
    void initialize(); // use the constructors of the appropriate pieces, and call placePiece below to place the newly constructed pieces in the right position.
    void displayB();
    ChessPiece* getPiece(Position position); // gives chess piece at given position
    //bool placePiece(ChessPiece* piece, Position position); // takes starting pos ( where chess piece began ), then ending pos ; returns true or false since might be illegal move 
    bool move(Position fromPosition, Position toPosition);
    string toString(); // outputs the board
    static string stringMove(int row, int col); // changes numbers digits like 1,2 to c2
    
};

#endif /* CHESSBOARD_H */
