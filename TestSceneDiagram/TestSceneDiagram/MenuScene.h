#pragma once
#include "Scene.h"
#include <iostream>
#include <conio.h>

class MenuScene : public Scene {
private:
	bool validInput;

public:
	MenuScene() : validInput(false) {}
	// Inherited via Scene
	void Start() override { }
	void End() override { }
	void Update() override;
	void Draw() override;
	bool const IsFinished() override { return validInput; }
};

//MenuScene.cpp
void MenuScene::Update() {
	char choice = _getch();
	validInput = choice >= '1' && choice <= '3';
	
	switch (choice) {
	case '1':
		nextScene = "Game";
		break;
	case '2':
		nextScene = "Config";
		break;
	case '3':
		nextScene = "";
		break;
	}
}

void MenuScene::Draw() {
	std::cout << "\nWelcome to the best game evar!\n\n";
	std::cout << "Please enter your choice: \n";
	std::cout << " -> 1: Play\n";
	std::cout << " -> 2: Config\n";
	std::cout << " -> 3: Exit\n\n";
	std::cout << "Please enter your choice: ";
}