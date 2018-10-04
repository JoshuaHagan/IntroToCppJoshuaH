#include "Hero.h"
//Give Random amount of Damage to the Heroes
void Hero::Fight(Hero & h1)
{
	mPower = rand() % 50;
	h1.TakeDamage(mPower);
}
//Give The Amount of Damage the Heroes Has Taken
void Hero::TakeDamage(int amount)
{
	mHealth -= amount;
	std::cout << "Damage Taken..." << amount << std::endl;
	
    
	
}
//Overload the operators of the ostream
std::ostream& operator<<(std::ostream& os, const Hero& dt)
{
	os << dt.mName << '/' << dt.mPower << '/' << dt.mHealth;
	return os;
}

Hero::Hero()
{
	mHealth = 100;	
}


// A function that check to see if the Fighter is Alive by Health if not they are Dead
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
