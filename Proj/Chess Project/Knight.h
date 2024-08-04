/* 
 * File:   Knight.h
 * Author: Emma Wuysang
 * Created on May 31, 2024, 5:16 PM
 */

#ifndef KNIGHT_H
#define KNIGHT_H
#include "ChessBoard.h"

class Knight : public ChessPiece {
public:
    Knight(ChessBoard* board, Color color);
    virtual ~Knight();
    string toString();
    vector<string> *legalMoves();
};

#endif /* KNIGHT_H */
