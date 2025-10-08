#include "GameScene.h"
#include <conio.h>
#include <iostream>

void GameScene::Start()
{
}

void GameScene::Update()
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

void GameScene::Draw()
{
	int numOfFaces = 3;

	int result = rand() % numOfFaces + 1;

	std::cout << "You rolled a " << result << "/" << numOfFaces << std::endl;
}

void GameScene::End()
{
}
