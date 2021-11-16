#ifndef STACKchar_H
#define STACKchar_H
#include "LinkedList_char.h"

using namespace std;

class Stack: public LinkedList
{
    public:
    //default constructor
    Stack();
    // destructor
    ~Stack();
// inserts a new element (value) at the front of the stack, by calling the appropriate LinkedList function. 
    void push(char value);

    /*
    removes the first element of the Stack, by
     calling the appropriate LinkedList function.
      It also returns the value of the element that has been popped. 
    */
    char pop();
  //returns a reference to the top element of the Stack. 
    char &top();


};

#endif
