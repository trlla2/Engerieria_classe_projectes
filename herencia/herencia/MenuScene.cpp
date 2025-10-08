#include "MenuScene.h"
#include <iostream>
#include <conio.h>

void MenuScene::Start()
{

}

void MenuScene::Update()
{
	char choise = _getch();

	switch (choise)
	{
	case 1:
		// go to the game
		break;
	case 2:
		// config
		break;
	case 3:
		//exit
		break;
	}

}

void MenuScene::Draw()
{
	std::cout << " Dice game\n\n";
	std::cout << "chose:\n";
	std::cout << " -> 1: Play\n";
	std::cout << " -> 2: Config\n";
	std::cout << " -> 3: Exit\n";
}

void MenuScene::End()
{
}
