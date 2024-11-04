#ifndef DICT_HPP
#define DICT_HPP

#include "BinarySearchTree.hpp"
#include <stdexcept>

template <typename K, typename V>
class Dict {
public:
	 Dict() {}

	 void add(K key, V value) {
		  binaryTree.add(key, value);
	 }

	 V operator[](K key) {
		  return binaryTree.find(key); //finds the value
	 }

private:
	 BinarySearchTree<K, V> binaryTree; // God if youre listening HELPPPPPP!!!!!!
};

#endif // DICT_HPP
