#pragma once
#include <string>
#include "GameObject.h"
class Player : public GameObject
{
private:
	std::string name;
public:
	Player(char icon, int maxX, int maxY);
	void Move();
};

