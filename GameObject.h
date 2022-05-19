#pragma once
class GameObject
{
protected:
	int x_position;
	int y_position;
	int maxX;
	int maxY;
	char icon;
public:
	GameObject(char icon, int maxX, int maxY);
	virtual void Move() = 0;
	char GetIcon();
	int GetXPosition();
	int GetYPosition();
};

