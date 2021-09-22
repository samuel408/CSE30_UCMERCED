#include <iostream>

using namespace std;
//function that checks array size to make sure its greater than 0
int check(int arraySize){
    if ( arraySize < 0){
        cout << "ERROR: you entered an incorrect value for the array size!" << endl;
        exit(1);
       }
       


}

//sort using selection sort algorithm
 int sort(int array[],int size){
     // declare a variable to store the maximum value and the temporary maximum

     for(int i = 0; i < size  ; i++){
        int max = array[i];
        int tempMax = i;
         for(int j = i; j < size; j++){
             if (array[j] > array[tempMax]){
                 max = array[j];
                 tempMax = j;

             }

         }
         if (tempMax != i){
             //swap
             int swap = array[tempMax];
             array[tempMax] = array[i];
             array[i] = swap;
         }


     }

 }

  int main() 
  
  
  {
      // declare variable that holds the size of the Array
      int arraySize = 0;
      

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

    //sort array using selection sort algorithm
        sort(array,arraySize);

    // print array in  decinding order
    cout << "This is the sorted array in an ascending order:";
    for (int i = 0; i < arraySize; ++i){
            cout << " " <<  array[i];
        }

        // state that we chose the maximum to traverse
        cout << ""<< endl;

        cout << "The algorithm selected the maximum for the traverse of the array."<< endl;
   

     

       



  return 0; 
  } 
