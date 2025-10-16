#pragma once
#include <math.h>
#include <exception>

class GameData {
private:
	int numberOfFaces;
public:
	GameData() : numberOfFaces(3) {}
	GameData(int numberOfFaces) {
		SetNumberOfFaces(numberOfFaces);
	}
	int const GetNumberOfFaces() { return numberOfFaces; }
	void SetNumberOfFaces(int val) { 
		int temp = (int)fmax(3, val);
		numberOfFaces = temp;
		if (val < 3)
			throw "Dice faces was set to three because the input value was too small";
	}
};