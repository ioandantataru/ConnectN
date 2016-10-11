#include "board.h"

Board::Board(int setWidth, int setHeight, int setWinStreak, int setNumPlayers){
	if(setWidth < minWidth){
		width = minWidth;
		std::cerr<<"Invalid width (width too small)"<<std::endl;
	}else{
		width = setWidth;
	}
	
	if(setHeight < minHeight){
		height = minHeight;
		std::cerr<<"Invalid height (height too small)"<<std::endl;
	}else{
		height = setHeight;
	}

	if(setWinStreak > std::sqrt(width*width + height*height)){
		winStreak = std::sqrt(width*width + height*height);
		std::cerr<<"Invalid winStreak (winStreak too big)"<<std::endl;
	}else{
		winStreak = setWinStreak;
	}

	if(width * height < winStreak * setNumPlayers){
		numPlayers = width * height / winStreak;
		std::cerr<<"Invalid numer of players (number of players too low)"<<std::endl;
	}else{
		numPlayers = setNumPlayers;	
	}
	
	for(int i=0; i<setNumPlayers; i++){
		players[i] = new Player [numPlayers];
	}
	
}

int Board::getWidth(){
	return width;
}

int Board::getHeight(){
	return height;
}

int Board::getWinStreak(){
	return winStreak;
}

int Board::getNumPlayers(){	
	return numPlayers;
}

void Board::print(){
	for(int h = 0; h<height; h++){
		for(int w = 0; w<width; w++){
			std::cout<<"-";
		}
		std::cout<<std::endl;
	}
}