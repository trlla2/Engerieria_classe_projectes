#pragma once


class Vehicle // abstract class cause has a pure virtual function
{
public:
	unsigned int numberOfWheels;
public:
	
	Vehicle(int numberOfWheels = 0/*Default value*/) // is default constructor caus has default value parameters
	{
		this->numberOfWheels = numberOfWheels;
	}
	virtual void Move() = 0; // pure virtual

	void Crash(Vehicle* other);
private:

};