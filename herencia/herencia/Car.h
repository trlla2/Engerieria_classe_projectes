#pragma once
#include "Vehicle.h"
#include "Motor.h"

class Car:public Vehicle, public  Motor
{
public:
	Car() 
	{
		Vehicle::numberOfWheels = 4;
	}

	Car(int numberOfWheels) :
		Vehicle(numberOfWheels)
	{
	}

	void Move() override 
	{ 
		Car::Move();
	};

private:

};

