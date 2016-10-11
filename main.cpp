#include "board.h"

void play();

int main(){
	play();
}

void play(){
	bool win = false;
	int width, height, winStreak, numPlayers;
	std::cin>>width;
	std::cin>>height;
	std::cin>>winStreak;
	std::cin>>numPlayers;
// assume numPlayer is 2 for now
	Board * board = new Board(width, height, winStreak, numPlayers);
	while(!win){
		board->print();
		int nextMove = -1;
		std::cin>>nextMove;
		
	}

}