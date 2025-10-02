#include <iostream>
#include <fstream>
#include <cassert>
#include <map>
void SaveMap(std::map<std::string, int> m, std::string fileName);
void RecoverMap(std::map<std::string, int>& m, std::string fileName);

int main() {


	std::map<std::string, int> myMap;

	try {
		SaveMap(myMap, "MyFile.dat");
	}
	catch(std::exception e){
		std::cout << e.what() << std::endl;
	}

}

void SaveMap(std::map<std::string, int> m, std::string fileName) {

	std::ofstream out;

	out.open(fileName, std::ios::binary | std::ios::out | std::ios::trunc);

	/*int* ptr = nullptr;

	assert(ptr);*/

	if (!out.is_open())
		throw std::exception("Could not open the file");


	size_t mapSize = m.size();
	out.write(reinterpret_cast<char*>(&mapSize), sizeof(size_t));

	for (std::map<std::string, int>::iterator it = m.begin(); it != m.end(); it++) {
		// STORE KEY
		size_t stringSize = it->first.size();
		out.write(reinterpret_cast<char*>(&stringSize), sizeof(size_t));
		out.write(it->first.c_str(), stringSize); // STORE STRING

		// STORE VALUE 
		out.write(reinterpret_cast<char*>(&it->second), sizeof(int));
	}
}

void RecoverMap(std::map<std::string, int>& m, std::string fileName) {
	std::ifstream in;

	in.open(fileName, std::ios::binary | std::ios::in | std::ios::trunc);

	/*int* ptr = nullptr;

	assert(ptr);*/

	if (!in.is_open())
		throw std::exception("Could not open the file");


	size_t mapSize;
	in.read(reinterpret_cast<char*>(&mapSize), sizeof(size_t));

	m.clear(); // cant be resized

	for (int i = 0; i < mapSize; i++) {

		std::string key;
		int value;

		// KEY string
		size_t stringSize;

		in.read(reinterpret_cast<char*>(&stringSize), sizeof(size_t));
		char* temp = new char[stringSize + 1];
		in.read(temp, sizeof(stringSize));
		key = temp;
		delete[] temp; 

		// VALUE int
		in.read(reinterpret_cast<char*>(&value), sizeof(int));

		m.emplace(key, value);
	}

	
}
