#pragma once
#include <string>
class Zombie
{
private:
	int health = 100;
	int attack = 20;
public:
	std::string name;
	void takeDamage(int damage);
	void fight();
	int getHealth();
	int getDamage();
	bool canHit();
};