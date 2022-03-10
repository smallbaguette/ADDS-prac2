#ifndef COMPUTER_H
#define COMPUTER_H

class Computer {
private:
    char move;
    char makeMove(); // returns current move choice
public:
    Computer();
    friend class Referee;

};
#endif