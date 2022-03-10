#ifndef HUMAN_H
#define HUMAN_H

class Human {
private:
    char move;
    char makeMove(); // returns current move choice
public:
    Human();
    friend class Referee;
};
#endif