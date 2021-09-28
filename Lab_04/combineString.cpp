#include <iostream>

using namespace std;
//function combines the same string by a certain amount of times
int combineStr(string input, int reps){
    // empty string that holds all repeated string
    string finalString = "";

    //kills program if there are no repitions
    if ( reps < 1){
        exit(1);
       }
       
       for(int i = 0; i < reps; i ++){
         finalString += input;
       }

       //print the final string

       cout<< "The resulting string is: " << finalString << endl;


}


  int main() 
  
  
  {
      // declare variable that holds the string the will be inputed by the user
      string userInput = "";
      
      //declare a variable that will represent the number of repetitions commanded by the user
      int repitions = 0;
      

      //get String size from user

      cout << "Enter a String: " ;

      cin >> userInput;


      cout << "Enter a number: " ;

      cin >> repitions;

      combineStr(userInput,repitions);
      


       
     

    
        
   

     

       



  return 0; 
  } 
