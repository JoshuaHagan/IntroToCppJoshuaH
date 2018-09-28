#include <iostream>


//Create a function with return type of type integer.
//The function will take int two arguments. The first argument is a pointer
// to an array and the second is the size of the array.
//The function will return the sum of the two largest value int the array


int SumArray(int*array[], int size)
{
	int sum;
	int Array = *array[0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; i++)
		{
			
			*array[i] < *array[j];
		}
	}      return sum;

}

int main()
{
	int array[6] = { 1,2,3,4,5,6 };

	system("pause");
}