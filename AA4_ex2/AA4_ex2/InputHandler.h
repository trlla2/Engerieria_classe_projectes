#pragma once
#include "Event.h"
#include "Controller.h"
#include <vector>


class InputHandler
{
public:
	void HandleEvent(const Event* event);
	void AddController(Controller* controller);
private:
	std::vector<Controller*> controllers;
};

