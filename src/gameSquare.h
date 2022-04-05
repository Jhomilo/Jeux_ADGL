#ifndef GAMESQUARE_H
#define GAMESQUARE_H
#include "unit.h"

/*! \class gameSquare
    \brief class qui gère une case

    Cette classe me chuâ los gvos
*/
class gameSquare
{
private:
    bool occupier;
    bool building;
    std::string terrain;
    std::string unitName;
public:
    gameSquare();
    gameSquare(std::string terra, bool occupy, bool build);
    ~gameSquare();
    bool getOccupier();
    void occupy(const unit& u);
    void deOccupy();
    void afficherConsole();
    void setName(const std::string& s);
};
#endif
