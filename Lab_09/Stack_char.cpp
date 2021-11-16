#include "Stack_char.h"
#include "LinkedList_char.h"
#include <iostream>
//constructor
Stack::Stack(){
    }

//deconstructor
Stack::~Stack(){
}

void Stack:: push(char value){
    //uses linked list function insert a node 
	LinkedList::insertAtFront(value);	

}

char Stack::pop(){
    // Node N = *first;
// removes from front using LIFO (last in first Out)
char next = first -> val;
	LinkedList::removeFromFront();
	return next;
}

 char& Stack::top(){
     // returns reference of top node
return first -> val;
}
