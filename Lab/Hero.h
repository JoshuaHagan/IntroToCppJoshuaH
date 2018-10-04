#pragma once
#include <iostream>
class Hero
{
private:
	int mHealth = 100;
	int mPower;
	char* mName;
	// Set the Heroes names that are fighting
public:
	friend std::ostream& operator<<(std::ostream& os, const Hero& dt);
	char* GetName()
	{
		return mName;
	}
	// A function that will let the player do Damage to one another
	void Fight(Hero& h1);
	// A function that will check and see if the Fighters are still Alive
	bool IsALive();
	// A function that allow the Fighter to take damage from another Fighter
	void TakeDamage(int amount);
	// Get the return value of mHealth,and mPower, but it can't be modify.
	int getHealth()
	{
		return mHealth;
	}
	int getPower()
	{
		return mPower;
	}
	// Overloading The Operator mHealth
	bool operator == (Hero & hero)
	{
		
		return mHealth == hero.mHealth;	
		
	}

	void SetName(const char* name)
	{
		mName = (char*)name;
	}

	Hero();
};
