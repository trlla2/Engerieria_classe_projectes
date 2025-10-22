#include "InputHandler.h"
#include <iostream>

void InputHandler::HandleEvent(const Event* event)
{
	for (Controller* c : controllers) 
	{
		c->HandleEvent(event);
	}
}

void InputHandler::AddController(Controller* controller)
{
	std::cout << "Add Controller InputHandler\n";
}
