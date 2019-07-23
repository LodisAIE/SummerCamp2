#include "pch.h"
#include "Zombie.h"
#include <time.h>
void Zombie::takeDamage(int damage)
{
	if (health <= 0)
	{
		return;
	}
	health -= damage;
}

void Zombie::fight()
{
	//player.takeDamage(attack);
}

int Zombie::getHealth()
{
	return health;
}

int Zombie::getDamage()
{
	return attack;
}

bool Zombie::canHit()
{
	srand(time(NULL));
	int hitRange = rand() % 3;
	if (hitRange == 1)
	{
		return true;
	}
	return false;
}
