#include <iostream>

using namespace std;
//function that checks array size to make sure its greater than 0
int check(int arraySize){
    if ( arraySize < 0){
        cout << "ERROR: you entered an incorrect value for the array size!" << endl;
        exit(1);
       }
       


}
//sort using insertion sort algorithm
 int sortArr(int array[],int size, bool order){
     //acending
     if(order == 0){

  
        for(int i = 1; i < size - 1  ; i++){
                 // declare a variable to store the maximum value and the temporary minimum

        int min = array[i];
       int j = i;
       while ( j > 0 && array[j-1] > min){

       array[j] = array[j-1];
       j = j - 1;

       }
       array[j] = min;

        
     }
      // print array in  acending order
    cout << "This is the sorted array in an ascending order:" << endl;
  
     }

     else{
         // dencending
        for(int i = 1; i < size; i++){
                 // declare a variable to store the maximum value and the temporary minimum

        int max = array[i];
       int j = i - 1;
       while ( max > array[j] &&  j >= 0){

       array[j + 1] = array[j];
       j = j - 1;

       }
       array[j + 1] = max;

        
     }

    // print array in  decending order
    cout << "This is the sorted array in an decending order:" << endl;
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


    //create a boolean that suggests true or false on acending order 
    bool order ;

    //define boolean by asking what order they want the numb ers printed 
    cout << "Sort in ascending (0) or descending (1) order?";
    cin >> order;

    //sort array using selection sort algorithm
        sortArr(array,arraySize,order);

    for (int i = 0; i < arraySize; ++i){
            cout << " " <<  array[i];
        }

    //for terminal clenliness
        cout<<""<<endl;


        
   

     

       



  return 0; 
  } 
