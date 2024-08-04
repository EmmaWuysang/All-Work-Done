/* 
 * File:   Pawn.h
 * Author: Emma Wuysang
 * Created on June 5, 2024 3:22 AM
 */

#include "Bishop.h"

Bishop::Bishop(ChessBoard* board, Color color):ChessPiece(board, color){}

Bishop::~Bishop(){};

string Bishop::toString(){ // displays the unicode for Bishop piece
    return (color == BLACK) ? "\u265D" : "\u2657";
}

vector<string>* Bishop::legalMoves(){ // will hold all legal moves while dynamically allocating memory
    vector<string>* play = new vector<string>();
    int tempR = row;
    int tempC = column;
    ChessPiece* currentPiece = board->getPiece(Position(tempR, tempC));
    Color pieceColor = currentPiece->getColor();
    int count = 1;
    int iter = 0; //iterations
    bool forMove = false;

    while(!forMove && count<8){ // rook can only have 7 possible moves max in a line, white's forward, black's backward
        if(board->getPiece(Position(tempR+count,tempC+count))== NULL){ // empty space infront
            if((tempR+count>=0) && (tempC+count<8)){
                play->push_back(ChessBoard::stringMove(tempR+count,tempC+count));
                count+=1;
            }
        }
        else if(board->getPiece(Position(tempR+count,tempC+count))!= NULL){ // capture
            if((tempR+count>=0) && (tempC+count<8)){
                if(pieceColor != board->getPiece(Position(tempR+count,tempC+count))->getColor()){
                    play->push_back(ChessBoard::stringMove(tempR+count,tempC+count));
                    forMove=true;
                }
            }
        }
        else{
            forMove=true;
        }
        iter+=1;
        if(iter>=8){
            forMove = true;
        }   
    }
    
    count = 1;
    iter = 0; //iterations
    forMove = false;
    
    while(!forMove && count<8){ // white's right, black's right
        if(board->getPiece(Position(tempR-count,tempC-count))== NULL){ // empty space infront
            if((tempR-count>=0) && (tempC-count<8)){
                play->push_back(ChessBoard::stringMove(tempR-count,tempC-count));
                count+=1;
            }
        }
        else if(board->getPiece(Position(tempR-count,tempC-count))!= NULL){ // capture
            if((tempR-count>=0) && (tempC-count<8)){
                if(pieceColor != board->getPiece(Position(tempR-count,tempC-count))->getColor()){
                    play->push_back(ChessBoard::stringMove(tempR-count,tempC-count));
                    forMove=true;
                }
            }
        }
        else{ // if not empty in front or opposite colored piece in moving direction, determines there's not possible moves in the direction
            forMove=true;
        }
        iter+=1;
        if(iter>=8){ // not more than 8 moves in any direction possible (technically 7)
            forMove = true;
        }   
    }
    
    count = 1;
    iter = 0; //iterations
    forMove = false;
    
    while(!forMove && count<8){ // white's back, black's forward
        if(board->getPiece(Position(tempR-count,tempC+count))== NULL){ // empty space infront
            if((tempR-count>=0) && (tempC+count<8)){
                play->push_back(ChessBoard::stringMove(tempR-count,tempC+count));
                count+=1;
            }
        }
        else if(board->getPiece(Position(tempR-count,tempC+count))!= NULL){ // capture
            if((tempR-count>=0) && (tempC+count<8)){
                if(pieceColor != board->getPiece(Position(tempR-count,tempC+count))->getColor()){
                    play->push_back(ChessBoard::stringMove(tempR-count,tempC+count));
                    forMove=true;
                }
            }
        }
        else{
            forMove=true;
        }
        iter+=1;
        if(iter>=8){
            forMove = true;
        }   
    }
    
    count = 1;
    iter = 0; //iterations
    forMove = false;
    
    while(!forMove && count<8){ // white's left, black's left
        if(board->getPiece(Position(tempR+count,tempC-count))== NULL){ // empty space infront
            if((tempR+count>=0) && (tempC-count<8)){
                play->push_back(ChessBoard::stringMove(tempR+count,tempC-count));
                count+=1;
            }
        }
        else if(board->getPiece(Position(tempR+count,tempC-count))!= NULL){ // capture
            if((tempR+count>=0) && (tempC-count<8)){
                if(pieceColor != board->getPiece(Position(tempR+count,tempC-count))->getColor()){
                    play->push_back(ChessBoard::stringMove(tempR+count,tempC-count));
                    forMove=true;
                }
            }
        }
        else{
            forMove=true;
        }
        iter+=1;
        if(iter>=8){
            forMove = true;
        }   
    }

    return play;
}