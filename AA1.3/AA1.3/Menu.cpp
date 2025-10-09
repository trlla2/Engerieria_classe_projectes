#include "Menu.h"
#include <iostream>


void Menu::Draw() {
	for (Renderer* r : elements) {
		r->Draw();
	}
}

Menu::~Menu()
{
	for (Renderer* r : elements) {
		delete r;
	}
}
