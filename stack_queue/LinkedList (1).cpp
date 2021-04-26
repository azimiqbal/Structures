#include "pch.h"
#include "LinkedList.h"


LinkedList::LinkedList()
:no_of_elements(0), head(nullptr), tail(nullptr)
{
}


LinkedList::~LinkedList()
{
	while (!is_empty())remove_front();
}

void LinkedList::insert_front(int n) 
{
	Node* newNode = new Node(n, nullptr, head);
	if(!is_empty()) head->set_previous(newNode);
	if (is_empty()) tail = newNode;
	head = newNode;
	no_of_elements++;
}

void LinkedList::insert_back(int n) 
{
	Node* newNode = new Node(n, tail, nullptr);
	if (!is_empty()) tail->set_next(newNode);
	if (is_empty()) head = newNode;
	tail = newNode;
	no_of_elements++;
}

int LinkedList::remove_front() {
	if (is_empty()) error("remove_front on empty list");
	Node* rem = head;
	int return_value = rem->get_value();
	head = rem->get_next();
	if(head != nullptr) head->set_previous(nullptr);
	if (tail == rem) tail = nullptr;
	no_of_elements--;
	delete rem;
	return return_value;
}

int LinkedList::remove_back() 
{
	if (is_empty()) error("remove_back on empty list");
	Node* rem = tail;
	int return_value = rem->get_value();
	tail = rem->get_previous();
	if (tail != nullptr) tail->set_next(nullptr);
	if (head == rem) head = nullptr;
	no_of_elements--;
	delete rem;
	return return_value;
}

int LinkedList::get_front() 
{
	if (is_empty()) error("get_front on empty list");
	return head->get_value();
}

int LinkedList::get_back() 
{
	if (is_empty()) error("get_back on empty list");
	return tail->get_value();
}

int LinkedList::size() 
{
	return no_of_elements;
}

bool LinkedList::is_empty() 
{
	return no_of_elements == 0;
}