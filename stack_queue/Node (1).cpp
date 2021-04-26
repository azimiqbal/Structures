#include "pch.h"
#include "Node.h"


Node::Node(int v, Node* p, Node* n)
	:value(v), previous(p), next(n)
{
}


Node::~Node()
{
}

Node * Node::get_next()
{
	return next;
}

Node * Node::get_previous()
{
	return previous;
}

int Node::get_value()
{
	return value;
}

void Node::set_next(Node * n)
{
	next = n;
}

void Node::set_previous(Node * p)
{
	previous = p;
}
