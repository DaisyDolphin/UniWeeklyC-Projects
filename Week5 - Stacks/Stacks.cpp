// Lecture_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int SIZE = 5;

class Stack
{
private:
    int *mTop = new int();
    string *mData = new string[SIZE];
    bool isFull();
    bool isEmpty();
public:
    Stack(); // constructor
    void Push(string newData);
    void Pop(string& oldData);
    void DisplayStack();
    int GetLength(); // gets length of stack 
    void DisplayReverseStack();
    int CountData(string searchString);
    int findData(string searchString);
    void displayN(int n); // displays the selected (nth) number
    bool findN(int n, string& foundString);
    bool allSame();
    void copyStack(Stack* newStack);
};

int main()
{
    Stack* myStack = new Stack;
    myStack->Push("blue");
    myStack->Push("blue");
    myStack->Push("blue");
    myStack->Push("blue");
    myStack->Push("green");
    
    myStack->copyStack(myStack);

    

    //myStack->DisplayStack();
    // myStack->displayN(2);
    /*string stringToSearch = "black";
    if (myStack->findN(2, stringToSearch))
    {
        cout << "Found! " << stringToSearch << endl;
    }
    else
    {
        cout << "Couldn't find: " << stringToSearch << endl;
    }*/
   /* if (myStack->allSame())
    {
        cout << "All same bro! " << endl;
    }
    else
    {
        cout << "oops nope" << endl;
    }*/
    /*cout << myStack->CountData("blue") << endl << myStack->CountData("red") << endl;
    cout << myStack->findData("green") << endl << myStack->findData("rad") << endl;*/
    //myStack->DisplayReverseStack();
    //cout << endl << myStack->GetLength() << endl;

    //string storedData;
    //myStack->Pop(storedData);
    //cout << "popped: " << storedData << endl; // 
    //myStack->Pop(storedData);
    //cout << "popped: " << storedData << endl; // 
    //myStack->Pop(storedData);
    //cout << "popped: " << storedData << endl; // 

    //cout << endl << endl << myStack->GetLength() << endl << endl;

    delete myStack;
    myStack = nullptr;
}
bool Stack::isFull()
{
    bool result = false;

    if (*mTop >= SIZE)
    {
        result = true;
    }
    return result;
}
bool Stack::isEmpty()
{
    bool result = false;

    if (*mTop <= 0)
    {
        result = true;
    }

    return result;
}
Stack::Stack()
{
    *mTop = 0;
}
void Stack::Push(string newData)
{
    //check if not empty
    if (!isFull())
    {
        //push onto stack
        mData[*mTop] = newData;
        (*mTop)++; // ptr++ increments address location in heap not value pointing to
        // error here where mTop becomes -363340000... etc ?? because the address increments not the value.
    }
    //let the user know stack is full
    else
    {
        cout << "Stack is full" << endl;
    }
}
void Stack::Pop(string& oldData)
{
    // check if Stack is not Empty
    if (!isEmpty())
    {
        //decrease mTop and then return value
        (*mTop)--;
        oldData = mData[*mTop];
    }
    // else if Stack is Empty
    else
    {
        cout << "stack is empty" << endl;
        oldData = "";
    }
}
void Stack::DisplayStack()
{
    cout << "Displayed: " << endl;
    for (int i = 0; i < *mTop; i++)
    {
        cout << mData[i] << endl;
    }
}
int Stack::GetLength()
{
    // size of array minus how many items are in the stack = length
    // if stack empty = 0;
    if (isEmpty())
    {
        return 0;
    }
    else
    {
        // find mTop 
        return (*mTop);
    }
}
void Stack::DisplayReverseStack()
{
    cout << "Displayed backwards: " << endl;
    for (int i = *mTop; i > 0; i--)
    {
        cout << mData[i - 1] << endl;
    }
}
int Stack::CountData(string searchString)
{
    int counter = 0;
    // basically a search item
    for (int i = 0; i < *mTop; i++)
    {
        if (searchString == mData[i])
        {
            counter++;
        }
    }
    return counter;
}
int Stack::findData(string searchString)
{
    // will print out the index location of FIRST iteration in array for search item
    // -1 if not found
    for (int i = 0; i < *mTop; i++)
    {
        if (searchString == mData[i])
        {
            return i;
        }
    }
    return -1;
}
void Stack::displayN(int n)
{
    // input index value
    // spits out value at index in array
    if (n < *mTop)// n < mTop;
    {
        cout << mData[n] << endl;
    }
    else
    {
        cout << "Out of bounds for N. " << endl;
    }
}
bool Stack::findN(int n, string& foundString)
{
    if (n > *mTop)
    {
        // in case n out side bounds

        // find string at index value
        if (mData[n] == foundString)
        {
            return true;
        }
        return false;
    }
}
bool Stack::allSame()
{
    // if first string = next string and next after and next after, then all same.
    string Data0 = mData[0];
    for (int i = 1; i < GetLength(); i++)
    {
        if (mData[i] != Data0)
        {
            return false;
        }
    }
    return true;
}
void Stack::copyStack(Stack* newStack)
{
    // copy old stack onto new stack?
    Stack* secondStack = { newStack };
}
