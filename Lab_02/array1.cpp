#include <iostream>

using namespace std;

  int main() 
  
  {
      // created a variable for size of the array
      int sizeArray = 0;

      cout <<" Enter the size of the array:" ;

      cin >> sizeArray ;
      


    //tests sizeArray
      //cout <<"size of array: " << sizeArray << endl;

    //checks to see if number is greater than 1 for it to be a correct size since we need atleast 2 numbers to see if it increases.

      if (sizeArray > 1) {

                //declares array 
                int array[sizeArray];


          cout << "Enter the numbers in the array, separated by a space, and press enter:" ;
        //for loop captures input and sorts it consecutive array slots
        for (int i = 0; i < sizeArray; ++i){
            cin >> array[i];
        }

        // checks if array has increasing consecutive values or not
            bool valueIncrease = true;
        for (int i = 0; i < sizeArray; i++){
            //to prevent the error that there is no index before 0 i gave its own case
                if(i == 0 ){
                    if(array[1] < array[0]){
                        valueIncrease = false;
                    }

                }
                else {
                    if(array[i] > array[i+1]){
                        valueIncrease = false;
                    }
                    


                }
        
            

        }
    //prints if array is increasing or not
        if (valueIncrease == true){
            cout << "This IS an increasing array! "<< endl;
        }
        else{
            cout << "This is NOT an increasing array!  "<< endl;

        }

        //prints consective array values
         for (int i = 0; i < sizeArray; ++i){
            cout<< array[i]<<  " ";
        }
        

      }

      
      else{
          cout << "ERROR: you entered an incorrect value for the array size!" << endl;
      }


  
  return 0; 
  } 
