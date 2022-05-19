#include "GameObject.h"
GameObject::GameObject(char icon, int maxX, int maxY) {
	this->icon = icon;
	this->y_position = 0;
	this->x_position = 0;
	this->maxX = maxX;
	this->maxY = maxY;
}
int GameObject::GetXPosition() {
	return this->x_position;
}
int GameObject::GetYPosition() {
	return this->y_position;
}
char GameObject::GetIcon() {
	return this->icon;
}

