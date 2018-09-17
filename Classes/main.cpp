#include <iostream>


class Fighter
{
private:
		int m_health;
		int m_power;
		

public:
	void TakeDamage(int amount);
	void DoDamage(Fighter &other);
};

class Stack
{
private:
	int values[20]; // array
	int count = 0; // index

public:
	int top()
	{

	}
	void pop()
	{

	}
	void push(int v)
	{  //add number to the top of the stack
	  
		values[count] = v;
		count = count + 1;
	}
	bool isEmpty()
	{
	
	}
	
}


int main()
{
	Stack stack;
	stack.push(20);



}