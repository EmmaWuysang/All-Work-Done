/* 
 * File:   Pawn.h
 * Author: Emma Wuysang
 * Created on May 31, 2024, 5:16 PM
 */

#include "Knight.h"

Knight::Knight(ChessBoard* board, Color color):ChessPiece(board, color){}


Knight::~Knight() {
}

string Knight::toString(){
    return (color == BLACK) ? "\u265E" : "\u2658";
}

vector<string>* Knight::legalMoves(){ // will hold all legal moves while dynamically allocating memory
    vector<string>* play = new vector<string>();
    int tempR = row;
    int tempC = column;
    ChessPiece* currentPiece = board->getPiece(Position(tempR, tempC)); // pointer to chess piece object which calls to board and calls getPiece function holding the position
    Color pieceColor = currentPiece->getColor(); // pieceColor calls getColor() function, retrieving the color
    int iter = 0; //iterations
    bool forMove = false;

    while(!forMove){ // knight 2 up, 1 right
        if(board->getPiece(Position(tempR+2,tempC+1))== NULL){ // empty space infront
            if((tempR+2>=0) && (tempC+1<8)){
                play->push_back(ChessBoard::stringMove(tempR+2,tempC+1)); // pushes the string of the move (exa. e4)
            }
        }
        else if(board->getPiece(Position(tempR+2,tempC+1))!= NULL){ // capturing the piece
            if((tempR+2>=0) && (tempC+1<8)){ // counts bounds
                if(pieceColor != board->getPiece(Position(tempR+2,tempC+1))->getColor()){
                    play->push_back(ChessBoard::stringMove(tempR+2,tempC+1));
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
    
    while(!forMove){ // knight 2 up, 1 left
        if(board->getPiece(Position(tempR+2,tempC-1))== NULL){ // empty space infront
            if((tempR+2>=0) && (tempC-1<8)){
                play->push_back(ChessBoard::stringMove(tempR+2,tempC-1)); // pushes the string of the move (exa. e4)
            }
        }
        else if(board->getPiece(Position(tempR+2,tempC-1))!= NULL){ // capturing the piece
            if((tempR+2>=0) && (tempC-1<8)){ // counts bounds
                if(pieceColor != board->getPiece(Position(tempR+2,tempC-1))->getColor()){
                    play->push_back(ChessBoard::stringMove(tempR+2,tempC-1));
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
    
    while(!forMove){ // knight 2 down, 1 right
        if(board->getPiece(Position(tempR-2,tempC+1))== NULL){ // empty space infront
            if((tempR-2>=0) && (tempC+1<8)){
                play->push_back(ChessBoard::stringMove(tempR-2,tempC+1)); // pushes the string of the move (exa. e4)
            }
        }
        else if(board->getPiece(Position(tempR-2,tempC+1))!= NULL){ // capturing the piece
            if((tempR-2>=0) && (tempC+1<8)){ // counts bounds
                if(pieceColor != board->getPiece(Position(tempR-2,tempC+1))->getColor()){
                    play->push_back(ChessBoard::stringMove(tempR-2,tempC+1));
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
    
    while(!forMove){ // knight 2 up, 1 left
        if(board->getPiece(Position(tempR-2,tempC-1))== NULL){ // empty space infront
            if((tempR-2>=0) && (tempC-1<8)){
                play->push_back(ChessBoard::stringMove(tempR-2,tempC-1)); // pushes the string of the move (exa. e4)
            }
        }
        else if(board->getPiece(Position(tempR-2,tempC-1))!= NULL){ // capturing the piece
            if((tempR-2>=0) && (tempC-1<8)){ // counts bounds
                if(pieceColor != board->getPiece(Position(tempR-2,tempC-1))->getColor()){
                    play->push_back(ChessBoard::stringMove(tempR-2,tempC-1));
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
    
    
    while(!forMove){ // knight 2 right, 1 up
        if(board->getPiece(Position(tempR+1,tempC+2))== NULL){ // empty space infront
            if((tempR+1>=0) && (tempC+2<8)){
                play->push_back(ChessBoard::stringMove(tempR+1,tempC+2)); // pushes the string of the move (exa. e4)
            }
        }
        else if(board->getPiece(Position(tempR+2,tempC+1))!= NULL){ // capturing the piece
            if((tempR+1>=0) && (tempC+1<8)){ // counts bounds
                if(pieceColor != board->getPiece(Position(tempR+1,tempC+2))->getColor()){
                    play->push_back(ChessBoard::stringMove(tempR+1,tempC+2));
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
    
    
    while(!forMove){ // knight 2 right, 1 down
        if(board->getPiece(Position(tempR-1,tempC+2))== NULL){ // empty space infront
            if((tempR-1>=0) && (tempC+2<8)){
                play->push_back(ChessBoard::stringMove(tempR-1,tempC+2)); // pushes the string of the move (exa. e4)
            }
        }
        else if(board->getPiece(Position(tempR-1,tempC+2))!= NULL){ // capturing the piece
            if((tempR-1>=0) && (tempC+2<8)){ // counts bounds
                if(pieceColor != board->getPiece(Position(tempR-1,tempC+2))->getColor()){
                    play->push_back(ChessBoard::stringMove(tempR-1,tempC+2));
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
    
    while(!forMove){ // knight 2 left, 1 up
        if(board->getPiece(Position(tempR+1,tempC-2))== NULL){ // empty space infront
            if((tempR+1>=0) && (tempC-2<8)){
                play->push_back(ChessBoard::stringMove(tempR+1,tempC-2)); // pushes the string of the move (exa. e4)
            }
        }
        else if(board->getPiece(Position(tempR+1,tempC+2))!= NULL){ // capturing the piece
            if((tempR+1>=0) && (tempC-2<8)){ // counts bounds
                if(pieceColor != board->getPiece(Position(tempR+1,tempC-2))->getColor()){
                    play->push_back(ChessBoard::stringMove(tempR+1,tempC-2));
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
    
    while(!forMove){ // knight 2 left, 1 down
        if(board->getPiece(Position(tempR-1,tempC-2))== NULL){ // empty space infront
            if((tempR-1>=0) && (tempC-2<8)){
                play->push_back(ChessBoard::stringMove(tempR-1,tempC-2)); // pushes the string of the move (exa. e4)
            }
        }
        else if(board->getPiece(Position(tempR-1,tempC-2))!= NULL){ // capturing the piece
            if((tempR-1>=0) && (tempC-2<8)){ // counts bounds
                if(pieceColor != board->getPiece(Position(tempR-1,tempC-2))->getColor()){
                    play->push_back(ChessBoard::stringMove(tempR-1,tempC-2));
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
    
    return play;
}