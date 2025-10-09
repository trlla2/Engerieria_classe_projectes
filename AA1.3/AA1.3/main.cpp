#include <iostream>

#include "RenderManager.h"
#include "Image.h"
#include "Animation2D.h"

#include "Model3D.h"

#include "MenuManager.h"
#include "MainMenu.h"
#include "LeaderboardMenu.h"
#include "PauseMenu.h"

void Ex1();
void Ex2();
void Ex3();

int main() {
	
	std::cout << "Ex1: \n\n";
	Ex1();

	std::cout << "Ex2: \n\n";
	Ex2();

	std::cout << "Ex3: \n\n";
	Ex3();

	return 0;
}


void Ex1() {
	RenderManager* renderManager = new RenderManager;

	renderManager->AddToRenderManager(new Image);
	renderManager->AddToRenderManager(new Animation2D);

	renderManager->Draw();

	delete renderManager;
}
void Ex2() {
	RenderManager* renderManager = new RenderManager;

	renderManager->AddToRenderManager(new Image);
	renderManager->AddToRenderManager(new Animation2D);
	renderManager->AddToRenderManager(new Model3D);

	renderManager->Draw();

	delete renderManager;
}

void Ex3() {
	MenuManager* menuManager = new MenuManager;

	menuManager->AddMenu(new MainMenu);
	menuManager->AddMenu(new LeaderboardMenu);
	menuManager->AddMenu(new PauseMenu);

	menuManager->Draw();

	delete menuManager;
}