 /*
 * File:   Bishop.h
 * Author: Emma Wuysang
 * Created on May 31, 2024, 5:16 PM
 */

#ifndef BISHOP_H
#define BISHOP_H
#include "ChessBoard.h"


class Bishop : public ChessPiece {
public:
    Bishop(ChessBoard* board, Color color);
    virtual ~Bishop();
    string toString();
    vector<string> *legalMoves();

};

#endif /* BISHOP_H */

