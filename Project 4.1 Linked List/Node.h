#pragma once
// integer node

struct Node;// because a Node points to itself

struct Node
{
	int data = 0;
	Node* next = nullptr;
	// ctor: how to make each node
	// by default, the next ptr is null
	// ex: Node n1(1) has no next
	// ex: Node n2(2,&n!) its next would be n1
	Node(int d, Node* newNext = nullptr) {
		data = d;
		next = newNext;
	}
};