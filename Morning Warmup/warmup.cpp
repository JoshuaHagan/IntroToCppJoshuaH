#include <iostream>

//Create a template function that will return the sum of two values passed in.
//Test Cases must include the use of the following types, integer, floating point, and a custom data type.

//template <typename T>
//T sum(T a, T b)
//{
//	return a + b;
//}
//
//class Random
//{
//public:
//	int num1 = 1;
//	int num2 = 2;
//	
//	Random& operator + (Random &stuff)
//	{
//		stuff.num1 += num2;
//		return stuff;
//
//	}
//};

//Write a function called SumTo that accepts 
//an integer parameter N and returns the sum of all integers from 1 to N, including N.

int SumTo(int N)
{
	int sum = N;
	for (int i = 1; i <= N; i++)
	{
		sum += i;
		return sum;
	}
}


int main()
{
	//sum(4, 8); // answer should be 12.
	//sum(0.5, 1.5); // answer should be 2.
	//Random*num1 = new Random;
	//Random*num2 = new Random;
	//sum(*num1, *num2);
	SumTo(5);

	system("pause");
}