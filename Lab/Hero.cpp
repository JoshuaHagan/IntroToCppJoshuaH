#include "Hero.h"
//Give Random amount of Damage to the Heros
void Hero::Fight(Hero & h1)
{
	mPower = rand() % 51;
	h1.TakeDamage(mPower);
}
//Give The Amount of Damage the Heros Has Taken
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
