#ifndef CARDLIB_H
#define CARDLIB_H

#include "card.h"
#include<list>
#include<fstream>
#include<string>

class cardLib
{
private:
    std::list<card> cardLibrary;
    unsigned int nbCartes;
public:
    cardLib();
    ~cardLib();
    void fillLibrary(const std::string & filename); //fonction qui remplit la librerie de toutes les cartes disponibles
    std::list<card>& getLib();
};
#endif
