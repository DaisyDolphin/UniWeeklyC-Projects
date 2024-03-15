#include <iostream>

using namespace std;

template <class T> T myMin(T& item1, T& item2)
{
	// compare item then output smallest
	if (item1 < item2)
	{
		return item1;
	}
	else
	{
		return item2;
	}
}

template <class T> T myMax(T& item1, T& item2)
{
	// compare item then output biggest
	if (item1 > item2)
	{
		return item1;
	}
	else
	{
		return item2;
	}
}

template <class T> T MaxOfThree(T& item1, T& item2, T& item3)
{
	T maxValue;
	// compare is 1 less than 2?
	if (item1 < item2)
	{
		// if yes, item2 is larger for now
		maxValue = item2;

		if (maxValue < item3)
		{
			maxValue = item3;
		}
	}
	else
	{
		// if no, item1 is larger for now
		maxValue = item1;

		if (maxValue < item3)
		{
			maxValue = item3;
		}
	}
	return maxValue;
}

int* foo(const int array[], const int target)
{
	// array holds data till a '0'
	// search till i find target
	// return a pointer to the target in the array
	int* result = nullptr;

	for (int i = 0; i < 6; i++) // array length issue
	{
		if (array[i] == target)
		{
			
			if (result == nullptr)
			{
				result = new int();
				*result = array[i];
			}
		}
	}
	return result;
}

template <class T> T* bar(const T array[], const T target)
{
	// array holds data till a '0'
	// search till i find target
	// return a pointer to the target in the array
	T* result = nullptr;

	for (int i = 0; i < 6; i++) // array length issue
	{
		if (array[i] == target)
		{

			if (result == nullptr)
			{
				result = new T();
				*result = array[i];
			}
		}
	}
	return result;
}

int main()
{
	string a = "65";
	string b = "57";
	string c = "89";
	// ints and floats work as expected
	// characters used the ascii meaning, so having char '5' and '6' still checks it, smae for strings
	string d = MaxOfThree(a, b, c); 
	cout << "maxOfThree: " << d << endl;
	const int arrayLength = 6;
	int numSequence[arrayLength] = { 1, 2, 5, 7, 4, 0 };
	const int target = 5;
	int* intResult = foo(numSequence, target);
	cout << "foo: " << *intResult << endl;

	const int floatArrayLength = 6;
	float floatNumSequence[floatArrayLength] = { 1, 2, 5, 7, 4, 0 };
	const float floatTarget = 1;
	float* floatResult = bar(floatNumSequence, floatTarget);
	cout << "bar: " << *floatResult << endl;
};
