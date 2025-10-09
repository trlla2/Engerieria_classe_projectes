#pragma once
#include <vector>
#include "Menu.h"

class MenuManager
{
public:
	void Draw();
	void AddMenu(Menu* m);
	~MenuManager();
private:
	std::vector<Menu*> menus;
};

