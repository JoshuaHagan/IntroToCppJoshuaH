#include <iostream>


int Sum(int n)
{
	for (int i = 1; i <= n; i++)
	{
		n += i;
	}
	return n;
}

int main()
{
	Sum(10);

	system("pause");
}