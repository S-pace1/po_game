#include "Goal.h"
#include <time.h>
#include <stdlib.h>
Goal::Goal(char icon, int maxX, int maxY) : GameObject(icon, maxX, maxY) {
	srand(time(NULL));
}

void Goal::Move() {
	this->x_position = rand() % this->maxX;
	this->y_position = rand() % this->maxY;
}