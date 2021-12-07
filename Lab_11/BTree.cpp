#include <iostream>
#include "BTree.h"

using namespace std;

BTree::BTree(){
	root = NULL; 
}
//tree destructor
BTree::~BTree() {
	destroy_tree();
}

//return to the root 
Node *BTree::BTree_root(){
	return root; 
}

void BTree::destroy_tree(Node *leaf){
	//To delete go to  the left and right nodes of the leaf 
	if(leaf != NULL){ 			
		destroy_tree(leaf-> left);
		destroy_tree(leaf->right);
		delete leaf;
	}
}

void BTree::insert(int key, Node *leaf){
	if(key < leaf -> key_value){
		// left side of the leaf
		if(leaf -> left != NULL){
			insert(key, leaf -> left);
		}
		else{
			leaf -> left = new Node;	
			leaf -> left -> key_value=key;
			leaf -> left -> left = NULL;
			leaf -> left -> right = NULL;	
		}
	} 
	//right side of the leaf
	else if( key > leaf -> key_value){
		if(leaf -> right != NULL){
			insert(key, leaf-> right);
		}
		else{
			// again insert() will go through the tree until it reaches an empty node and then create left and right child nodes
			leaf -> right = new Node;	
			leaf -> right -> key_value=key;
			leaf -> right -> left = NULL;
			leaf -> right -> right = NULL;
		}
	}
	
}

Node *BTree::search(int key, Node *leaf){
	//search function will go through the tree from left to right until key is equal to key_value. big O(N)
	if(leaf != NULL){
		if(key == leaf -> key_value){
			return leaf;
		}
		else if(key < leaf -> key_value){
			return search(key, leaf -> left);
		}
		else{
			return search(key, leaf -> right);
		}
	}
	else {
		//NULL if the function can't find the key in the tree.
	}
		return NULL;			
}

void BTree:: insert(int key){
	//If root exists, the insert() is called..
	if(root!=NULL){
		insert(key, root);
	}
//ELSE a new root is create to run insert().
	else{
		root = new Node;
		root -> key_value = key;
		root -> left = NULL;
		root -> right = NULL;
	}
}
//Search(int x) starts at root .
Node *BTree::search(int key){
	return search(key, root);
}
//destroys tree

void BTree::destroy_tree(){
	destroy_tree(root);
}
