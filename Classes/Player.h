#pragma once
#include "Zombie.h"
class Player
{
private:
	int health = 100;
	int attack = 20;
public:
	void takeDamage(int damage);
	void fight(Zombie & zombie);
	void resetHealth();
	int getHealth();
	bool canHit();
};