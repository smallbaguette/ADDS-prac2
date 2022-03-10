#include "Referee.h"
#include "Computer.h"
#include "Human.h"

#include <iostream>

Referee::Referee(){
}

char Referee::refGame(Human player1, Computer player2) {
	if (player1.getMove()=='P') {
	    result='W';
	} else if (player1.getMove()=='S') {
	    result='L';
	} else if (player1.getMove()==player2.getMove()) {
	    result='T';
	}
	return result;
}