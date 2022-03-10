#include "Human.h"

#include <iostream>

Human::Human() {
}

char Human::getMove() {
    return move;
}

void Human::makeMove() {
    std::cout<<"Enter move: ";
    std::cin>>move;
}