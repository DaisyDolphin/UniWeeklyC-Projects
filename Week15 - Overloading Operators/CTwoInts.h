#pragma once

class CTwoInts
{
private:
	int mX;
	int mY;
public:
	CTwoInts( ) {  };
	CTwoInts( int x, int y ) : mX( x ), mY( y ) { } ;
	void Display();

	CTwoInts operator = (CTwoInts operand);
	bool operator == (CTwoInts operand);
	CTwoInts operator += (CTwoInts operand);
	CTwoInts operator + (CTwoInts operand);
	CTwoInts operator -= (CTwoInts operand);
	CTwoInts operator - (CTwoInts operand);
	CTwoInts operator * (CTwoInts operand);

	friend ostream& operator << (ostream& outputStream, const CTwoInts operand);
	friend istream& operator >> (istream& inputStream, CTwoInts& operand); // not a const because we want to change it
};	// needs to be a '&' 

