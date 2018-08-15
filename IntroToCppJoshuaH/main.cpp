#include <iostream>
#include <string>

int main()
{
	std::string MyName = "Joshua Hagan";
	std::string ID = "s188035";

	std::cout << "Name:" << MyName << std::endl;
	std::cout << "ID:" << ID << std::endl;
	
	std::cout << MyName << " " << ID << std::endl;

	std::string FirstName;
	std::string LastName;

	std::cout << "Enter Your First Name" << std::endl;
	std::cin >> FirstName;
	std::cout << "Enter Your Last Name" << std::endl;
	std::cin >> LastName;
	
	std::cout << "Hi, " << FirstName << " " << LastName << std::endl;

    

		

   


	system("pause");

}