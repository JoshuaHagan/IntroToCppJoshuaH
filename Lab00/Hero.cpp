#include "Hero.h"

void Hero::Fight(Hero & h1)
{
	h1.TakeDamage(mPower);
}

void Hero::TakeDamage(int amount)
{
	mHealth -= amount;
}

Hero()
{
	mHealth = 100;
	mPower = 20;
}

bool Hero::isALive()
{
	if (mHealth > 0)
	{
		return true;
	}
	
}

