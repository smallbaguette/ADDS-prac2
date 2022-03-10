#ifndef HUMAN_H
#define HUMAN_H

class Human {
private:
    char move;

public:
    Human();
    char makeMove(); // returns current move choice
    friend class Referee;
};
#endif