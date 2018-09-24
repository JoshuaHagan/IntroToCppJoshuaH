#include <iostream>
#include "Game.h"
Hero Game::Battle(Hero & h1, Hero & h2)
{

	if ( h1.mHealth == h2.mHealth())
	{
		std::cout << "Heroes are Equal in Health" << std::endl;
			
	}
	if (h1.mPower == h2.mPower())
	{
		std::cout << "Heroes are Equal in Power" << std::endl;
			
	}
	while (h1.IsALive() && h2.IsALive())
	{
		h1.Fight(h2);
		h2.Fight(h1);
	}
	if (h1.IsALive > 0)
	{
		return h1;
	}
	else if (h2.IsALive < 0)
	{
		return h2;
	}
	return Hero();
}
