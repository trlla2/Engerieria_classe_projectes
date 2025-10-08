#pragma once
#include "Vehicle.h"

class Bicycle : public Vehicle
{
public:
	Bicycle();
	~Bicycle();

	void Move() override { /*a*/ };
private:

};

