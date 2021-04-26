#pragma once
class Node
{
private:
	int value;
	Node* next;
	Node* previous;
public:
	Node(int v, Node* p, Node* n);
	~Node();
	Node* get_next();
	Node* get_previous();
	int get_value();
	void set_next(Node* n);
	void set_previous(Node* p);
};

