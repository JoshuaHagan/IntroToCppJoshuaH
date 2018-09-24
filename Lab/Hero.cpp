#include "Hero.h"

void Hero::Fight(Hero & h1)
{
	mPower = rand() % 51;
	h1.TakeDamage(mPower);
}

void Hero::TakeDamage(int amount)
{
	mHealth -= amount;
	std::cout << "My Hp: " << mHealth << std::endl;
	
	
}

Hero::Hero()
{
	mHealth = 100;	
}



bool Hero::IsALive()
{
	if (mHealth > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
