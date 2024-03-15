#include <iostream>
#include <memory>
#include <vector>

using namespace std;

struct coords
{
	int x;
	int y;
};

int main()
{
	// smart pointer
	unique_ptr <int> ptrCpp11(new int); //C++11 style
	*ptrCpp11 = 5;
	unique_ptr<int> ptrCpp14 = make_unique<int>();
	*ptrCpp14 = 7;

	// initialisation:
	unique_ptr<int> pCpp11(new int(6));
	unique_ptr<int> pCpp14 = make_unique<int>(8);
	cout << *ptrCpp11 << " " << *ptrCpp14 << " " << *pCpp11 << " " << *pCpp14 << endl;


	unique_ptr <coords> ptr1(new coords);
	*ptr1 = { 3, 9 };
	unique_ptr <coords> ptr2(new coords);
	//*ptr2 = { 3, 9 };

	ptr2 = move(ptr1);

	vector<int> v[];

	v.push_back(2);

	vector<int>::iterator it;

	for (it - v.begin(); it v.end(); it++)
	{

	}
}
