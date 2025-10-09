#include "MenuManager.h"
#include <iostream>

void MenuManager::Draw() {
	for (Menu* m : menus) {
		m->Draw();
		std::cout << "\n\n";
	}
}

void MenuManager::AddMenu(Menu* m)
{
	menus.push_back(m);
}

MenuManager::~MenuManager()
{
	for (Menu* m : menus) {
		delete m;
	}
}
