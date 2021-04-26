// Stack_and_queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "LLqueue.h"


int main()
{
	LLqueue myQ;
	for (int i = 0; i < 10; i++) {
		myQ.enqueue(i);
	}

	while (!myQ.is_empty()) {
		cout << myQ.dequeue() << " ";
	}
}

