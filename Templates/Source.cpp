#include <iostream>

//1.)Min
//DESCRIPTION:Returns the lower of two values.
//INPUT: Two template arguments (a, b).
//OUTPUT: The lower of the two values a and b.
template <typename T>
T Min(T a, T b)
{
	if (a > b)
		return a;
	else if (b > a)
		return b;
}

//2.)Max
//DESCRIPTION:Returns the higher of two values.
//INPUT: Two template arguments (a, b).
//OUTPUT: The higher of the two values a and b.
template <typename T>
T Max(T a, T b)
{
	if (a < b)
		return b;
	else if (b < a)
		return a;
}

//3.)Clamp
//DESCRIPTION:Constrains a valuewithin the range of two other values.
//NPUT: Three template arguments (min, max, val).
//OUTPUT: The value of the valconstrained between minand max. 
template <typename T>
T Clamp(T min, T max, T val)
{
	if (min < max)
		return min;
	else if (val < max)
		return max;
	else 
		return val;
}

//4.) Min(specialised for char)
//DESCRIPTION:As above but first checks if a and b represent alphabetical characters. If so, the function will return the value that is alphabetically lower.
//INPUT: Two template arguments (a, b).
//OUTPUT: The alphabeticallylower of the two values a and b.
template <>
char Min(char a, char b)
{
	if (a < 64 && b > 123)
		a + 32;
	else if (a > 64 && b < 123)
		b + 32;
	return a;
	

}

//5.)Max(specialised for char)
//DESCRIPTION:As above but first checks if a and b represent alphabetical characters. If so, the function will return the value that is alphabetically higher.
//INPUT: Two template arguments (a, b).
//OUTPUT: The alphabeticallyhigher of the two values a and b.
template <>
char Max(char a,char b)
{
	if (a < 64 && b > 123)
		b + 32;
	else if (a > 64 && b < 123)
		a + 32;
	return b;
}

int main()
{
	Min(1,3);
	Max(5, 10);
	Clamp(5, 10, 15);
	Min('A', 'b');
	Max('A', 'b');

}