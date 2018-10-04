#pragma once
#include "Hero.h"
#include "Stack.h"

class Game
{
	// Call the Battle function for both heroes to fight
public:
	Hero Battle(Hero& h1, Hero& h2);
};
