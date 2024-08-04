/* 
 * File:   Queen.h
 * Author: Emma Wuysang
 * Created on June 5, 2024 3:22 AM
 */

#ifndef QUEEN_H
#define QUEEN_H
#include "ChessBoard.h"

class Queen : public ChessPiece {
public:
    Queen(ChessBoard* board, Color color);
    virtual ~Queen();
    string toString();
    vector<string> *legalMoves();
    
};

#endif /* QUEEN_H */
