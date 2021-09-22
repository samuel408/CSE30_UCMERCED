#include <iostream>

using namespace std;
//function that checks array size to make sure its greater than 0
int check(int arraySize){
    if ( arraySize < 0){
        cout << "ERROR: you entered an incorrect value for the array size!" << endl;
        exit(1);
       }
       


}
 //search for number in the array using the linear search algorithm
  int search(int array[],int size, int searching ){
      //variable for the number of iterations before finding the number.
      int count = 1;
      for(int i = 0; i < size ; i++){
          if (array[i] == searching){

              cout << "Found value " << searching << " at index "<< i << " which took "<< count <<" checks." << endl;
          }
        count +=1;
          
          
      }
      //check for worst or best case
       if(searching == array[0]){
            cout << "We ran into the best case scenario!"<< endl;
        }
        else if (searching == array[size - 1]){
                        cout << "We ran into the worst case scenario!"<< endl;

        }

  }





  int main() 
  
  
  {
      // declare variable that holds the size of the Array
      int arraySize = 0;
      
      //declare empty array

      //get array size from user

      cout << "Enter the size of the array: " ;

      cin >> arraySize;

      // make sure array size is greater than 0
      check(arraySize);
       
       // tests to see if function check terminates the program if inserted incorrect value
    //    cout << "didnt work bro "<< endl;

    // creates array value 
      int array [arraySize];

      //grab array index values
         cout << "Enter the numbers in the array, separated by a space, and press enter:" ;
        //for loop captures input and sorts it consecutive array slots
        for (int i = 0; i < arraySize; ++i){
            cin >> array[i];
        }

        //print values to see if they were added into the array
        // for (int i = 0; i < arraySize; ++i){
        //     cout << array[i]<< endl;
        // }

        //intialize a variable to store the number we are going to be searching for in the array
        int searchingFor = 0;
        // grab number to search in the array
        cout << "Enter a number to search for in the array: ";

        cin >> searchingFor;

        //search for number in the array using the linear search algorithm
        search(array,arraySize,searchingFor);

       



  return 0; 
  } 
