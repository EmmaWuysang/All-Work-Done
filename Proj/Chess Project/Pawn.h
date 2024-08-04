/* 
 * File:   Pawn.h
 * Author: Emma Wuysang
 * Created on May 31, 2024, 5:16 PM
 */

#ifndef PAWN_H
#define PAWN_H
#include "ChessBoard.h"

class Pawn : public ChessPiece {
public:
    Pawn(ChessBoard* board, Color color);
    virtual ~Pawn();
    string toString();
    vector<string> *legalMoves();
};

#endif /* PAWN_H */


