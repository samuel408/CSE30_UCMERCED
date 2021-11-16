#include "Stack.h"
#include "LinkedList.h"
#include <iostream>
//constructor
Stack::Stack(){
    ::LinkedList();
    }

//deconstructor
Stack::~Stack(){
    LinkedList::clear();
}

void Stack:: push(int value){
    //uses linked list function insert a node 
    	LinkedList::insertAtFront(value);	

}

int Stack::pop(){
    // Node N = *first;
// removes from front using LIFO (last in first Out)
	int next = first -> val;
	LinkedList::removeFromFront();
	return next;
}

 int& Stack::top(){
     // returns reference of top node
	return first -> val;
}
