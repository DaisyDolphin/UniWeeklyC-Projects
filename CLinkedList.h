#pragma once

// Nick mentioned to Forward declare CElement to avoid 
// giving accidental access inside main

class CElement;

class CLinkedList
{
private:
	CElement* mpHead;
public:
	CLinkedList(); 
	~CLinkedList(); 
	void pushFront(int data);
	void popFront(); 
	int getFront();
	void printList(); 
	bool containsValue(int data);
	int countValue();
	bool removeElement(int data);
	void pushSort(int data);
};