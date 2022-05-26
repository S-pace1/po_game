#include "Player.h"
#include <iostream>
#include <conio.h>
Player::Player(char icon, int maxX, int maxY):GameObject(icon, maxX, maxY) {}

void Player::Move(){
	char moveInput;
	moveInput = _getch();
	switch (moveInput)
	{
	case 'a':
		this->x_position--;
		break;
	case 'd':
		this->x_position++;
		break;
	case 'w':
		this->y_position--;
		break;
	case 's':
		this->y_position++;
		break;
	default:
		break;
	}


	if (this->x_position < 0) {
		this->x_position = this->maxX;
	}
	else if (this->x_position > maxX) {
		this->x_position = 0;
	}


	else if (this->y_position < 0) {
		this->y_position = this->maxY;
	}
	else if (this->y_position > maxY) {
		this->y_position = 0;
	}
}
