// Heap_project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Heap.h"

int main()
{
	Heap my_heap(10);
	
	for (int i = 0; i < 10; i++) {
		int n = randint(0, 100);
		my_heap.insert(n);
		cout << "After inserting " << n << " the heap looks like this ";
		my_heap.print();
	}
	
	for (int i = 0; i < 10; i++) {
		cout << "remove_min returns " << my_heap.remove_min() << " and the heap looks like this ";
		my_heap.print();
	}
}

