#include <iostream>

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		std::cout << i << std::endl;
	}

	//Using while to count to 10
	int i = 1;
	while (i <= 10)
	{
		std::cout << i << ", ";
		i++;
	}
	std::cout << i << std::endl;

	//Making program quit by pressing q or Q
	char input;
	do 
	{
		std::cout << "Press q or Q to quit this program" << std::endl;
		std::cin >> input;
	} while(input != 'q' && input != 'Q');


	//Create a for loop printing only even numbers
	for (int i = 2; i <= 10; i += 2)
	{
		std::cout << i << std::endl;
	}

	//1.)
	for (int i = 100; i <= 0; i++)
	{
		std::cout << i << std::endl;
	}


	system("pause");
}