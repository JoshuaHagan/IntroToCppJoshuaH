#include <iostream>



void ReverseArray(int *ptr, int size)
{
	int temp;
	int *first;
	int *last;
	first = ptr;
	last = first + (size - 1);

	for (int i = 0; i < size; i++)
	{
		temp = *first;
		*first = *last;
		*last = temp;
	}
	
	
}


int main()
{
	int nums[6];
	int *myptr = &nums[0];
	{
		*myptr = 1;
		myptr++;
		*myptr = 1;
		myptr++;
		*myptr = 1;
		myptr++;
		*myptr = 1;
		myptr++;
		*myptr = 1;
		myptr++;
		*myptr = 1;
		myptr++;
	}

	int Nums[3] = { 2,4,6 };
	int *ptr_Nums = &Nums[0];
	
	
	
	//1.)
	//a.)
	void RevString(char* array);
	{

		return;
	}
	//b.)
	void CountEven(int* array, int array_len);
	{

	}
	void Maximum(double* array, int array_size);
	{


		return Maximum;
	}
	//c.)
	void Contains(char* array, char search_value);
	{

		return true;
	}

	
}
