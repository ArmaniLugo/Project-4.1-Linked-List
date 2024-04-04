#pragma once
#include "LinkedList.h"


class Stack
{
private:
	LinkedList data;
public:
	// insert: we always insert to the 'top' of the stack (front of the LL)
	// ex: rStack stack; stack.insert(101);
	void insert(int);
	
	// remove: always take from front (just as it inserts AT front)
	// ex: int v = stack.remove();
	int remove(); 

	// print: calls LL's print
	void print();
};


