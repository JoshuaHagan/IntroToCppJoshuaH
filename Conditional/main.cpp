#include <iostream>

int main()
{    
	{
		int grade;
		char gradeLetter;
		std::cout << "Input grade" << std::endl;
		std::cin >> grade;
		if (grade >= 90)
		{
			gradeLetter = 'A';
		}
		else if (grade >= 80 && grade < 90)
		{
			gradeLetter = 'B';
		}
		else if (grade >= 70 && grade < 80)
		{
			gradeLetter = 'C';
		}
		else if (grade >= 60 && grade < 70)
		{
			gradeLetter = 'D';
		}
		else
		{
			gradeLetter = 'F';
		}
		std::cout << gradeLetter << std::endl;
	}

	{
		int input = 0;
		std::cout << "Enter a number.\n" << std::endl;
		std::cin >> input;
		if (input % 3 == 0 && input % 5 == 0)
		{
			std::cout << "FizzBuzz" << std::endl;
		}
		if (input % 3 == 0)
		{
			std::cout << "Fizz" << std::endl;
		}
		else if (input % 5 == 0)
		{
			std::cout << "Buzz" << std::endl;
		}
		else
		{
			std::cout << input << std::endl;
		}


		int lhs, rhs;
		char op;
		std::cout << "Enter two numbers.\n";
		std::cin >> lhs >> rhs;
		std::cout << "Do you wanna Add(+) or Subtract (-)?\n";
		std::cin >> op;
		switch (op)
		{
		case '+':

			std::cout << lhs + rhs << std::endl;
			break;
		case '-':

			break;
		default:
			std::cout << "Invalid math operation\n";
			break;
		}

		float PlayerHealth;
		std::cout << "What is your Health at now?" << std::endl;
		std::cin >> PlayerHealth;

		if (PlayerHealth > 0)
		{
			std::cout << "You are Alive" << std::endl;
			if (PlayerHealth < 25)
			{
				std::cout << "Your Health is at critical levels" << std::endl;
			}
			std::cout << "Your Health is at " << PlayerHealth << std::endl;

		}
		else
		{
			std::cout << "You are Dead" << std::endl;
		}

		system("pause");
	}

	//1.) Write an if  statement that assigns 100 to x when y is equal to zero.
	{
		int x;
		int y = 0;

		if (y == 0)
		{

		}

		



		


	}

}