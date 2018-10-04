#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
	// It set the random number generator algorithm for rand();
	srand(time(NULL));
	int guess;
	char input = 0;
	//Give the computer a random number to generate
	guess = rand() % 101;
	std::cout << "Think of a number\n";
	
	std::cout << " < If it less than" << std::endl;
	std::cout << " > If it greater than" << std::endl;
	std::cout << "= If it equal to" << std::endl;
	
	std::cout << "I will guess a random number..." << guess << std::endl;
	std::cin >> input;
	// Put the guess in a loop so the computer could keep guessing
	while(input != '=')
	{
		// If the number is less than the computer will guess a lower number
		if (input == '<')
		{
			guess = rand() % guess;
			std::cout << "Is it Less than..." << guess << std::endl;
			std::cin >> input;
		}
		// else if it greater than it will guess a higher number
		else if (input == '>')
		{
			guess = rand() % 101;
			std::cout << "Is it greater than..." << guess << std::endl;
			std::cin >> input;
		}
		// Or else if it equal to the program will then end
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