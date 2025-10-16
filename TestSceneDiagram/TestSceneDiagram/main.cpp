
#include <map>
#include <cassert>
#include "SceneManager.h"

int main() {

	SceneManager* sM = new  SceneManager;
	
	sM->Run();
	
	delete sM;
}



