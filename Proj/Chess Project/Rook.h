/* 
 * File:   Rook.h
 * Author: Emma Wuysang
 * Created on May 31, 2024, 5:16 PM
 */

#ifndef ROOK_H
#define ROOK_H
#include "ChessBoard.h"

class Rook : public ChessPiece {
public:
    Rook(ChessBoard* board, Color color);
    virtual ~Rook();
    string toString();
    vector<string> *legalMoves();
};

#endif /* ROOK_H */

