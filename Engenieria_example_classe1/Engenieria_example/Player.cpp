#include "player.h"

Player::Player(std::string n, int health, int a, bool f)
: name(n), maxH(health), {
	name = n;
	maxHp = health;
	hp = health;
	atk = a;
	friendly = f;
}

int Player::GetAttack()
{
	return atk;
}

void Player::Attacked(int dmg)
{
	hp -= dmg;
}

void Player::Isfriendly(bool f)
{
	friendly = f;
}

void Player::PrintPlayer()
{
	std::cout << name << " | " << hp << "/" << maxHp << "HP | " << atk << " ATK" << std::endl;
}

void Player::FileRead(std::string file)
{
	std::ifstream myFile(file);
	if (!myFile.is_open()) {
		return;
	}

	std::string variable;

	myFile >> variable;
	

	while (myFile.is_open()) {

		if(variable == "\"name\":")
	}
}
