#include "Computer.h"
#include <iostream>

Computer::Computer() {
}

char Computer::getMove() {
    return move;
}

void Computer::makeMove() {
    move = 'R';
}