#pragma once
#include "../../std_lib_facilities.h"

template <typename T>
class Node
{
private:
	int key;
	T element;
public:
	Node(int k, T ele);
	~Node();
	int get_key();
	T get_element();
};

template <typename T>
ostream& operator<<(ostream& ost, Node<T>& n) {
	return ost << "(" << n.get_key() << ", " << n.get_element() << ")";
}

