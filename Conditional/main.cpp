#include <iostream>

int main()
{  


	for (int i = 1; i <= 10; i++)
	{
		std::cout << i << std::endl;

	}
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
			x = 100;

		}
		std::cout << "x = 100" << x << std::endl;
	}
	//2.) Write a program that asks the user for two numbers and then display the larger number to the console.
	{
		int x;
		int y;

		if (x > y)
		{
			std::cout << "Enter x" << x << std::endl;
			std::cin >> x;
			std::cout << "Enter y" << y << std::endl;
			std::cin >> y;

		}
		else (x < y);






	}
	//3.)


	//4.)Convert the following code into a switch statement
	{
		int choice;
		switch (choice)
		{
		case 1:
		{
			std::cout << '1';
		}
		break;
		case 2:
		{
			std::cout << "2 or 3";
		}
		break;
		case 3:
		{
			std::cout << '4';
		}
		break;
		default:
		{
			std::cout << "Invalid" << std::endl;
		}
		break;

		}
	} system("pause");




	//5.)Convert the following if statement into a ternary operator







	 //6.)Write a program that accepts from the user two numbers and a mathematical operation
	//character(+, -, *, / , %).Perform the appropriate maths based on which character is input.
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
		std::cout << lhs - rhs << std::endl;
		break;
	case '*':
		std::cout << lhs * rhs << std::endl;
		break;
	case '/':
		std::cout << lhs / rhs << std::endl;
		break;
	case '%':
		std::cout << lhs % rhs << std::endl;
	default:
		std::cout << "Invalid math operation\n";
		break;
	}
	//7.)Write a program that accepts an integer that represents the month of the year.
	//It should then display the number of days in that month. If a number that doesn’t correspond to a
	//month is entered then the program should display an error message.
	{


		int choice;
		switch (choice)
		{
		case 1:
		{
			std::cout << "Janurary - 31 days";
		}
		break;
		case 2:
		{
			std::cout << "February - 28 days";
		}
		break;
		case 3:
		{
			std::cout << "March - 31 days";
		}
		break;
		case 4:
		{
			std::cout << "April - 31 days";
		}
		break;

		case 5:
		{
			std::cout << "May - 31 days";
		}
		break;
		case 6:
		{
			std::cout << "June - 31 days";
		}
		break;
		case 7:
		{
			std::cout << "July - 31 days";
		}
		break;
		case 8:
		{
			std::cout << "August - 31 days";
		}
		break;
		case 9:
		{
			std::cout << "Spetemeber - 31 days";
		}
		break;
		case 10:
		{
			std::cout << "October - 31 days";
		}
		break;
		case 11:
		{
			std::cout << "November - 31 days";
		}
		break;
		case 12:
		{
			std::cout << "December - 31 days";
		}
		break;
		}
	}
	//8.)
	{
		"a.true";
		"b.true";
		"c.false";
		"d.true";
		"e.true";
		"f.false";
		"g.true";
		"h.false";
		"i.true";
		"j.true";











	}
	//9.)
	{
		"a.std::cout << true";
		"b.std::cout << false";
		"c.std::cout << true";
		"d.std::cout << false";
		"e.std::cout << true";
















	}
}
