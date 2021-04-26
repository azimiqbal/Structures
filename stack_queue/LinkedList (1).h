#pragma once
#include "Node.h"
#include "../../std_lib_facilities.h"

class LinkedList
{
private:
	int no_of_elements;
	Node* head;
	Node* tail;
public:
	LinkedList();
	~LinkedList();
	void insert_front(int n);
	void insert_back(int n);
	int remove_front();
	int remove_back();
	int get_front();
	int get_back();
	int size();
	bool is_empty();
};

