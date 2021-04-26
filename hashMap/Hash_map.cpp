#include "pch.h"
#include "Hash_map.h"


template<typename T>
int Hash_map<T>::hash(int key)
{
	return key%size;
}

template<typename T>
Hash_map<T>::Hash_map(int s)
	:size(s)
{
	for (int i = 0; i < size; i++) {
		table.push_back(vector<Node<T>*>());
	}
}

template<typename T>
Hash_map<T>::~Hash_map()
{
}

template<typename T>
void Hash_map<T>::put(int key, T element)
{
	int index = hash(key);
	table[index].push_back(new Node<T>(key, element));
}

template<typename T>
T Hash_map<T>::find(int key)
{
	int index = hash(key);
	for (int i = 0; i < table[index].size(); i++) {
		if (table[index][i]->get_key() == key)
			return  table[index][i]->get_element();
	}
	error("no such key in map");
}

template<typename T>
void Hash_map<T>::print_table()
{
	for (int i = 0; i < size; i++) {
		cout << "[" << i << "] ";
		for (int j = 0; j < table[i].size(); j++) {
			cout << *(table[i][j]) << " ";
		}
		cout << endl;
	}
}
