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
 int sortArr(int array[],int size, bool order){
     //acending
     if(order == 0){

     
     
     // declare a variable to store the maximum value and the temporary maximum
     for(int i = 0; i < size - 1  ; i++){
        int min = array[i];
        int tempMin = i;
         for(int j = i +1; j < size; j++){
             if (array[j] < array[tempMin]){
                 min = array[j];
                 tempMin = j;

             }

         }
         if (tempMin != i){
             //swap
             int swap = array[tempMin];
             array[tempMin] = array[i];
             array[i] = swap;
         }

 

        
     }
      // print array in  acending order
    cout << "This is the sorted array in an ascending order:" << endl;
  
     }

     else{
         // dencending
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

    // print array in  decending order
    cout << "This is the sorted array in an ascending order:" << endl;
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
