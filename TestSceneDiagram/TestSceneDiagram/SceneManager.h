#pragma once
#include <map>

#include "Scene.h"
#include "GameData.h"

// Includes cpp
#include "ConfigScene.h"
#include "GameScene.h"
#include "MenuScene.h"

class SceneManager
{
public:
	SceneManager();
	~SceneManager();

	void init();
	void Run();
private:
	std::map<std::string, Scene*> scenes;
	Scene* currentScene;
	GameData* data;
	bool playing;
	
	void Draw();
	void Update();

};

SceneManager::SceneManager()
{
	 data = new GameData;
	 srand(time(NULL));

	scenes["MainMenu"] = new MenuScene;
	scenes["Config"] = new ConfigScene(data);
	scenes["Game"] = new GameScene(data);

	currentScene = scenes["MainMenu"];
	playing = true;

	currentScene->Start();

}

SceneManager::~SceneManager()
{
	//CLEANUP
	delete data;

	for (std::map<std::string, Scene*>::iterator val = scenes.begin();
		val != scenes.end();
		val++) {
		delete val->second;
	}
	scenes.clear();
}

void SceneManager::Draw() {
	currentScene->Draw();
}

void SceneManager::Update() {
	currentScene->Update();
	if (currentScene->IsFinished()) {
		//Change scene
		currentScene->End();

		std::string nextScene = currentScene->GetNextScene();

		if (nextScene.size() == 0) { //We assume that an empty string = EXIT
			playing = false;
		}
		else {

			assert(scenes.find(nextScene) != scenes.end());
			currentScene = scenes[nextScene];

			currentScene->Start();
		}
	}
}

void SceneManager::Run() {
	while (playing) {
		Draw();
		Update();
	}
}