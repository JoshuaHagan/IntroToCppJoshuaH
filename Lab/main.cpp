#include "Stack.h" 
#include"Hero.h"
#include "Game.h"
#include <cstring>
#include <time.h>
#include <cstdlib>

int main()
{
	srand(time(0));
	std::cout << "Welcome to Hero Fight Game\n";
	Hero*h1 = new Hero();
	h1->SetName("Lodis...");
	Hero*h2 = new Hero();
	h2->SetName("Josh...");
	Hero*h3 = new Hero();
	h3->SetName("Robert...");
	Hero*h4 = new Hero();
	h4->SetName("Thomas...");
	Stack team1;
	Stack team2;
	Stack Winner;
	Stack Loser;
	//Push each Hero on a team
	team1.Push(h1);
	team1.Push(h4);
	team2.Push(h3);
	team2.Push(h2);
	Game*g = new Game();
	g->Battle(*h1, *h3);
	g->Battle(*h4, *h2);
	//Tell which hero has won and pop other cause he lost
	//If can't figure out do what need to be DONE!!!!!!!
	/*if (Winner.IsAlive() == true)
	{
		std::cout << team1.Top() << "Wins!!!\n";
	}
	else
	{
		team1.Pop();
	}
	g->Battle((Hero&)team1.Top(), (Hero&)team2.Top());
	if (team1.isEmpty() == false)
	{
		std::cout << "Team 1 Wins!!!\n";
	}
	else
	{
		std::cout << "Team 2 Wins!!!\n";
	}*/
	Winner.Push(new Hero);
	Loser.Push(new Hero);
	system("pause");
}
