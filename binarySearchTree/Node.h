#pragma once
template <typename T>
class Node
{
public:
	Node(T val);
	~Node();
	T get_val();
	Node<T>* get_left();
	Node<T>* get_right();
	void set_left(Node<T>* n);
	void set_right(Node<T>* n);
private:
	T value;
	Node<T>* left;
	Node<T>* right;
};


