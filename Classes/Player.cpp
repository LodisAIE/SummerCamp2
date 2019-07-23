#include "pch.h"
#include "Player.h"
#include <time.h>
void Player::takeDamage(int damage)
{
	if (health <= 0)
	{
		return;
	}
	health -= damage;
}

void Player::fight(Zombie& zombie)
{
	zombie.takeDamage(attack);
}

void Player::resetHealth()
{
	health = 100;
}

int Player::getHealth()
{
	return health;
}

bool Player::canHit()
{
	srand(time(NULL));
	int hitRange = rand() % 4;
	if (hitRange <= 2)
	{
		return true;
	}
	return false;
}
