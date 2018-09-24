#include "Game.h"
Hero Game::Battle(Hero & h1, Hero & h2)
{

	if ( h1.getHealth() == h2.getHealth())
	{
		std::cout << "Heroes are Equal in Health" << std::endl;
			
	}
	if (h1.getPower() == h2.getPower())
	{
		std::cout << "Heroes are Equal in Power" << std::endl;
			
	}
	std::cout << "Lodis" << h1.getHealth() << std::endl;
	std::cout << "Josh" << h2.getHealth() << std::endl;
	while (h1.IsALive() && h2.IsALive())
	{
		h1.Fight(h2);
		h2.Fight(h1);
	std::cout << "Lodis" << h1.getHealth() << std::endl;
	std::cout << "Josh" << h2.getHealth() << std::endl;
		
	}
	if (h1.IsALive() > 0)
	{
		std::cout << "Lodis Wins!!!" << std::endl;
		return h1;
	}
	else if (h2.IsALive() < 0)
	{
		std::cout << "Josh Wins!!!" << std::endl;
		return h2;
	}
	return Hero();	
}
