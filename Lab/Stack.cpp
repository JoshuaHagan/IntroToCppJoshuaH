#include "Stack.h"

Hero Stack::Top()
{

	return Hero();
}
// Pop the item off the stack
bool Stack::Pop()
{
	mData[mCount - 1];
	mCount--;


	return false;
}
// Push a item on to the Stack
bool Stack::Push(Hero *)
{
	mData[mCount + 1];
	mCount++;
	return false;
}
// Tell me if Stack is empty or not
bool Stack::isEmpty()
{
	if (mCount > 0)
	{
		return false;
	}
} 
// Tell me if Stack Full or not
bool Stack::isFull()
{
	if (mCount < 0)
	{
		return false;
	}
}
