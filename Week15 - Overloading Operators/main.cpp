#define _CRTDBG_MAP_ALLOC
#include <iostream>
#include <crtdbg.h>
using namespace std;

#include "CTwoInts.h"

int main()
{
	/*CTwoInts* a = new CTwoInts;
	CTwoInts* b = new CTwoInts(3, 8);
	CTwoInts* c = new CTwoInts(4, 4);
	CTwoInts* d = new CTwoInts(5, 7);
	CTwoInts* e = new CTwoInts(10, 10);
	CTwoInts* f = new CTwoInts(5, 5);
	CTwoInts* g = new CTwoInts;
	CTwoInts* multiply = new CTwoInts(2, 2);
	CTwoInts* mulResult = new CTwoInts;*/

	//*a = *b; // deferencing. Copying values not assigning a pointer
	//a->Display();
	//cout << endl;

	//*a += ((*b) += (*c)); // brackets makes the dereferencing clearer

	//// okay so now attempt to overload the + operator?

	//a->Display();
	//cout << endl;

	//cout << *a << *b << *c << *d;

	//e = c + d; // it wasnt working because it's pointers!!!
	/**e = *c + *d;
	*g = *e - *f;
	*a -= *b;
	*mulResult = ((*c) * ((*g) * (*multiply)));


	cout << "result: " << *e << endl;
	cout << "result: " << *g << endl;
	cout << "result: " << *a << endl;
	cout << "result: " << *mulResult << endl;

	delete(a);
	delete(b);
	delete(c);
	delete(d);
	delete(e);
	delete(f);
	delete(g);
	delete(multiply);
	delete(mulResult);*/

	CTwoInts *fred = new CTwoInts(1, 2);
	CTwoInts *greg = new CTwoInts(1, 2);

	cout << "cin fred's Two ints: ";
	cin >> *fred;

	cout << *fred << endl;
	if (*greg == *fred)
	{
		cout << "greg and fred are same" << endl;
	}
	else 
	{
		cout << "greg and fred are not the same" << endl;
	}

	delete(fred); // when i delete, I'm deleting the data at the end of the pointer
	delete(greg);

	// after this, it asks about linked list operators and
	// to add onto my earlier project, fo rnow, I will do my Soft assignment.

	cout << "Number of memory leaks: ";
	cout << _CrtDumpMemoryLeaks();
	cout << '\n';
}
