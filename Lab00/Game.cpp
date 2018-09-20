#include <iostream>
#include "Game.h"
Game Hero::Battle(Hero&hero1,Hero&hero2)
{
	hero1.fight(hero2);
	hero2.fight(hero1);

}

