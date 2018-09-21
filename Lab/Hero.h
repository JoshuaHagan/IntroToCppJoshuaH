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
	
	Hero();
};