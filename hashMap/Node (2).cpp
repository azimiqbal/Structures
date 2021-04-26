#include "pch.h"
#include "Node.h"

template<typename T>
Node<T>::Node(int k, T ele)
	:key(k), element(ele)
{
}

template<typename T>
Node<T>::~Node()
{
}

template<typename T>
int Node<T>::get_key()
{
	return key;
}

template<typename T>
T Node<T>::get_element()
{
	return element;
}
