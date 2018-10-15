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

//Create a function that takes in a character pointer.
//The function will return the character that appears the most in the data the character pointer is pointing to.
char Mostcommonvalue(char *data, char Mostcommon)
{
	char current;
	char nCurrent;
	current = data++;

	
	
	
}

int main()
{
	int array[6] = { 1,2,3,4,5,6 };
	char* data[6] = { 'A','p','p','l','e' };
	//Most common value in the word apple should be the character p.
	char common = Mostcommon(data);

	system("pause");
}