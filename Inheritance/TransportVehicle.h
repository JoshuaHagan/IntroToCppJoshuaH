#pragma once
#include <iostream>

class TransportVehicle
{
private:
	int mSpeed;
	int mSeats;

public:
	virtual void mDrive();
	virtual void mFly();
	virtual void mPedal();

};
