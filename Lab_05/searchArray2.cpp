#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;
// using a loop
int binarySearch(string *array,int size, string search){
    int returnedValue = 0;
    for (int i = 0;  i < size; i++){
        if(array[i]==search){
            returnedValue = i;
        }
        else {
            returnedValue = -1;
        }

    }
    return returnedValue;

}
 int checkArraySort( string *array, int size ){

     int count=0, negCount=0;
     for( int i =1; i < size; i++){
            //checks decending order
         if (array[i] < array[i-1]){
             negCount++;
         }
            //checks acending order
         if (array[i] > array[i-1]){
             count++;
         }
         
         


     }
      if (negCount == size - 1 && count == size){
         exit(1);

     }

     else if (negCount == size - 1){
         return -1;

     }
     else if (count == size - 1){
         return 1;

     }
    

     



 }

int main()
{

	string line;
	string* array;
	int size = 0;


	ifstream fileInput;
	fileInput.open("words_in.txt");

	ofstream fileOutput;
	fileOutput.open("words_out.txt");

//counting # of lines
	while (!fileInput.eof()) 
	{
		getline(fileInput,line);
		size++;
	}
	cout << size;
    // creates array
	 array = new string[size];
    //close file
	fileInput.close();	 
    //restart from the  begining
	fileInput.open("words_in.txt"); //Restart from the beginning of the file

//reads input
	for(int i = 0; i < size + 1 ; i++) 
		{
      		getline(fileInput,line);
      		array[i]=line;
		}
// write on output

	for(int j = 0; j < size - 1; j++) 
		{
         	fileOutput << array[j] <<endl;
		}

//calls fucntion checkSort array to grab a int value
    int function = checkArraySort( array, size);

    // //depending on the int value 
    // 	if (function == -1){ //descending order
	// 	cout << "The array is sorted in descending order!" << endl;
	// 	}
	//     if (function == 0){ //not sorted
	// 	cout << "The array is not sorted!" << endl;
	// 	}
	//     if (function == 1){ //ascending
	// 	cout << "The array is sorted in ascending order!" << endl;
	// 	}
    
    // asking to insert a value they want to search the array for 
    string searchKey ="";
    cout<< "Enter a string to be searched within the array: ";
    cin >>searchKey;

    int search = binarySearch(array,size,searchKey);
    
        //if the key is not found
        if( search == -1 ){
            cout<< "The key was not found in the array!"<<endl;

        }

        else{//if the key is found
    
            cout<< "found key "<< searchKey<< " at index "<< search<<"!"<<endl;

        }


    //close input and out put
	fileInput.close();  
	fileOutput.close();  

	return 0;
}