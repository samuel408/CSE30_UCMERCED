#include <iostream>

using namespace std;

  int main() 
  {
      //command a word to reverse
  cout << "Enter the string to reverse:";
// create empty strings
  string nonReverse = "";
  string reversed = "";
//use string -> nonReverse to capture the string that needs to be reversed
  cin >> nonReverse;

// for loop go reverse string characters
  for(int i = nonReverse.length()-1; i>=0; i--){
      // use string -> reversed to capture reversed outcome 
        reversed = reversed + nonReverse[i];  
    }
    //print outcome
    cout << reversed << endl;  

  
  return 0; 
  } 
