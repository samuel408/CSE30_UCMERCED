#include <iostream>

using namespace std;

int main()

{
int numLines;
string line = "I will always use object oriented programming.";
int typoLine ;

cout <<"Enter the number of lines for the punishment: "  ;

cin >> numLines;


if (numLines < 0){
cout<< "You entered an incorrect value for the number of lines!"<< endl;
}
else {
    cout <<"Enter the line for which we want to make a typo:"  ;

cin >> typoLine;
if (typoLine < 0){
    cout<< "You entered an incorrect value for the line typo! "<< endl;
}
else {
for(int i = 0; i < numLines;i++){
        //added this if else statement to keep the terminal clean
        if(i == typoLine - 1){
                    cout << "I will always use object oriented programing."<< endl ;

        }
        else{
            cout << line<< endl;
        }
       
    }
}


}

    return 0;
}