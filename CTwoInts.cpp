#include <iostream>
using namespace std;

#include "CTwoInts.h"

void CTwoInts::Display()
{
	cout << "(" << mX << ", " << mY << ")";
}

CTwoInts CTwoInts::operator = (CTwoInts operand)
{
	mX = operand.mX;
	mY = operand.mY;
	return *this;
}

bool CTwoInts::operator == (CTwoInts operand)
// what if the parameter was const? how do i know when to do that?
{
	if (mX == operand.mX && mY == operand.mY)
	{
		return true;
	}
	else
	{
		return false;
	}
}

CTwoInts CTwoInts::operator += (CTwoInts operand) 
{
	mX += operand.mX;
	mY += operand.mY;
	return *this;
}

CTwoInts CTwoInts::operator + (CTwoInts operand)
{
	CTwoInts newOperand; // why is this needed??
	newOperand.mX = mX + operand.mX;
	newOperand.mY = mY + operand.mY;
	// + is different, and needs to return a newly constructed CTwoInts object
	return newOperand;
}

CTwoInts CTwoInts::operator -= (CTwoInts operand)
{
	mX -= operand.mX;
	mY -= operand.mY;
	return *this;
}

CTwoInts CTwoInts::operator - (CTwoInts operand)
{
	CTwoInts newOperand; 
	newOperand.mX = mX - operand.mX;
	newOperand.mY = mY - operand.mY;
	return newOperand;
}

CTwoInts CTwoInts::operator * (CTwoInts operand)
{
	CTwoInts newOperand;
	newOperand.mX = mX * operand.mX;
	newOperand.mY = mY * operand.mY;
	return newOperand;
}

ostream& operator << (ostream& outputStream, const CTwoInts operand)
{
	cout << "(" << operand.mX << ", " << operand.mY << ")";
	return outputStream;
}

istream& operator >> (istream& inputStream, CTwoInts& operand)
{
	inputStream >> operand.mX >> operand.mY;
	return inputStream;
}
