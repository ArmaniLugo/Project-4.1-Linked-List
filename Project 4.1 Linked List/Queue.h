#pragma once
#include "LinkedList.h"
class Queue
{
public:
	void insert(int);// inserts at back
	int remove(); // leave from the front
	void print();// same as LL's print
private:
	LinkedList data;
};

