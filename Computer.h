#ifndef COMPUTER_H
#define COMPUTER_H

class Computer {
private:
    char move;

public:
    Computer();
    char getMove(); // returns current move choice
    void makeMove(); // causes move choice to be made

};
#endif