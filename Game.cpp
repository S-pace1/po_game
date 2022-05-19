#include "Game.h"
#include <conio.h>
#include <iostream>
Game::Game(int maxPoints) : maxPoints(maxPoints) {
	int ysize;
	int xsize;
	std::cout << "x size of the board: ";
	std::cin >> xsize;
	std::cout << "y size of the board: ";
	std::cin >> ysize;
	this->board = new Board(xsize,ysize);
	this->player = new Player('X', xsize, ysize);
	this->goal = new Goal('O', xsize, ysize);
	
}
void Game::Play() {
	bool exit = false;
	while (!exit) {
		board->SetPosition(player->GetIcon(), player->GetXPosition(), player->GetYPosition());
		board->SetPosition(goal->GetIcon(), goal->GetXPosition(), goal->GetYPosition());
		board->DisplayBoard();
	}
}