/* 
 * File:   ChessPiece.h
 * Author: Emma Wuysang
 * Created on June 5, 2024 3:22 AM
 */

//Specification file for ChessPiece class

#ifndef CHESSPIECE_H
#define CHESSPIECE_H
#include "position.h"
#include <string> 
#include <vector>
using namespace std;
class ChessBoard;

enum Color{WHITE,BLACK}; // chess piece colors

class ChessPiece {
// class that stores position where the piece is located + its color
protected:
    ChessBoard* board; // the board it belongs to, default null
    int row; // the index of the horizontal rows 0..7
    int column; // the index of the vertical column 0..7
    Color color; // the color of the piece
public:
    ChessPiece(ChessBoard* board, Color color); // should set the board and color attributes
    virtual ~ChessPiece() = 0; // destructor
    
    int getRow(); // returns row
    int getColumn(); // returns column
    void setRow(int i); // sets row
    void setColumn(int i);
    
    Color getColor()
    { return color; } // returns color of the piece
    string getPosition(); // returns position of piece in single format (ex. e1)
    void setPosition(Position position); // sets position of piece to correct row/column
    virtual string toString() = 0; // returns a string composed of a single character (unicodes)
    virtual vector<string> *legalMoves() = 0; // returns all legal moves the piece can make (each string in array should be the possible position for piece)
    
};

#endif /* CHESSPIECE_H */