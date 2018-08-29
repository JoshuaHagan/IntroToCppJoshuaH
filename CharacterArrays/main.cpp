#include <iostream>
#include <string>

int main()
{
	char name[] = "Joshua";
	int count = 0;
	for (int i = 0; i < 6; i++)
	{

		std::cout << int(name[i]) << std::endl;


	}

	char place[] = "AIEUS";
	int len = 0;
	while (place[len] != '\0')
	{
		len++;
	}
	std::cout << len << std::endl;



	char stringone[] = "Joshua";
	char stringtwo[] = "Joshua";
	int lenone = 0;
	int lentwo = 0;
	while (stringone[lenone] != '\0')
	{
		lenone++;
	}
	while (stringtwo[lentwo] != '\0')
	{
		lentwo++;
	}
	for (int i = 0; i <= 6; i++)
	{
		if (i == 6)
		{
			std::cout << "stuff works\n";
			break;
		}
		if (stringone[i] == stringtwo[i])
			continue;
		else
		{
			std::cout << "Stuff broke\n";
			break;
		}
	}
	

	system("pause");
}