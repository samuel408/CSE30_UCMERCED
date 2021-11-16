#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList first;
    LinkedList second;

    // Check if lists are empty
    if(first.isEmpty()){
        cout << "The first list is empty!" << endl;
    }
    else{
        cout << "The first list is NOT empty..." << endl;    
    }
    if(second.isEmpty()){
        cout << "The second list is empty!" << endl;
    }
    else{
        cout << "The second list is NOT empty..." << endl;
    }

    // Print the size of the first and second lists
    cout << "The size of the first list is: " << first.size() << endl; 
    cout << "The size of the second list is: " << second.size() << endl;

    // Insert some values into the first list
    for(int i = 1; i < 6; i++){
        first.insertAtBack(i);
    }

    // Print the lists    
    cout << "Here is the first list: ["; first.print(); cout << "]" << endl;
    cout << "Here is the second list: ["; second.print(); cout << "]" << endl;

    // Insert a value into the second list
    second.insertAtBack(25);

    // Print the lists
    cout << "Here is the first list: ["; first.print(); cout << "]" << endl;
    cout << "Here is the second list: ["; second.print(); cout << "]" << endl;

    // Clear the second list and remove an item from the first list
    second.clear();
    first.removeFromBack();

    // Print the lists
    cout << "Here is the first list: ["; first.print(); cout << "]" << endl;
    cout << "Here is the second list: ["; second.print(); cout << "]" << endl;

    // Clear the first list and add five items into the second list
    first.clear();
    second.insertAtBack(-5);
    second.insertAtBack(0);
    second.insertAtBack(5);
    second.insertAtBack(10);

    // Print the lists
    cout << "Here is the first list: ["; first.print(); cout << "]" << endl;
    cout << "Here is the second list: ["; second.print(); cout << "]" << endl;
	
    // Print the size of the lists
    cout << "The size of the first list is: " << first.size() << endl;
    cout << "The size of the second list is: " << second.size() << endl;

    // Check if the lists are empty
    if(first.isEmpty()){
        cout << "The first list is empty!" << endl;
    }
    else{
        cout << "The first list is NOT empty..." << endl;
    }

    if(second.isEmpty()){
        cout << "The second list is empty!" << endl;
    }
    else{
        cout << "The second list is NOT empty..." << endl;
    }
    // Remove all the elements of the second list
    for(int i=0; i<6; i++){
        cout << "Here is the second list: ["; second.print(); cout << "]" << endl;

        if(second.removeFromBack())        
            cout << "Successfully removed an item from the list..." << endl;
        else
            cout << "COULD NOT remove an item from the list!" << endl;
    }

    // Print the sizes
    cout << "The size of the first list is: " << first.size() << endl;
    cout << "The size of the second list is: " << second.size() << endl;

    // Check if the lists are empty
    if(first.isEmpty()){
        cout << "The first list is empty!" << endl;
    }
    else{
        cout << "The first list is NOT empty..." << endl;
    }
    if(second.isEmpty()){
        cout << "The second list is empty!" << endl;
    }
    else{
        cout << "The second list is NOT empty..." << endl;
    }

    return 1;
}