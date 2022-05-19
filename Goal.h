#pragma once
#include "GameObject.h"
class Goal : public GameObject
{
public:
	Goal(char icon, int maxX, int maxY);
	void Move();
};

