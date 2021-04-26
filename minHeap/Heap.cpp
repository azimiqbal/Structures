#include "pch.h"
#include "Heap.h"



int Heap::get_left_child_index(int parent_index)
{
	return 2 * parent_index + 1;
}

int Heap::get_right_child_index(int parent_index)
{
	return 2 * parent_index + 2;
}

int Heap::get_parent_index(int child_index)
{
	return (child_index - 1) / 2;
}

bool Heap::has_left_child(int parent_index)
{
	return get_left_child_index(parent_index) < size;
}

bool Heap::has_right_child(int parent_index)
{
	return get_right_child_index(parent_index) < size;
}

bool Heap::has_parent(int child_index)
{
	return child_index > 0;
}

int Heap::get_left_child(int parent_index)
{
	return table[get_left_child_index(parent_index)];
}

int Heap::get_right_child(int parent_index)
{
	return table[get_right_child_index(parent_index)];
}

int Heap::get_parent(int child_index)
{
	return table[get_parent_index(child_index)];
}

void Heap::swap(int index1, int index2)
{
	int temp = table[index1];
	table[index1] = table[index2];
	table[index2] = temp;
}

void Heap::fix_heap_up()
{
	int current_index = size - 1;
	while (has_parent(current_index) &&
		get_parent(current_index) > table[current_index]) {
		swap(get_parent_index(current_index), current_index);
		current_index = get_parent_index(current_index);
	}
}

void Heap::fix_heap_down()
{
	int current_index = 0;
	while (has_left_child(current_index)) {
		int smaller_child_index = get_left_child_index(current_index);
		if (has_right_child(current_index) &&
			get_right_child(current_index) < table[smaller_child_index]) {
		
				smaller_child_index = get_right_child_index(current_index);
		}
		if (table[current_index] < table[smaller_child_index]) return;
		swap(current_index, smaller_child_index);
		current_index = smaller_child_index;
	}
}

Heap::Heap(int c)
	:capacity(c), size(0)
{
	table = new int[c];
}

Heap::~Heap()
{
	delete[] table;
}

int Heap::min()
{
	if (size == 0) error("min() on empty heap");
	return table[0];
}

int Heap::remove_min()
{
	if (size == 0) error("remove_min() on empty heap");
	int minimum = table[0];
	table[0] = table[size - 1];
	size--;
	fix_heap_down();
	return minimum;
}

void Heap::insert(int value)
{
	if (size == capacity) error("insert into full heap");
	table[size] = value;
	size++;
	fix_heap_up();
}

void Heap::print()
{
	for (int i = 0; i < size; i++) {
		cout << table[i] << " ";
	}
	cout << endl;
}
