#include "Keyboard.h"
#include <iostream>

void Keyboard::HandleEvent(const Event* event)
{
	std::cout << "Handle Event Keyboard\n";
}

const bool Keyboard::GetButtonDown(int actionId)
{
	std::cout << "Get Button Down Keyboard\n";

	return false;
}

const bool Keyboard::GetButtonUp(int actionId)
{
	std::cout << "Get Button Up Keyboard\n";

	return false;
}
