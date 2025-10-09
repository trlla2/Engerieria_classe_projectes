#include "LeaderboardMenu.h"
#include "Label.h"
#include "Image.h"
#include "Button.h"

LeaderboardMenu::LeaderboardMenu() {
	elements.push_back(new Label);
	elements.push_back(new Label);
	elements.push_back(new Button);
}
