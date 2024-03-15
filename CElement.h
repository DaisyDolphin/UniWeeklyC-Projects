#pragma once
class CElement
{
private:
	CElement* mpNext;
	int mData;
public:
	CElement(int data);
	int getData();
	CElement* getNext();
	void setNext(CElement* pNew);
};
