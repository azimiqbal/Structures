#pragma once
#include "../../std_lib_facilities.h"

class Heap
{
private:
	int* table;
	int capacity;
	int size;

	int get_left_child_index(int parent_index);
	int get_right_child_index(int parent_index);
	int get_parent_index(int child_index);

	bool has_left_child(int parent_index);
	bool has_right_child(int parent_index);
	bool has_parent(int child_index);

	int get_left_child(int parent_index);
	int get_right_child(int parent_index);
	int get_parent(int child_index);

	void swap(int index1, int index2);
	void fix_heap_up();
	void fix_heap_down();
public:
	Heap(int c);
	~Heap();
	int min();
	int remove_min();
	void insert(int value);
	void print();
};

