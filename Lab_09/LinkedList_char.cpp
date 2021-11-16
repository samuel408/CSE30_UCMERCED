#include "LinkedList_char.h"
#include<iostream>

//constructor
LinkedList::LinkedList(){
    first = NULL;
    last = NULL;
}
//destructor
LinkedList::~LinkedList(){
    clear();
}
//inserts a new element (i.e., a new Node) at the end of the list.  
void LinkedList::insertAtBack(char startingValue){
     
     //new Node
    Node*t = new Node();

    // points to starting value
    t -> val = startingValue;
    
    //checks if first and last node have no data
    if (first == NULL){
        first = t;
    }

    if (last == NULL){
        last = t;
    }
    // else last point to next = temp so last can be t, adding a new node to the back
    else {
        last -> next = t;
        last = t;

    }
    
}

//removes last element from list
bool LinkedList::removeFromBack(){
    Node*t = first;
    if (last == NULL){
        return false;
    }
    if ( first == last){
        //first is equal to last. it matters if we delete first or delete last
                delete first;	
        		first = NULL;
        		last = NULL;
        		return true;
    }

    while ( t -> next != last){
        t = t -> next;
    }
     //last node delete so the temp node is the new last node
     delete last;
     last = t;
     return true;
} 

//prints data
 void LinkedList::print(){
  	if (first != NULL) {
		Node* t = first; 
		while(t != last){
			cout<<t -> val << ",";     
			t = t -> next;
		}
	cout << t -> val;
	} else cout<<" ";

}

bool LinkedList::isEmpty() {
        if (first == NULL ) {	//Will check if the node is empty, then return true or false
            return true;
        } else 
        	return false;
}

int LinkedList::size() {
		Node *t;
		int counter = 1;					
		if(first == NULL && last == NULL){
			return 0;
		}
		else {
			t = first;
            //if t is not last, then it will go down the list to count how long it is
		while (t != last){		
			t = t -> next;
			counter++;				
		}
	}
	return counter;
}
//if not empty delete list
void LinkedList::clear() {		
		while(!isEmpty()){
			removeFromBack();
		}
}

void LinkedList::insertAtFront(char value){
	Node*t = new Node();
	t -> val = value;
    //if first and last empty  set = to t
	if (first == NULL){ 
		first = t;
	}
	if (last == NULL){
		last = t;
	}
	else{
		t -> next = first;
		first = t;
	}
}

bool LinkedList::removeFromFront(){
    //new node in the 
Node*t = first;
	if (first == NULL) {
		return false;
	}
	if (first == last) {
		delete first;
		first = NULL;
		last = NULL;
		return true;
	}
		t = t -> next;
		delete first;
		first = t;
		return true;
}



