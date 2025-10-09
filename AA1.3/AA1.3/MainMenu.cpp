#include "MainMenu.h"
#include "Label.h"
#include "Image.h"
#include "Button.h"

MainMenu::MainMenu()
{
	elements.push_back(new Image);
	elements.push_back(new Button);
	elements.push_back(new Button);
	elements.push_back(new Button);
}
