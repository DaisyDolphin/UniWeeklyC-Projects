#include <iostream>

using namespace std;

struct SBankAccount
{
	string name;
	float balance;
};

const int SIZE = 4;

void changeInt(int pointer);
void cancel(int* pointer1, int* pointer2);
void outputAccount(SBankAccount* AccountPointer);
void flattenArray(int* arrayPtr, int size);
void displayArray(int* arrayPtr, int size);

class ModuleMarks
{
private:
	string moduleName;
	float moduleMarks;
public:
	void setModule(string moduleName, float moduleMarks);
	void displayModule(ModuleMarks ModuleMarks[]);
};

int main()
{
	// Exercise 1
	// practice referencing and dereferencing?

	//int value = 4;
	//int* valuePtr = new int{ 6 };
	////int* value3 = &value;
	////*value3 = 7;
	//cout << value << '\n';
	//changeInt(value);
	//cout << *valuePtr << '\n';
	//changeInt(*valuePtr);

	////cout << value3 << '\n';
	////changeInt(*value3);

	// forgot to deallocate memory after use (delete function)

	// outputting the value instead of the references IS dereferencing

	// Exercise 2: cancel

		// referencing vs dereferencing... what is it?


	//int five = 5;
	//int six = 6;

	//int* Ptr1 = &five; // this is a pointer to the variable location in call stack
	//int* Ptr2 = &six;

	//cout << *Ptr1 << '\n'; // *Ptr proudces the value being pointed at and is "Dereferenicng"
	//cout << *Ptr2 << '\n';

	////changeInt(*Ptr1);
	//cancel(Ptr1, Ptr2);
	//cout << *Ptr1 << " " << * Ptr2;

	//// need to stop memory leak.

	//delete Ptr1;
	//delete Ptr2;

	// exercise 3 bank structure
	//SBankAccount AccountNum1; // normal
	//AccountNum1.name = "Max";

	//SBankAccount* AccountPointer = new SBankAccount; // dynamic
	////SBankAccount* AccountPointer = nullptr; // mem leak 

	//AccountPointer->name = "Max";
	//AccountPointer->balance = 100.f;

	//outputAccount(AccountPointer);

	//delete AccountPointer; // memory leak from 

	// exercise 4 flatten array

	const int size = 4;
	int arry[size] = { 3, 7, 4, 9 };

	
	
	int* arryPtr[] = { arry };

	for (int i = 0; i < size; i++)
	{
		cout << arryPtr[i] << ', ';
	}
	cout << '\n';

	displayArray(arryPtr[size], size);
	flattenArray(arryPtr[size], size);
	displayArray(arryPtr[size], size);

	// exercise 4

	ModuleMarks* Module = new ModuleMarks;

	Module->displayModule();
	Module->setModule();



}

void changeInt(int pointer)
{
	pointer = 10;
	cout << pointer << '\n';
}

void cancel(int* pointer1, int* pointer2) // recieves pointer integers not values
{
	if (*pointer1 < *pointer2)
	{
		// *pointer1 smaller
		*pointer1 = 0;
		cout << *pointer1 << " is the smaller value. \n";
		
	}
	else
	{
		// *pointer2 smaller
		*pointer2 = 0;
		cout << *pointer2 << " is the smaller value. \n";
	}
}

void outputAccount(SBankAccount* AccountPointer)
{
	cout << "Name: " << AccountPointer->name << "Balance: " << AccountPointer->balance << '\n';
}

void flattenArray(int* arrayPtr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arrayPtr[i] = 0;
	}
	cout << '\n';
}
void displayArray(int* arrayPtr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arrayPtr[i] << ', ';
	}
	cout << '\n';
}

void ModuleMarks::setModule(string moduleName, float moduleMarks)
{
	
}

void ModuleMarks::displayModule(ModuleMarks ModuleMarks[])
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Name: " << ModuleMarks[i].moduleName << " Marks: " << ModuleMarks[i].moduleMarks
	}
	
}
