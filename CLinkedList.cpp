#include "CLinkedList.h"
#include "CElement.h"
#include <iostream>

CLinkedList::CLinkedList() 
{
	mpHead = nullptr; 
}

// Destructor. Clean up the linked list.
CLinkedList::~CLinkedList()
{
	CElement* prior; // stores previous
	while(mpHead != nullptr) // 0 at the end of the list.
	{
		prior = mpHead; // store previous
		mpHead = mpHead->getNext(); // advance head
		delete prior; // destroy previous
	}
}

// Push the given data on to the front of the linked list.
// 'head' is updated.
void CLinkedList::pushFront(int data)
{
	// allocate memory for new element
	CElement* pTemp = new CElement(data);
	pTemp->setNext(mpHead); // temp in front of
	// the old head of the list
	mpHead = pTemp; // head updated
}

// Pop the front of the linked list.
// Deletes the first element (if one exists).
// 'head' is updated to point at the new front.
void CLinkedList::popFront()
{
	CElement* pOldHead = mpHead; // store old head
	if (mpHead != nullptr) // if list has at least one elem
	{
		mpHead = mpHead->getNext();
		delete pOldHead;
	}
}

// Returns the first element on the linked list.
// If empty then exit with an error message.
int CLinkedList::getFront()
{
	if(mpHead != nullptr) // check list has at least onelink
	{
		return mpHead->getData( );
	}
	else
	{
		// only reached if the linked list is empty
		std::cout << "ERROR: list is empty" << '\n';
		return 0;
	}
}

// Display each of the items on the linked list
void CLinkedList::printList()
{
	CElement* pCurr = mpHead; // can't use 'head' else
	// we'd loose track of the
	// list start
	while(pCurr != nullptr) // 0 atend of the list.
	{
		std::cout << pCurr->getData() << ", ";
		pCurr = pCurr->getNext();
	}
	std::cout << '\n';
}

bool CLinkedList::containsValue(int data)
{
	// if the data is found inside the list, return true
	bool targetFound = false;
	CElement* pCurr = mpHead;
	while (pCurr != nullptr )
	{
		if (pCurr->getData() == data)
		{
			targetFound = true;
			return targetFound;
		}
		pCurr = pCurr->getNext();
	}
	return targetFound;
}

int CLinkedList::countValue()
// returns amount of elements in list
{
	int counter = 0;
	CElement* pCurr = mpHead;
	while (pCurr != nullptr)
	{
		counter += 1;	
		pCurr = pCurr->getNext();
		//std::cout << counter << '\n';
	}
	return counter;
}

bool CLinkedList::removeElement(int data)
{
	// will delete the first element in the list
	// three possibilities
	CElement* pCurr = mpHead;
	CElement* pPrev = nullptr;
	if (mpHead != nullptr)// list not empty
	{
		// AN IMPROVEMENT (GPT) == check if first element is the data, then check the rest of the list (more efficient)
		if (mpHead->getNext() == nullptr) // just one element
		{
			if (pCurr->getData() == data) // if data found delete it
			{
				// delete element from the list
				delete pCurr;
				return true;
			}
			else // else data not found
			{
				return false;
			}
		}
		else // more than one element
		{
			// walk through list to find the first iteration of 'element' 2 4 6 8 6 becomes 2 4 8 6
			while (pCurr->getData() != data && pCurr != nullptr) // need check not null in case emd of list
			{
				// iterates through the list to find data
				pPrev = pCurr;
				pCurr = pCurr->getNext();
				//pPrev = pCurr;
				//pCurr = pCurr->getNext();
				//if (pCurr->getData() == data) // if data found delete it
				//{
				//	delete pCurr;
				//	return true;
				//}
				//else // else data not found, return false
				//{
				//	return false;
				//}
			}
			if (pCurr != nullptr) // data found
			{
				pPrev->setNext(pCurr->getNext());
				delete pCurr;
				return true;
			}
			else // data not found
			{
				return false;
			}
		}
	}
	else // list empty
	{
		return false;
		// element doesn't exist
	}
}

void CLinkedList::pushSort(int data)
{
	CElement* pTemp = new CElement(data);
	// pushs data onto list
	CElement* pCurr = new CElement();

	// check if != empty list - else, no sort
	if (pCurr != nullptr) // list is not empty
	{
		// sort where data goes first
		


		// have pTemp point to next value of pCurr
		pTemp = pCurr->getNext();
	}
}

