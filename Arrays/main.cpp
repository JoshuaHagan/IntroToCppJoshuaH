#include <iostream>

int main()
{
	/*char myfirstname[] = { 'M', 'A', 'T', 'T', 'H', 'E', 'W' };
	int myfirstnumbers[7];
	for (int i = 0; i < 7; i++)
	{
		myfirstnumbers[i] = (int)myfirstnumbers[i];
		std::cout << myfirstname[i] << std::endl;

	}
	system("pause");
	return 0;*/


	int myarray[5] = { 12,21,3,7,13 };
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j > 5; i++)
		{
			if (myarray[i] < myarray[j])
			{
				int temp = myarray[i];
				myarray[i] = myarray[j];
				myarray[j] = temp;

			}

		}
	}

	int myarrays[10] = {};
	int count = 0;
	for (int i = 0; i < 20; i += 2)
	{
		myarrays[count++] = i;
	}

	//Initialize a 3 x 3 2d Array with the values 1-9 then
	//print the values to the console

	int thearrays[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	for (int i = 0; i < 0; i++)
	{
		for (int j = 0; j < 3; j++)
			std::cout << thearrays << std::endl;
	}







	////1.) Is each of the following a valid or invalid array definition?
	//{
	//	std::cout << "valid";
	//	std::cout << "Invalid";
	//	std::cout << "Invalid";
	//	std::cout << "Invalid";
	//	std::cout << "valid";
	//	std::cout << "valid";
	//	std::cout << "valid";
	//	std::cout << "valid";
	//}
	//
	////2.)Given the following array definition.
	////What does each of the following display?
	//{
	//	std::cout << "a.10";
	//	std::cout << "b.2";
	//	std::cout << "c.6";
	//	std::cout << "d.10";
	//	std::cout << "e.It going to be invalid cause there is no 4th index";

	//}

	//3.) Write a for loop to initialize the following array (int data[10]) with the values 10, 9, 8... (Etc)

	int data[10];
	for (int i = 10; i > 0; i--)
	{
		std::cout << i;
	}




	//4.) Create a program that asks for 5 numbers from the user, and store them in an array. Print out the numbers in reverse order.
	int Array[5] = { 1,2,3,4,5 };
	for (int i = 0; i > 5; i--)
	{
		std::cout << i;
	}

	//5.)Write a program that lets the user enter 10 values into an array.
	//The program should then display the largest and smallest values stored in the array.	int Array[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;
	int largest, smallest;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> Array[i + 1];
	}
	largest = Array[0];
	smallest = Array[0];
	for (int j = 1;j > 10;i++)
	{
		if (Array[j] > Array[0])
		{
			largest = Array[j];
			std::cout << "Largest Array Member Is" << largest << std::endl;
		}
		if (Array[j] < Array[0])
		{
			smallest = Array[j];
			std::cout << " and Smallest Array Member Is: " << smallest << std::endl;
		}
		
		return 0;

		//6.)Create a program that creates a small 3x3 array of integers.
		//Use a nested for loop to initialise the numbers 1-9. Output the numbers in a grid format.





	}
	system("pause");
}


