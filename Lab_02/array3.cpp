#include <iostream>

using namespace std;

  int main() 
  {
      //empty array size filler
      int sizeArray = 0;

      cout << "Enter the size of a 2D array:";
    //grab array size
      cin >> sizeArray;

      if(sizeArray > 10){
          cout << "ERROR: your array is too large! Enter 1 to 10. "<< endl;
      }
      else {
          //declares array 
                int array[sizeArray][sizeArray];
        
          //depending on the size of the array loop the the amount of rows
          for(int i = 0; i < sizeArray; i++){
                 cout << "Enter the values in the array for row " << i+1 <<", separated by a space, and press enter:" ;
        //for loop captures input and sorts it consecutive array slots
        for (int j = 0; j < sizeArray; j++){
            cin >> array[i][j];
        }
          }

           // declare negative number counter 
         int negativeCounter = 0;
         //search for negative numbers by looping through the 2D array
         for( int i = 0; i <sizeArray; i++){
             for (int j=0; j<sizeArray; j++){
                 if (array[i][j] < 0){
                     negativeCounter += 1;
                 }
             }
         }
             // print whether there are or arent negative numbers
            if(negativeCounter == 0){
                cout << "All values are non-negative!" << endl;
            }
            else{
                cout << "There are "<< negativeCounter << " negative values!"<< endl;
            }



      }
 

  
  return 0; 
  } 
