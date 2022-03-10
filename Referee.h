#ifndef REFEREE_H
#define REFEREE_H

#include "Human.h"
#include "Computer.h"

class Referee {
private:
    char result;

public:
    Referee();
    char refGame(Human player1, Computer player2); // pass-by-reference

};
#endif