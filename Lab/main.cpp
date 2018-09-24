#include "Stack.h"

int main()
{
	Hero* Lodis = new Hero();
	Lodis->Hero::Hero();
	Hero* Josh = new Hero();
	Josh->Hero::Hero();
	Lodis->Fight(*Josh);
	Josh->Fight(*Lodis);
	std::cout << "Welcome to Hero Fight Game Prototype\n";
	system("pause");
}
