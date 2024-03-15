#include <iostream>
#include "CLinkedList.h"
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

using namespace std;

int main()
{
	//CElement* Element1 = new CElement(42); 
	// we dont want to be able to access the element class ,
	//  also its not a inheritance relationship, so no polymorphism

	CLinkedList* ListOfElements = new CLinkedList();
	CLinkedList* ListOfElements2 = new CLinkedList();
	ListOfElements2->pushFront(6);
	ListOfElements->pushFront(6);
	ListOfElements->pushFront(8);
	ListOfElements->pushFront(6);
	ListOfElements->pushFront(4);
	ListOfElements->pushFront(2);
	cout << "list1: " << endl;
	ListOfElements->printList();
	cout << endl;
	cout << "list2: " << endl;
	ListOfElements2->printList();
	/*if (ListOfElements->containsValue(4))
	{
		std::cout << "yes" << '\n';
	}*/

	// exercise 2
	/*int counter = ListOfElements->countValue();
	cout << counter << '\n';*/

	// exercise 3 remove element
	cout << "list1 after delete: " << endl;
	ListOfElements->removeElement(6);
	ListOfElements->printList();
	cout << endl;
	cout << "list2 after delete: " << endl;
	ListOfElements2->removeElement(6);
	ListOfElements2->printList();
	cout << "error" << endl;
	
	




	//delete Element1;
	delete ListOfElements;

	std::cout << "memory leaks (y/n)(1/0): " <<  _CrtDumpMemoryLeaks();
}
