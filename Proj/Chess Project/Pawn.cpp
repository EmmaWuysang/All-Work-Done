/* 
 * File:   Pawn.h
 * Author: Emma Wuysang
 * Created on June 4, 11:30 AM
 */

#include "Pawn.h"

Pawn::Pawn(ChessBoard* board, Color color):ChessPiece(board, color){}

Pawn::~Pawn() {
}

string Pawn::toString(){ // displays the unicode for Pawn piece
    return (color == BLACK) ? "\u265F" : "\u2659";
}

vector<string>* Pawn::legalMoves(){ // will hold all legal moves while dynamically allocating memory
    vector<string>* play = new vector<string>();
    int tempR = row;
    int tempC = column;
    ChessPiece* currentPiece = board->getPiece(Position(tempR, tempC));
    Color pieceColor = currentPiece->getColor();


    switch(pieceColor){
        case WHITE:
            if(board->getPiece(Position(tempR+1,tempC))== NULL){
                play->push_back(ChessBoard::stringMove(tempR+1,tempC)); // accounts for one move forward
            }
            if(tempR == 1){ // since pawns can move two forward in the beginning
                if(board->getPiece(Position(tempR+2,tempC))== NULL){
                    play->push_back(ChessBoard::stringMove(tempR+2,tempC));
                }
            }
            // to capture a piece specifically diagonal from pawn, rightside
            if(board->getPiece(Position(tempR+1,tempC+1))!= NULL && board->getPiece(Position(tempR+1,tempC+1))->getColor() != WHITE){
                if((tempR+1>=0) && (tempC+1<8)){ // in-bounds check
                    play->push_back(ChessBoard::stringMove(tempR+1,tempC+1)); // accounts for one move forward
                }
            }
            // to capture a piece specifically diagonal from pawn, leftside
            if(board->getPiece(Position(tempR+1,tempC-1))!= NULL && board->getPiece(Position(tempR+1,tempC-1))->getColor() != WHITE){
                if((tempR+1>=0) && (tempC-1<8)){ // in-bounds check
                    play->push_back(ChessBoard::stringMove(tempR+1,tempC-1)); // accounts for one move forward
                }
            } break;
        
        case BLACK:
            if(board->getPiece(Position(tempR-1,tempC))== NULL){
                play->push_back(ChessBoard::stringMove(tempR-1,tempC)); // accounts for one move forward
            }
            if(tempR == 6){ // since pawns can move two forward in the beginning
                if(board->getPiece(Position(tempR-2,tempC))== NULL){
                    play->push_back(ChessBoard::stringMove(tempR-2,tempC));
                }
            }
            // to capture a piece specifically diagonal from pawn, rightside
            if(board->getPiece(Position(tempR-1,tempC-1))!= NULL && board->getPiece(Position(tempR-1,tempC-1))->getColor() != BLACK){
                if((tempR+1>=0) && (tempC+1<8)){ // in-bounds check
                    play->push_back(ChessBoard::stringMove(tempR-1,tempC-1)); // accounts for one move forward
                }
            }
            // to capture a piece specifically diagonal from pawn, leftside
            if(board->getPiece(Position(tempR-1,tempC+1))!= NULL && board->getPiece(Position(tempR-1,tempC+1))->getColor() != BLACK){
                if((tempR+1>=0) && (tempC-1<8)){ // in-bounds check
                    play->push_back(ChessBoard::stringMove(tempR-1,tempC+1)); // accounts for one move forward
                }
            } break;
    }
        

    return play;
}