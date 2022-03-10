#include "Referee.h"
#include "Computer.h"
#include "Human.h"

#include <iostream>

Referee::Referee(){
}

char Referee::refGame(Human player1, Computer player2) {
	if (player1.move=='P' && player2.move=='R') {
		return 'W';
	} else if (player1.move=='S' && player2.move=='R') {
		return 'L';
	} else if (player1.move=='R' && player2.move=='R') {
		return 'T';
	}
}