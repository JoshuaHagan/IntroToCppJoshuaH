#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
	srand(time(NULL));
	int guess;
	char input = 0;
	guess = rand() % 101;
	std::cout << "Think of a number\n";
	
	std::cout << " < If it less than" << std::endl;
	std::cout << " > If it greater than" << std::endl;
	std::cout << "= If it equal to" << std::endl;
	
	std::cout << "I will guess a random number..." << guess << std::endl;
	std::cin >> input;

	while(input != '=')
	{
		if (input == '<')
		{
			guess = rand() % guess;
			std::cout << "Is it Less than..." << guess << std::endl;
			std::cin >> input;
		}
		else if (input == '>')
		{
			guess = rand() % 101;
			std::cout << "Is it greater than..." << guess << std::endl;
			std::cin >> input;
		}
		else if (input == '=')
		{
			guess = rand() % 101;
			std::cout << "Is it equal to..." << guess << std::endl;
			std::cin >> input;
			break;
		}
		else
		{
			std::cout << "You guess correctly" << std::endl;
		}
	}

	system("pause");
}