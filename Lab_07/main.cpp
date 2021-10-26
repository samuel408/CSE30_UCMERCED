#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <string>
#include "Time.h"
using namespace std;

string line;

// gets time from User
int getTimeFromUser (string my_line, Time& c)
{
	string Hour = my_line.substr (0, 2);
	c.setHours(atoi(Hour.c_str()));
	string Minute = my_line.substr (3, 2);
	c.setMinutes(atoi(Minute.c_str()));
	string Second = my_line.substr (6, 2);
	c.setSeconds(atoi(Second.c_str ()));

	if (c.getHours() < 0 || c.getHours() > 23)
		return 1;
	if (c.getMinutes() < 0 || c.getMinutes() > 59)
		return 1;
	if (c.getSeconds() < 0 || c.getSeconds() > 59)
		return 1;

	return 0;
}

//prints times
void print24Hour (Time& start, Time& end)
{
	cout << "The lecture starts at ";
	cout << setfill('0') << setw(2) << start.getHours() << ":";
	cout << setfill('0') << setw(2) << start.getMinutes() << ":";
	cout << setfill('0') << setw(2) << start.getSeconds();
	cout << " and ends at ";
	cout << setfill('0') << setw(2) << end.getHours() << ":";
	cout << setfill('0') << setw(2) << end.getMinutes() << ":";
	cout << setfill('0') << setw(2) << end.getSeconds();
}

int main ()
{
	Time start(0, 0, 0);
	Time end(0, 0, 0);

        cout << "Enter the start time for the lecture (format is HH:MM:SS): ";
        getline (cin, line);
        if (getTimeFromUser(line, start) == 1) {
                cout << "The start time entered is invalid!" << endl;
                return 0;
        }

        cout << "Enter the end time for the lecture (format is HH:MM:SS): ";
        getline (cin, line);
        if (getTimeFromUser(line, end) == 1) {
                cout << "The end time entered is invalid!" << endl;
                return 0;
        }

        //prints outcome
        print24Hour(start, end); 
        cout << "\n";
        return 0;
}

 