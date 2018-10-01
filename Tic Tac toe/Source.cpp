#include <iostream>

int main()
{
	char board[3][3] = { { ' ', ' ', ' ' },{ ' ', ' ', ' ' },{ ' ', ' ', ' ' } };
	char item;
	int place = 0;
	int Column = 0;
	int Row = 0;

	std::cout << "Welcome to TicTacToe, Please use number to place a piece, P1 - X's and P2 O's" << std::endl;
	system("pause");
	system("cls");

	

	std::cout << "| " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " |" << std::endl;
	std::cout << "|___|___|___|" << std::endl;
	std::cout << "| " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " |" << std::endl;
	std::cout << "|___|___|___|" << std::endl;
	std::cout << "| " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " |" << std::endl;
	std::cout << "|___|___|___|" << std::endl;



	
	system("pause");
	return 0;
}
