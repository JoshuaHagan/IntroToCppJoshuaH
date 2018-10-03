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
	
	Winner.Push(new Hero);
	Loser.Push(new Hero);
	system("pause");
}
