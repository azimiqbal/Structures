#include "pch.h"
#include "LLqueue.h"


LLqueue::LLqueue()
{
	list = new LinkedList();
}


LLqueue::~LLqueue()
{
	delete list;
}

void LLqueue::enqueue(int n)
{
	list->insert_front(n);
}

int LLqueue::dequeue()
{
	return list->remove_back();
}

bool LLqueue::is_empty()
{
	return list->is_empty();
}

int LLqueue::size()
{
	return list->size();
}
