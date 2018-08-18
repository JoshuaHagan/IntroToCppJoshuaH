#include <iostream>

int main()
{

	int number;
	number = 19;
	std::cout << number << std::endl;

	number = 20;
	std::cout << number << std::endl;

	number = 21;
	std::cout << number << std::endl;

	number = 22;
	std::cout << number << std::endl;

	int numA;
	int numB;
	int sum;
	numA = 10;
	numB = 15;
	sum = numA + numB;
	
	std::cout << sum << std::endl;

	float soda = 1.0f;
	float chicken = 2.0f;
	float combo = soda + chicken; 

	std::cout << combo << std::endl;

	int InputNumber;

	std::cout << "Type your number" << std::endl;
	std::cin >> InputNumber;
	std::cout << "Your Input:" << InputNumber << std::endl;

	// A) Answer = 14
	{
		int numberA = 5;
		numberA = 9;
		numberA = 11;
		numberA = 14;
		std::cout << "A) " << numberA << std::endl;
	}
	// B) Answer = 9
	{
		int numberB = 10;
		numberB = 9;
		int thingB = 55;
		thingB = 22;
		std::cout << "B) " << numberB << std::endl;
	}
	// C) Answer = 21
	{
		int numberC = 3;
		numberC = 7;
		numberC = 1;
		int somethingC = 23;
		somethingC = 21;
		numberC = somethingC;
		std::cout << "C) " << numberC << std::endl;
	}
	// D) Answer = 3
	{
		int numberD = 1;
		int somethingD = 3;
		numberD = somethingD;
		std::cout << "D) " << somethingD << std::endl;
	}
	// E) Answer = 6
	{
		int x = 13;
		x = x / 2;
		std::cout << "E) " << x << std::endl;
	}
	// F) Answer = 6.5
	{
		float y = 13;
		y = y / 2;
		std::cout << "F)" << y << std::endl;
	}
	// 1.) Answer = 172.4
	{
		float degCelsius = 78.0f;
		float degFahrenheit = 0.0f;

		std::cout << "Input degCelsius" << std::endl;
		std::cin >> degCelsius;

		float celsiusToFahrenheight = 1.8 * 78.0 + 32;

		std::cout << "Celsius to Fahrenheit)" << std::endl;
		std::cout << "Celsius: " << degCelsius << std::endl;
		std::cout << "Fahrenheit: " << degFahrenheit << std::endl;
	}
	//2.)
	{
		float rectWidth = 0.0f;
		float rectHeight = 0.0f;
		float rectArea = 0.0f;



		std::cout << "Area of a Rectangle)" << std::endl;
		std::cout << "Input Width" << std::endl;
		std::cin >> rectWidth;
		std::cout << "Input Height" << std::endl;
		std::cin >> rectHeight;
		std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
		std::cout << "Area: " << rectWidth * rectHeight << std::endl;
	}

    //3.)
	{
		float a, b, c, d, e;
		float avg;
		avg = a = b = c = d = e = 0.0f;






		std::cout << "Average of Five)" << std::endl;
		std::cout << "Input answer" << std::endl;
		std::cin >> a;
		std::cout << "Input answer" << std::endl;
		std::cin >> b;
		std::cout << "Input answer" << std::endl;
		std::cin >> c;
		std::cout << "Input answer" << std::endl;
		std::cin >> d;
		std::cout << "Input answer" << std::endl;
		std::cin >> e;
		std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
		std::cout << "avg: " << (a + b + c + d + e) / 5 << std::endl;
	}
   //4.)
	{
		int k;
		int l;


		std::cout << "Number Swap)" << std::endl;
		std::cout << "Enter k" << std::endl;
		std::cin >> k;
		std::cout << "Enter l" << std::endl;
		std::cin >> l;
		std::cout << "k is " << l << std::endl;
		std::cout << "l is " << k << std::endl;
	}

   //5.)
	{
		int age;

		std::cout << "Input Your Age" << std::endl;
		std::cin >> age;
		std::cout << "Howdy! You are " << age << " years old!" << std::endl;
		std::cout << "You have been alive for" << (age * 12) << "months" << std::endl;
	}






	system("pause");

}