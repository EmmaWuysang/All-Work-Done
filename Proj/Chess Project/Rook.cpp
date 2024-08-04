/* 
 * File:   Pawn.h
 * Author: Emma Wuysang
 * Created on June 5, 2024 3:22 AM
 */

#include "Rook.h"

Rook::Rook(ChessBoard* board, Color color):ChessPiece(board, color){}

Rook::~Rook() {
}

string Rook::toString(){ // displays the unicode for Rook piece
    return (color == BLACK) ? "\u265C" : "\u2656";
}

vector<string>* Rook::legalMoves(){ // will hold all legal moves while dynamically allocating memory
    vector<string>* play = new vector<string>();
    int tempR = row;
    int tempC = column;
    ChessPiece* currentPiece = board->getPiece(Position(tempR, tempC)); // pointer to chess piece object which calls to board and calls getPiece function holding the position
    Color pieceColor = currentPiece->getColor(); // pieceColor calls getColor() function, retrieving the color
    int count = 1;
    int iter = 0; //iterations
    bool forMove = false;

    while(!forMove && count<8){ // rook can only have 7 possible moves max in a line, white's forward, black's backward
        if(board->getPiece(Position(tempR+count,tempC))== NULL){ // empty space infront
            if((tempR+count>=0) && (tempC<8)){
                play->push_back(ChessBoard::stringMove(tempR+count,tempC)); // pushes the string of the move (exa. e4)
                count+=1;
            }
        }
        else if(board->getPiece(Position(tempR+count,tempC))!= NULL){ // capturing the piece
            if((tempR+count>=0) && (tempC<8)){ // counts bounds
                if(pieceColor != board->getPiece(Position(tempR+count,tempC))->getColor()){
                    play->push_back(ChessBoard::stringMove(tempR+count,tempC));
                    forMove=true; // used to monitor for how many moves true can the piece move 
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
        if(board->getPiece(Position(tempR,tempC+count))== NULL){ // empty space infront
            if((tempR>=0) && (tempC+count<8)){
                play->push_back(ChessBoard::stringMove(tempR,tempC+count));
                count+=1;
            }
        }
        else if(board->getPiece(Position(tempR,tempC+count))!= NULL){ // capture
            if((tempR>=0) && (tempC+count<8)){
                if(pieceColor != board->getPiece(Position(tempR,tempC+count))->getColor()){ // checks to make sure the pieces aren't the same color
                    play->push_back(ChessBoard::stringMove(tempR,tempC+count));
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
    
    while(!forMove && count<8){ // white's back, black's forward
        if(board->getPiece(Position(tempR-count,tempC))== NULL){ // empty space infront
            if((tempR-count>=0) && (tempC<8)){
                play->push_back(ChessBoard::stringMove(tempR-count,tempC));
                count+=1;
            }
        }
        else if(board->getPiece(Position(tempR-count,tempC))!= NULL){ // capture
            if((tempR-count>=0) && (tempC<8)){
                if(pieceColor != board->getPiece(Position(tempR-count,tempC))->getColor()){
                    play->push_back(ChessBoard::stringMove(tempR-count,tempC));
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
        if(board->getPiece(Position(tempR,tempC-count))== NULL){ // empty space infront
            if((tempR>=0) && (tempC-count<8)){
                play->push_back(ChessBoard::stringMove(tempR,tempC-count));
                count+=1;
            }
        }
        else if(board->getPiece(Position(tempR,tempC-count))!= NULL){ // capture
            if((tempR>=0) && (tempC-count<8)){
                if(pieceColor != board->getPiece(Position(tempR,tempC-count))->getColor()){
                    play->push_back(ChessBoard::stringMove(tempR,tempC-count));
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