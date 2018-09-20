#pragma once
class Hero
{
private:
	int mHealth;
	int mPower;
public:
	void fight(Hero&);
	bool Hero::isALive();
	void Hero::TakeDamage();
	Hero();
	 
};