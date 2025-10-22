#pragma once
#include "Event.h"

class Controller
{
public:
	virtual void HandleEvent(const Event* event) = 0;
	virtual const bool GetButtonDown(int actionId) = 0;
	virtual const bool GetButtonUp(int actionId) = 0;
};

