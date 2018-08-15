#include <iostream>

int main()
{

	int number;
	number = 19;
	std::cout << number << std::endl;

	number = 20;
	std::cout << number << std::endl;

	number = 21;
	std::cout << number << std::endl;

	number = 22;
	std::cout << number << std::endl;

	int numA;
	int numB;
	int sum;
	numA = 10;
	numB = 15;
	sum = numA + numB;
	
	std::cout << sum << std::endl;

	float soda = 1.0f;
	float chicken = 2.0f;
	float combo = soda + chicken; 

	std::cout << combo << std::endl;

	int InputNumber;

	std::cout << "Type your number" << std::endl;
	std::cin >> InputNumber;
	std::cout << "Your Input:" << InputNumber << std::endl;

	system("pause"); 

}
