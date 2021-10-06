#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

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

    //close input and out put
	fileInput.close();  
	fileOutput.close();  

	return 0;
}