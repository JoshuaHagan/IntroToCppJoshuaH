#include <iostream>

int main()
{
	char myfirstname[] = { 'M', 'A', 'T', 'T', 'H', 'E', 'W' };
	int myfirstnumbers[7];
	for (int i = 0; i < 7; i++)
	{
		myfirstnumbers[i] = (int)myfirstnumbers[i];
		std::cout << myfirstname[i] << std::endl;

	}
	system("pause");
	return 0;


	int myarray[5] = { 12,21,3,7,13 };
	for (int i = 0; i < 5 ; i++)
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

	}
	

	system("pause");
}


