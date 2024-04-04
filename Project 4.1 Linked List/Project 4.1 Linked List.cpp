// Project 4.1 Linked List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <chrono>

#include "Stack.h"
#include "Queue.h"
using namespace std;

using std::chrono::microseconds;

// times the insertions by themselves
// makes a stack of 'size' elements inserts all those elements and takes the timing info.
// same thing but for a queue.
void timeInsert(int size);

// times removals by themselves
// inserts 'count' and then removes them
// removals' time only starts as soon as we remove
// i start clock when we start removes
void timeRemove(int count);

int main()
{
	// ALL TIMES ARE IN MICROSECONDS

	// insertion for the 3 sizes
	cout << "Inserts:\n";
	timeInsert(100);
	timeInsert(1000);
	timeInsert(10'000);// you can separate 0s by ' marks

	// removals for the 3 sizes
	cout << "Removals:\n";
	timeRemove(100);
	timeRemove(1000);
	timeRemove(10'000);

    return 0;
}

// I looked online for help with this stuff
void timeInsert(int count) {
	cout << "------------------------------------------------\n";

	Stack s;
	auto start = std::chrono::high_resolution_clock::now();// going to insert so start clock!
	for (int i = 0;i < count;i++) {
		s.insert(rand());
	}
	auto end = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
	std::cout << "Time taken by Stack to insert " << count << " elements: " << duration.count() << " microseconds" << std::endl;

	Queue q;
	start = std::chrono::high_resolution_clock::now();
	for (int i = 0;i < count;i++) {
		q.insert(rand());
	}
	end = std::chrono::high_resolution_clock::now();
	duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
	std::cout << "Time taken by Queue to insert " << count << " elements: " << duration.count() << " microseconds" << std::endl;
	//q.print();
}

void timeRemove(int count) {
	cout << "------------------------------------------------\n";
	
	Stack s;
	for (int i = 0;i < count;i++) {
		s.insert(rand());
	}
	auto start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < count; i++) {
		s.remove();
	}
	auto end = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
	std::cout << "Time taken by Stack to REMOVE " << count << " elements: " << duration.count() << " microseconds" << std::endl;

	// QUEUE
	Queue q;
	for (int i = 0;i < count;i++) {
		q.insert(rand());
	}
	start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < count; i++) {
		q.remove();
	}
	end = std::chrono::high_resolution_clock::now();
	duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
	std::cout << "Time taken by Queue to REMOVE " << count << " elements: " << duration.count() << " microseconds" << std::endl;

}