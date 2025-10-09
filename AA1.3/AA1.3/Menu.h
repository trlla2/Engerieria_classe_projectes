#pragma once
#include "Renderer.h"
#include <vector>

class Menu
{
public:
	void Draw();
	~Menu();
protected:
	std::vector<Renderer*> elements;
};

