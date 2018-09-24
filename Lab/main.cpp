#include "Stack.h" 
#include <cstring>
#include <time.h>
#include <cstdlib>

int main()
{
	srand(time(0));
	std::cout << "Welcome to Hero Fight Game Prototype\n";	
	Hero*h1;
	Hero*h2;
	Game*g = new Game();
	g->Battle();
	system("pause");
}
