// BinarySearchTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "BinSearchTree.h"
#include "BinSearchTree.cpp"
#include "../../std_lib_facilities.h"

int main()
{
	BinSearchTree<int>* BT = new BinSearchTree<int>();
	for (int i = 0; i < 10; i++) {
		BT->insert(randint(0, 10));
	}
	BT->print_inorder();
	BT->print_preorder();
	BT->delete_node(3);
	BT->print_inorder();
}

