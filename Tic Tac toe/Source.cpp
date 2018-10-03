#include <iostream>

int main()
{
	char board[3][3] = { { ' ', ' ', ' ' },{ ' ', ' ', ' ' },{ ' ', ' ', ' ' } };
	char activeToken = 'x';
	int input;

	std::cout << "Welcome to TicTacToe, Please use number to place a piece, P1 - X's and P2 O's" << std::endl;
	system("pause");
	system("cls");


	while (true)
	{
		std::cin >> input;
		system("cls");
		if (input == 1 && board[0][0] != 'x' && board[0][0] != 'o')
		{
			board[0][0] = activeToken;
		}
		if (input == 2 && board[0][1] != 'x' && board[0][1] != 'o')
		{
			board[0][1] = activeToken;
		}
		if (input == 3 && board[0][2] != 'x' && board[0][2] != 'o')
		{
			board[0][2] = activeToken;
		}
		if (input == 4 && board[1][0] != 'x' && board[1][0] != 'o')
		{
			board[1][0] = activeToken;
		}
		if (input == 5 && board[1][1] != 'x' && board[1][1] != 'o')
		{
			board[1][1] = activeToken;
		}
		if (input == 6 && board[1][2] != 'x' && board[1][2] != 'o')
		{
			board[1][2] = activeToken;
		}
		if (input == 7 && board[2][0] != 'x' && board[2][0] != 'o')
		{
			board[2][0] = activeToken;
		}
		if (input == 8 && board[2][1] != 'x' && board[2][1] != 'o')
		{
			board[2][1] = activeToken;
		}
		if (input == 9 && board[2][2] != 'x' && board[2][2] != 'o')
		{
			board[2][2] = activeToken;

		}

		/*
		check if anything in input stream if so ignore ask for valid input
		*/
		while (std::cin.fail())
		{
			std::cout << "Invalid move\n";

		}

		std::cout << "Next Player Turn.\n";
		activeToken = (activeToken == 'x') ? 'o' : 'x';


		std::cout << "| " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " |" << std::endl;
		std::cout << "|___|___|___|" << std::endl;
		std::cout << "| " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " |" << std::endl;
		std::cout << "|___|___|___|" << std::endl;
		std::cout << "| " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " |" << std::endl;
		std::cout << "|___|___|___|" << std::endl;

	}

	system("pause");
	return 0;
}