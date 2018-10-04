#include "Game.h"
Hero Game::Battle(Hero & h1, Hero & h2)
{
	// Functions that let the player know that every Fighter has the same Health and Power
	Hero winner;
	if ( h1.getHealth() == h2.getHealth())
	{
		std::cout << "Heroes are Equal in Health" << std::endl;
			
	}

	if (h1.getPower() == h2.getPower())
	{
		std::cout << "Heroes are Equal in Power" << std::endl;
	}
	// A loop to see if the Fighters name and Health are printed out
	while (h1.IsALive() && h2.IsALive())
	{
		std::cout << h1.GetName() << h1.getHealth() << std::endl;
		std::cout << h2.GetName() << h2.getHealth() << std::endl;
		// Functions that will make the Fighters fight until one can't fight no more
		h1.Fight(h2);
		h2.Fight(h1);
		system("pause");
		system("cls");
	}
	// functions to check if One Fighter is Alive than that Fighter wins
	if (h1.IsALive())
	{
		std::cout << h1.GetName() << std::endl;
		winner = h1;
	}
	if (h2.IsALive())
	{
		std::cout << h2.GetName() << std::endl;
		winner = h2;
	}
	// Function that return the winner
	return winner;	
}
