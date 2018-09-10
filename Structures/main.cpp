#include <iostream>


struct Item
{
	std::string name;
	int price;
};

struct Stock
{
	Item item;
	int quantity = 10;
};

struct Shop
{
	Stock swords;
	int money = 1000;
};

struct Buyer
{
	int Buy(Stock item)
	{
		return 0;
	}
	int money;
};

int main()
{
	Buyer tk;
	Buyer robRiley;
	Buyer Josh;
	Stock swordStock;
	Item swords;
	Shop walgreens;

	walgreens.swords = swordStock;
	Josh.Buy(walgreens.swords);
	

}