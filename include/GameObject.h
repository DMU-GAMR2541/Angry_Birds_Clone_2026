#pragma once
#include <iostream>

class GameObject {
public:
	float posX;
	float posY;

protected:
	virtual void setPosition() = 0;
};
