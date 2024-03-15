// Demonstration of the need for a user created copy constructor 
// Error caused by shallow copy. 
// Example uses an array (allocated using dynamic memory) 
#include <iostream> 
using namespace std;

class CArray
{
private:
	int* mpData;
	int mSize;
public:
	CArray(int size);
	CArray(const CArray& original); // copy constructor
	~CArray();
	void SetN(int data, int position);
	void Display();
	CArray operator = (const CArray& operand);
};

CArray::CArray(int size)
{
	mpData = new int[size];
	mSize = size;
}

CArray::CArray(const CArray& original)
{
	delete[] = mpData[]
	mSize = original.mSize;
	mpData = new int[mSize];
	for (int i = 0; i < mSize; i++)
	{
		mpData[i] = *original.mpData;
	}
}

CArray::~CArray()
{
	delete mpData;
}

void CArray::SetN(int position, int data)
{
	mpData[position] = data;
}

void CArray::Display()
{
	for (int i = 0; i < mSize; i++)
	{
		cout << mpData[i] << " ";
	}
	cout << endl;
}

CArray CArray::operator=(const CArray& operand)
{
	return *this;
}

void main()
{
	CArray original(4);
	original.SetN(0, 5);
	original.SetN(1, 7);
	original.SetN(2, 3);
	original.SetN(3, 9);

	original.Display();
	// uses the copy constructor because "CArray copy"
	// instead of copy = original
	CArray copy = original;
	copy.Display();

	copy.SetN(0, 8);
	copy.SetN(1, 6);
	copy.SetN(2, 4);
	copy.SetN(3, 2);

	original.Display();
	copy.Display();
}
