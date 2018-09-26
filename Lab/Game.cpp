#include "Game.h"
Hero Game::Battle(Hero & h1, Hero & h2)
{
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
		std::cout << h1.GetName() << h1.getHealth() << std::endl;
		std::cout << h2.GetName() << h2.getHealth() << std::endl;
		h1.Fight(h2);
		h2.Fight(h1);
		system("pause");
		system("cls");
	}
	if (h1.IsALive())
	{
		std::cout << h1.GetName() << std::endl;
		winner = h1;
		
	}
	if (h2.IsALive())
	{
		winner = h2;
		std::cout << h2.GetName() << std::endl;
		
	}
	return winner;	
}
