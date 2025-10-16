#pragma once
#pragma once
#include "Scene.h"
#include <conio.h>
#include <iostream>
#include "GameData.h"

class ConfigScene : public Scene {
private:
	GameData* data;

public:
	ConfigScene(GameData* data) : data(data) {
		nextScene = "MainMenu";
	}
	void Start() override {}
	void End() override {}
	void Update() override;
	void Draw() override;
	bool const IsFinished() override { return true; }
};

void ConfigScene::Update() {
	int value;
	std::cin >> value;
	
	try {
		data->SetNumberOfFaces(value);
	}
	catch (std::string msg){
		std::cout << msg << std::endl;
	}
}

void ConfigScene::Draw() {
	std::cout << "Enter the amount of faced the dice has: ";
}
