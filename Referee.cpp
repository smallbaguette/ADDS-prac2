#include "Referee.h"
#include "Computer.h"
#include "Human.h"

#include <iostream>

Referee::Referee(){
}

char Referee::refGame(Human player1, Computer player2) {
	if (player1.move=='P') {
	    result='W';
	} else if (player1.move=='S') {
	    result='L';
	} else if (player1.move==player2.move) {
	    result='T';
	}
	return result;
}