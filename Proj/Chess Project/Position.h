/* 
 * File:   Position.h
 * Author: Emma Wuysang
 * Created on June 2, 2024, 1:22 PM
 */

#ifndef POSITION_H
#define POSITION_H

class Position{
private:
    int row;
    int col;
public:
    Position(int tempR, int tempC){
        row = tempR;
        col = tempC;
    }
    
// retrieves the private members
    int getRow()
    { return row; }
    
    int getColumn()
    { return col; }
};

#endif /* POSITION_H */
