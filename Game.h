#include "Board.h"
#include "Player.h"
#include "Goal.h"
#pragma once
class Game
{
private:
	int maxPoints;
	int points;
	Board* board;
	Player* player;
	Goal* goal;

public:
	Game(int maxPoints);
	void Play();

};

