#pragma once
#include "Node.h"
#include <iostream>
#include <stdexcept>
class LinkedList
{
private:
	// 3 data things we keep track of
	// this is called "in-class member initialization"
	Node* head = nullptr;
	Node* tail = nullptr;
	int size = 0;
public:
	LinkedList() = default; // lets compiler make an empty list for us
	
	// methods for inserting
	void insertFront(int newValue);// if b->c, and we iF(A), we get A->B->C
	void insertBack(int newValue);// if a->b, and we iB(C), we get A->B->C

	// methods for removing
	int removeFront();
	int removeBack();

	// our helpful debugger buddy
	void print();
};


