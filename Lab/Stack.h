#pragma once
#include "Game.h"
class Stack
{
private:
	Hero mData[20];
	int mCount;
	
public:
	Stack()
	{
		mCount = 0;
	}
	Hero Top();
	bool Pop();
	bool Push(Hero*h1);
	bool isEmpty();
	bool isFull();
};
