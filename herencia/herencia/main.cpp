#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <conio.h>



void RollDice();

int main() {
	/*std::vector<Vehicle*> vs;

	Vehicle* c = new Car();
	Bicycle* b = new Bicycle();

	c->Crash(b);

	vs.push_back(new Car());
	vs.push_back(new Bicycle());


	for (Vehicle* v : vs) {
		//v->Move();
	}*/
	srand(time(NULL));
	RollDice();
	
}

void RollDice() {
	int numOfFaces = 3;

	int result = rand() % numOfFaces + 1;

	std::cout << "You rolled a " << result << "/" << numOfFaces << std::endl;
}