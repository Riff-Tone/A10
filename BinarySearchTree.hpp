#ifndef BINARYSEARCHTREE_HPP
#define BINARYSEARCHTREE_HPP

template <typename K, typename V>
class BinarySearchTree {
private:
	 struct Node {// ight
		  K key;
		  V value;
		  Node* left;
		  Node* right;

		  Node(K key, V val) : key(key), value(val), left(nullptr), right(nullptr) {} // instantiates node
	 };

	 Node* root;

	 // its adds nodes in the tree, standard shit type shit
	 Node* add(Node* node, K key, V value) {
		  if (!node) {
				return new Node(key, value);
		  }
		  if (key < node->key) {
				node->left = add(node->left, key, value);
		  } else if (key > node->key) {
				node->right = add(node->right, key, value);
		  }
		  return node;
	 }

	// under the hood this is the engine,
	 V find(Node* node, K key) const {
			//should maybe add a try catch but since its just 2 values, we good
		  if (key < node->key) {
				return find(node->left, key);
		  } else if (key > node->key) {
				return find(node->right, key);
		  } else {
				return node->value; // Key found
		  }
	 }

public:
	 BinarySearchTree() : root(nullptr) {}

	 void add(K key, V value) {
		  root = add(root, key, value);
	 }

	 V find(K key) const {
		  return find(root, key);
	 }
};

#endif // BINARYSEARCHTREE_HPP
