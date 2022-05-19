#include "Board.h"
#include <string>
#include <iostream>
Board::Board(int x, int y) {
	this->size[1] = x;
	this->size[0] = y;
	CreateBoard();
}
void Board::ResetBoard() {
	//delete old 2d array
	for (int i = 0; i < this->size[0]; i++) {
		delete[] board[i];
	}
	delete[] board;
	// create 2d array
	CreateBoard();
}
void Board::CreateBoard() {
	board = new char* [this->size[0]];
	for (int i = 0; i < this->size[0]; i++) {
		board[i] = new char[this->size[1]];
		for (int j = 0; j < this->size[1]; j++) { // fill with empty chars
			board[i][j] = ' ';
		}
	}
}
void Board::SetPosition(char target, int x, int y) {
	board[y][x] = target;
}
void Board::DisplayBoard() {
	system("cls");
	std::string output = "";
	for (int i = 0; i < this->size[0]; i++) {
		for (int j = 0; j < this->size[1]; j++) {
			output = output + "[" + this->board[i][j] + "]";
		}
		output = output + "\n";
	}
	std::cout << output;
}