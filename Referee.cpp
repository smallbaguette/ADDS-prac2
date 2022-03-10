#include "Referee.h"
#include "Computer.h"
#include "Human.h"

#include <iostream>

Referee::Referee(){
}

char Referee::refGame(Human player1, Computer player2) {
	switch(player1.makeMove()){
		case 'P':
			result = 'W';
			break;
		case 'S':
			result = 'L';
			break;
		case 'R':
			result = 'T';
			break;
	}
	return result;
}