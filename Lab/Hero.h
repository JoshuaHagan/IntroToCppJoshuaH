#pragma once
#include <iostream>
class Hero
{
private:
	int mHealth = 100;
	int mPower;
	char* mName;
	
public:

	char* GetName()
	{
		return mName;
	}
	void Fight(Hero& h1);
	bool IsALive();
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
	// Overloading The Operator
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
