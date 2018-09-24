#pragma once
#include <iostream>
class Hero
{
private:
	int mHealth = 100;
	int mPower = 20;
	
public:
	void Fight(Hero&);
	bool IsALive();
	void TakeDamage(int amount);
	float 100, 20;
	bool operator == (Hero & hero)
	{
		
		return mHealth.100 == hero.mHealth.100;	
		
	}
	Hero();
};
