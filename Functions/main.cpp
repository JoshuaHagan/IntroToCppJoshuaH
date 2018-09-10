#include <iostream>
#include <string>
#include <cstdlib>

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

int main()
{
	//HomeWork Functions 5,10,15,16,17
	//5.) 
	   void CoinToss(int Tosses)
	{
	   int x;
	   int heads = 0;
	   int tails = 0;
	   srand(time(0));
	    for (int i = 0; i < Tosses; i++)
	{
		x = rand() % 2;
		if (x == 0)
		{
			heads++;
		}
		else
		{
			tails++;
		}
	}
	std::cout << "Heads"<< std::endl;
	std::cout << "Tails"<< std::endl;
}
		//10.)
		void MultiplyByIndex(int arr[], int arr2[], int index)
	{
		for (int i = 0; i < index; i++)
		{
			arr2[i] = arr[i] * i;
		}
	
}
		//15.)
		int ThePowerOf(int x, int y)
{
	int item = 0;
	for (int i = 1; i <= y; i++)
	{
		item = x * i;
	}
	return item;
}





}
