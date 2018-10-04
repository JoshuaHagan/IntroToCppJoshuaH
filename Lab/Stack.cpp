#include "Stack.h"
// Check to see if there anything on top of the Stack
Hero Stack::Top()
{
	mData[mCount];
	return mData[mCount];
}
// Pop the item off the stack
bool Stack::Pop()
{
	mCount--;
	return false;
}
// Push a item on to the Stack
bool Stack::Push(Hero *h1)
{
	if (mCount < 20)
	{
		mData[mCount + 1] = *h1;
		mCount++;
	}
	else
	{
		return false;
	}
}
// Tell me if Stack is empty or not
bool Stack::isEmpty()
{
	if (mCount > 0)
	{
		return false;
	}
	else
	{
		return true;
	}
} 
// Tell me if Stack Full or not
bool Stack::isFull()
{
	if (mCount < 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}
