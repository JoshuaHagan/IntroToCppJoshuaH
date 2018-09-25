#include "Stack.h" 
#include <cstring>
#include <time.h>
#include <cstdlib>

int main()
{
	srand(time(0));
	std::cout << "Welcome to Hero Fight Game Prototype\n";
	Hero*h1 = new Hero();
	h1->SetName("Bobby");
	Hero*h2 = new Hero();
	h2->SetName("Ricky");
	Game*g = new Game();
	g->Battle(*h1, *h2);
	std::cout << h1->GetName() << std::endl;
	std::cout << h2->GetName() << std::endl;
	std::cout << *h1 << std::endl;
	system("pause");
}
