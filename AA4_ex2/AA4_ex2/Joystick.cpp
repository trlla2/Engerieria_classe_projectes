#include "Joystick.h"
#include <iostream>

void Joystick::HandleEvent(const Event* event)
{
	std::cout << "Handle Event Joystick\n";
}

const bool Joystick::GetButtonDown(int actionId)
{
	std::cout << "Get Button Down Joystick\n";

	return false;
}

const bool Joystick::GetButtonUp(int actionId)
{
	std::cout << "Get Button Up Joystick\n";

	return false;
}
