#pragma once
#include "../../std_lib_facilities.h"
#include "Node.h"
#include "Node.cpp"

template <typename T>
class Hash_map
{
private:
	int size;
	vector<vector<Node<T>*>> table;
	int hash(int key);
public:
	Hash_map(int s);
	~Hash_map();
	void put(int key, T element);
	T find(int key);
	void print_table();

};

