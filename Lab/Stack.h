#pragma once
#include "Game.h"
class Stack
{
private:
	// The Hero array 
	Hero mData[20];
	// Incrament the Hero array mData
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
