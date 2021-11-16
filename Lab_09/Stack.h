#ifndef STACK_H
#define STACK_H
#include "LinkedList.h"

using namespace std;

class Stack: public LinkedList
{
    public:
    //default constructor
    Stack();
    // destructor
    ~Stack();
// inserts a new element (value) at the front of the stack, by calling the appropriate LinkedList function. 
    void push(int value);

    /*
    removes the first element of the Stack, by
     calling the appropriate LinkedList function.
      It also returns the value of the element that has been popped. 
    */
    int pop();
  //returns a reference to the top element of the Stack. 
    int &top();


};

#endif
