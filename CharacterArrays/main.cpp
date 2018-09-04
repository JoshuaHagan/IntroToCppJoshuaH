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
		//1.)Create a program that asks for the user’s first and last name and store it in one string. It must be able to handle spaces in the input

	string fullname = "Joshua Hagan";
	string firstname = "Joshua";
	string lastname = "Hagan";
	




	//2.)Output the name in reverse order







	//3.)Modify the program to take in 5 names and print them out in reverse order too. You will need to us a 2D character array for this.






	//4.)Research and find out what character code causes your computer to beep
	// \a - make the beep sound




	//5.)Create a program that allows the user to enter a user name and password.
	//Ensure the password is at least 8 characters long and contains at least one capital letter,
	// at least one number and at least one symbol.

	int password;
	string username;

	int password = Josh123$;
	int username = JHagan;

	std::cout << "Enter username\n";
	std::cin >> JHagan;

	std::cout << "Enter password\n";
	std::cin >> Josh123$;
	if (password == Josh123$)
	{
		std::cout << "Access Granted";
	}
	if (password != Josh123$)
	{
		std::cout << "Access Denied ... Invalid Username and password";
	}
	return 0;


	//6.)Create the following program that demonstrates the use of strlen, strcmp, strcat and strcpy









	//7.)Each of the following questions shows code that has problems. For each them, answer the following:

	//a.)it trying to get the Length of the char John
	// there is no bug
	// there nothing that need to be corrected

	//b.) it trying to print the name
	// the bug is the name is not identified 
	// You put a name it can be identified

	//c.) it trying to copy a string to the end of another string
	// there is no bug 
	// It doesn't need to be corrected

	//d.) 



	//8.)Write a program that takes in a word from the user and outputs it in pig latin.






	//9.)Write a program that takes a line of input and counts the number of words and letters.





	//10.)Write a program that takes a word as input from the user and prints out whether or not it’s a palindrome.

	char word[81];
	do
	{
		bool palindrome = true;


		cout << "Please enter a word" << endl;
		cin >> word;
		int length = strlen(word);
		for (int i = 0; i < length; i++) {
			word[i] = toupper(word[i]);
		}
		int(length / 2);
		if (length > 0) {
			for (int i = 0; i < (length); i++)
			{
				if (word[i] != word[length - 1 - i])
					palindrome = false;
			}
		}
		if (palindrome == true)
		{
			cout << "The word is a palindrome" << endl;
		}
		else
		{
			cout << "The word is not a palindrome" << endl;
		}

	} while (word != "END");

	return(0);




	//11.)Implement your own versions of strlen, strcmp, strcat, and strcpy.





	//12.)Write a program that reads in a line of input and then displays the character that appears the most frequently in that sentence.

	}
	

	system("pause");
}
