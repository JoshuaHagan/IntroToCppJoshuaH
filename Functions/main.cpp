#include <iostream>
#include <string>

int print(std::string input)
{
	std::cout << input;
	return 0;
}

bool IsMultipleOfThree(int value)
{
	if(value % 3 == 0)
	{
		return true;
	}
	if (value % 3 != 0)
	{
		return false;
	}
}

void PrintValuesTo10()
{
	for (int i = 0; i < 11; i++)
	{
		std::cout << i << std::endl;
	}
}

void PrintValuesBetween(int low, int high)
{
	for (int i = low + 1; i < high; i++) 
	{
		std::cout << i << std::endl;
	}
}

int ArraySum(int arr[], int size)
{
	int myArray[] = { 3,2,1 };
	int Sum = 0;
	for (int i = 0; i < 3; i++)
	{
		Sum = myArray[i] + Sum;
		
		
	}
}

void RevArray(int arr[], int size)
{
	int counter = 0;
	int temp = arr[counter];
	arr[counter] = arr[size - 1 - counter];
	arr[size - 1 - counter] = temp;

}

int main()
{
	print("Oooof");
	PrintValuesTo10();
	bool Multest = IsMultipleOfThree(60);
	PrintValuesBetween(10,15);
	int line[] = { 1,2,3,};
	ArraySum(line, 3);

	system("pause");
}