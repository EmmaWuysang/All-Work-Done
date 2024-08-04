/* 
 * File:   King.h
 * Author: Emma Wuysang
 * Created on May 31, 2024, 5:16 PM
 */

#ifndef KING_H
#define KING_H
#include "ChessBoard.h"

class King : public ChessPiece {
public:
    King(ChessBoard* board, Color color);
    virtual ~King();
    string toString();
    vector<string> *legalMoves();
};

#endif /* KING_H */

