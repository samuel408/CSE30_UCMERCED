#include <iostream>

using namespace std;

int main()

{
int numLines;
string line = "I will always use object oriented programming.";

cout <<"Enter the number of lines for the punishment: "  ;

cin >> numLines ;

if (numLines < 0){
cout<< "You entered an incorrect value for the number of lines!"<< endl;
}
else {
    for(int i = 0; i < numLines;i++){
        //added this if else statement to keep the terminal clean
        if(i == numLines - 1){
                    cout << line<< endl ;

        }
        else{
        cout << line ;

        }
    }


}

    return 0;
}