#ifndef HUMAN_H
#define HUMAN_H

class Human {
private:
    char move;

public:
    Human();
    char getMove(); // returns current move choice
    void makeMove(); // causes move choice to be made

};
#endif