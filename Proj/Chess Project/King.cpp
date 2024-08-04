/* 
 * File:   Pawn.h
 * Author: Emma Wuysang
 * Created on June 5, 2024 3:22 AM
 */

#include "King.h"

King::King(ChessBoard* board, Color color):ChessPiece(board, color){}

King::~King() {
}

string King::toString(){
    return (color == BLACK) ? "\u265A" : "\u2654";
}

vector<string>* King::legalMoves(){ // will hold all legal moves while dynamically allocating memory
    vector<string>* play = new vector<string>();
    int tempR = row;
    int tempC = column;
    ChessPiece* currentPiece = board->getPiece(Position(tempR, tempC));
    Color pieceColor = currentPiece->getColor();
    int count = 1;
    int iter = 0; //iterations
    bool forMove = false;

    while(!forMove){ // bishop can only have 7 possible moves max in a line, white's forward, black's backward
        if(board->getPiece(Position(tempR+count,tempC+count))== NULL){ // empty space infront
            if((tempR+count>=0) && (tempC+count<8)){
                play->push_back(ChessBoard::stringMove(tempR+count,tempC+count));
                forMove=true;
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

    iter = 0; //iterations
    forMove = false;
    
    while(!forMove){ // white's right, black's right
        if(board->getPiece(Position(tempR-count,tempC-count))== NULL){ // empty space infront
            if((tempR-count>=0) && (tempC-count<8)){
                play->push_back(ChessBoard::stringMove(tempR-count,tempC-count));
                forMove=true;
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

    iter = 0; //iterations
    forMove = false;
    
    while(!forMove){ // white's back, black's forward
        if(board->getPiece(Position(tempR-count,tempC+count))== NULL){ // empty space infront
            if((tempR-count>=0) && (tempC+count<8)){
                play->push_back(ChessBoard::stringMove(tempR-count,tempC+count));
                forMove=true;
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

    iter = 0; //iterations
    forMove = false;
    
    while(!forMove){ // white's left, black's left
        if(board->getPiece(Position(tempR+count,tempC-count))== NULL){ // empty space infront
            if((tempR+count>=0) && (tempC-count<8)){
                play->push_back(ChessBoard::stringMove(tempR+count,tempC-count));
                forMove=true;
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

    iter = 0; //iterations
    forMove = false;
    
    while(!forMove){ // rook can only have 7 possible moves max in a line, white's forward, black's backward
        if(board->getPiece(Position(tempR+count,tempC))== NULL){ // empty space infront
            if((tempR+count>=0) && (tempC<8)){
                play->push_back(ChessBoard::stringMove(tempR+count,tempC)); // pushes the string of the move (exa. e4)
                forMove=true;
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
 
    iter = 0; //iterations
    forMove = false;
    
    while(!forMove){ // white's right, black's right
        if(board->getPiece(Position(tempR,tempC+count))== NULL){ // empty space infront
            if((tempR>=0)&& (tempR<8) && (tempC+count<8)){
                play->push_back(ChessBoard::stringMove(tempR,tempC+count));
                forMove=true;
            }
        }
        else if(board->getPiece(Position(tempR,tempC+count))!= NULL){ // capture
            if((tempR>=0)&& (tempR<8) && (tempC+count<8)){
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

    iter = 0; //iterations
    forMove = false;
    
    while(!forMove){ // white's back, black's forward
        if(board->getPiece(Position(tempR-count,tempC))== NULL){ // empty space infront
            if((tempR-count>=0) && (tempC<8)){
                play->push_back(ChessBoard::stringMove(tempR-count,tempC));
                forMove=true;
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
    

    iter = 0; //iterations
    forMove = false;
    
    while(!forMove){ // white's left, black's left
        if(board->getPiece(Position(tempR,tempC-count))== NULL){ // empty space infront
            if((tempR>=0)&& (tempR<8) && (tempC-count<8)){
                play->push_back(ChessBoard::stringMove(tempR,tempC-count));
                forMove=true;
            }
        }
        else if(board->getPiece(Position(tempR,tempC-count))!= NULL){ // capture
            if((tempR>=0)&& (tempR<8) && (tempC-count<8)){
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
