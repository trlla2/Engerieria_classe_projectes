#pragma once
#include "Controller.h"

class Keyboard : public Controller
{
public:
	void HandleEvent(const Event* event) override;
	const bool GetButtonDown(int actionId) override;
	const bool GetButtonUp(int actionId) override;
};

