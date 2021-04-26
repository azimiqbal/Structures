#include "pch.h"
#include "BinSearchTree.h"


template<typename T>
BinSearchTree<T>::BinSearchTree()
{
}


template<typename T>
BinSearchTree<T>::~BinSearchTree()
{
}

template<typename T>
void BinSearchTree<T>::insert(T val)
{
	root = insert(root, val);
}

template<typename T>
void BinSearchTree<T>::print_inorder()
{
	print_inorder(root);
	cout << endl;
}

template<typename T>
void BinSearchTree<T>::print_preorder()
{
	print_preorder(root);
	cout << endl;
}

template<typename T>
void BinSearchTree<T>::print_postorder()
{
	print_postorder(root);
	cout << endl;
}

template<typename T>
void BinSearchTree<T>::delete_node(T val)
{
	root = delete_node(root, val);
}

template<typename T>
Node<T>* BinSearchTree<T>::insert(Node<T>* current, T val)
{
	if (current == nullptr)
		return new Node<T>(val);
	if (val < current->get_val())
		current->set_left(insert(current->get_left(), val));
	else
		current->set_right(insert(current->get_right(), val));
	return current;
}
template<typename T>
void BinSearchTree<T>::print_inorder(Node<T>* current)
{
	if (current == nullptr) return;
	print_inorder(current->get_left());
	cout << current->get_val() << " ";
	print_inorder(current->get_right());
}
template<typename T>
void BinSearchTree<T>::print_preorder(Node<T>* current)
{
	if (current == nullptr) return;
	cout << current->get_val() << " ";
	print_preorder(current->get_left());
	print_preorder(current->get_right());
}
template<typename T>
void BinSearchTree<T>::print_postorder(Node<T>* current)
{
	if (current == nullptr) return;	
	print_postorder(current->get_left());
	print_postorder(current->get_right());
	cout << current->get_val() << " ";
}
template<typename T>
Node<T>* BinSearchTree<T>::delete_node(Node<T>* current, T val)
{
	if (current == nullptr) {
		cerr << "Noden med verdi " << val << " finnes ikke i treet" << endl;
		return nullptr;
	}
	if (val < current->get_val())
		current->set_left(delete_node(current->get_left(), val));
	if (val > current->get_val())
		current->set_right(delete_node(current->get_right(), val));
	if (val == current->get_val()) {
		Node<T>* rem = current;
		if (rem->get_right() == nullptr)
			current = rem->get_left();
		else {
			current = new Node<T>(find_min(rem->get_right()));
			current->set_left(rem->get_left());
			current->set_right(delete_node(rem->get_right(), current->get_val()));
		}
		delete rem;
	}
	return current;
}
template<typename T>
T BinSearchTree<T>::find_min(Node<T>* current)
{
	if (current == nullptr) error("find_min på et tomt tre");
	while (current->get_left() != nullptr)
		current = current->get_left();
	return current->get_val();
}
/*
template<typename T>
void BinSearchTree<T>::insert(T val)
{
	if (root == nullptr) {
		root = new Node(val);
		return;
	}
	Node<T>* current = root;
	while (true) {
		if (val < current->get_val()) {
			if (current->get_left() == nullptr) {
				current->set_left(new Node(val));
				return;
			}
			current = current->get_left();

		}
		else {
			if (current->get_right() == nullptr) {
				current->set_right(new Node(val));
				return;
			}
			current = current->get_right();
		}
	}
	
}
*/
