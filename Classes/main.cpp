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
		return values[count];
	}
	void pop()
	{
		values[count - 1] = -1;
		count--;

	}
	void push(int v)
	{  //add number to the top of the stack
		if (v <= 9 && v >= 0)
		{
			if (count = 19)
			{
				values[count] = v;
				count++;
			}
			
		}
		if (v == 43)
		{
			values  += count;
			pop();
		}
		if (v == 45)
		{
			values -= count;
			pop();
		}
	}	
	
};


int main()
{
	Stack stack;
	
	stack.pop();
	stack.push(20);




	system("pause");
}
