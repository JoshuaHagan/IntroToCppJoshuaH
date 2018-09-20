#include <iostream>
#include "Hero.h"

int main()
{
	Hero* Lodis = new Hero();
	Lodis->Hero();
	Hero* Josh = new Hero();
	Josh->Hero();
	Lodis->fight(Josh);
	Josh->fight(Lodis);
}
