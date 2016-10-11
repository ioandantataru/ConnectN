#ifndef BOARD_H
#define BOARD_H

#include "player.h"
#include <iostream>
#include <cmath>

#define minWidth 2
#define minHeight  2

class Board{
	int width;
	int height;
	int winStreak;
	int numPlayers;
	Player * players[];

public:
	Board(int setWidth, int setHeight, int setWinStreak, int setNumPlayers);
	int getWidth();
	int getHeight();
	int getWinStreak();
	int getNumPlayers();
	void print();	
};

#endif