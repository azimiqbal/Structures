#include "pch.h"
#include "Node.h"


template<typename T>
Node<T>::Node(T val)
	:value(val), left(nullptr), right(nullptr)
{
}


template <typename T>
Node<T>::~Node()
{
}

template<typename T>
T Node<T>::get_val()
{
	return value;
}

template<typename T>
Node<T>* Node<T>::get_left()
{
	return left;
}

template<typename T>
Node<T>* Node<T>::get_right()
{
	return right;
}

template<typename T>
void Node<T>::set_left(Node<T>* n)
{
	left = n;
}

template<typename T>
void Node<T>::set_right(Node<T>* n)
{
	right = n;
}
