#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include "gameSquare.h"

/*! \class gameBoard
    \brief class qui gère le board

    Cette classe me chuâ los gvos
*/
class gameBoard
{
private:
    unsigned int dimx, dimy;
    gameSquare* table;
public:
    gameBoard();
    gameBoard(unsigned int Ndimx, unsigned int Ndimy);
    ~gameBoard();
    vec2 offToAx(int x, int y) const;
    vec2 axToOff(int q, int s) const;
    void init(unsigned int x, unsigned int y);
    void afficherConsole() const;
    unsigned int getX() const;
    unsigned int getY() const;
    gameSquare* getTable();
};
#endif
