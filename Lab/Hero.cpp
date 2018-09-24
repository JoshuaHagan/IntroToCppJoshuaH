#include "Hero.h"

void Hero::Fight(Hero & h1)
{
	h1.TakeDamage(mPower);
}

void Hero::TakeDamage(int amount)
{
	mHealth -= amount;
	std::cout << "hero Has Taken..." << amount << std::endl;
}

Hero::Hero()
{
	mHealth = 100;
	mPower = 20;
}


bool Hero::IsALive()
{
	if (mHealth > 0)
	{
		return true;
	}
	return false;
}
