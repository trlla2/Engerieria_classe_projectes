#include "PauseMenu.h"
#include "Label.h"
#include "Image.h"
#include "Button.h"

PauseMenu::PauseMenu() {
	elements.push_back(new Label);
	elements.push_back(new Button);
	elements.push_back(new Button);
}