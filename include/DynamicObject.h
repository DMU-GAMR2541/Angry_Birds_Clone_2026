#pragma once
#include "GameObject.h"
class DynamicObject : public GameObject {
private: 
	int i = 0;
public:
	DynamicObject() = default;
	
	void setPosition() {
		this->posX = 10;
	}

};
