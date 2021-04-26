#pragma once
#include "LinkedList.h"

class LLqueue
{
private:
	LinkedList* list;
public:
	LLqueue();
	~LLqueue();
	void enqueue(int n);
	int dequeue();
	bool is_empty();
	int size();
};

