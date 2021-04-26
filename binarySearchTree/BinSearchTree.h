#pragma once
#include "../../std_lib_facilities.h"
#include "Node.h"
#include "Node.cpp"

template <typename T>
class BinSearchTree
{
public:
	BinSearchTree();
	~BinSearchTree();
	void insert(T val);
	void print_inorder();
	void print_preorder();
	void print_postorder();
	void delete_node(T val);
private:
	Node<T>* root;
	Node<T>* insert(Node<T>* current, T val);
	void print_inorder(Node<T>* current);
	void print_preorder(Node<T>* current);
	void print_postorder(Node<T>* current);
	Node<T>* delete_node(Node<T>* current, T val);
	T find_min(Node<T>* current);
};

