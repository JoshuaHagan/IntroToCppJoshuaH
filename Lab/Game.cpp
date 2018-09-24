#include "Game.h"
Hero Game::Battle(Hero & h1, Hero & h2)
{
	std::cout << "Lodis" << h1.getHealth() << std::endl;
	std::cout << "Josh" << h2.getHealth() << std::endl;
	Hero winner;
	if ( h1.getHealth() == h2.getHealth())
	{
		std::cout << "Heroes are Equal in Health" << std::endl;
			
	}
	if (h1.getPower() == h2.getPower())
	{
		std::cout << "Heroes are Equal in Power" << std::endl;
			
	}
	while (h1.IsALive() && h2.IsALive())
	{
		std::cout << "Lodis Health is ... " << h1.getHealth() << std::endl;
		std::cout << "Josh Health is ..." << h2.getHealth() << std::endl;
		h1.Fight(h2);
		h2.Fight(h1);
		system("pause");
	}
	if (h1.IsALive())
	{
		std::cout << "Lodis Wins!!" << std::endl;
		winner = h1;
		
	}
	if (h2.IsALive())
	{
		winner = h2;
		std::cout << "Josh Wins!!!" << std::endl;
		
	}
	return winner;	
}
