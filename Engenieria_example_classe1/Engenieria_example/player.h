#pragma once
#include <iostream>
#include<fstream>
#include <string>


class Player {
private: 
	std::string name;
	int hp;
	int maxHp;
	int atk;
	bool friendly;
public:
	Player(std::string n, int health, int a, bool f);
	int GetAttack();
	void Attacked(int dmg);
	void Isfriendly(bool f);
	void PrintPlayer();
	void FileRead(std::string file);
};