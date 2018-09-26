#include "Stack.h" 
#include <cstring>
#include <time.h>
#include <cstdlib>

int main()
{
	srand(time(0));
	std::cout << "Welcome to Hero Fight Game Prototype\n";
	Hero*h1 = new Hero();
	h1->SetName("Lodis");
	Hero*h2 = new Hero();
	h2->SetName("Josh");
	Hero*h3 = new Hero();
	h3->SetName("Robert");
	Hero*h4 = new Hero();
	h4->SetName("Thomas");
	Stack team1;
	Stack team2;
	//Push each Hero on a team
	team1.Push(h1);
	team1.Push(h2);
	team2.Push(h3);
	team2.Push(h4);
	Game*g = new Game();
	g->Battle(*h1,*h2);
	std::cout << h1->GetName() << std::endl;
	std::cout << h2->GetName() << std::endl;
	std::cout << *h1 << std::endl;
	std::cout << *h2 << std::endl;
	system("pause");
}
