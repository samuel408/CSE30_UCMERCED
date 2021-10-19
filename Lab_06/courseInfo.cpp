#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

struct Time{
	int hour;
	int minutes;
	int seconds;
};

struct Course{
	string name;
	int credits;
	bool majorReqs;
	double averageGrade;
	string days;
	Time startTime;
	Time endTime;
};

bool getTimeFromUser (Time& time, string input) {

	string hour;
	string seconds;
	string minutes;
	string find=":";
	int cnt = 0;

	hour=input.substr(0,input.find(":"));
	minutes=input.substr(input.find(":")+1);
	minutes=input.find((":")-input.find_last_of(":"));	
	seconds=input.substr( (input.find(":")+1)-(input.find(":")-input.find_last_of(":")));
	seconds=input.length()-input.find(":");
	time.hour = atoi(hour.c_str());
	time.minutes = atoi(minutes.c_str());
	time.seconds = atoi(seconds.c_str());

	for (int i=0; i<input.length(); i++) {
		if(input.substr(i,1)==find) {
			cnt = cnt + 1;
		}
	}
	
	if (cnt !=2){
		return false;
	}
	
	if (input.substr(input.length()-4,2)=="am" || input.substr(input.length()-4,2)=="pm") {
	
		return false;
	}
	if (input.substr(input.length()-4,2)=="AM" || input.substr(input.length()-4,2)=="PM") {
	
		return false;
	}
	if (time.hour > 23 || time.hour < 0) {
	
		return false;
	}
	if (time.minutes > 59 || time.minutes < 0) {
	
		return false;
	}
	if (time.seconds > 59 || time.seconds < 0) {
		
		return false;
	}
	return true;
}

int print24Hour(Time &nTime, Time &oTime) {
	if (nTime.hour>12){
		nTime.hour -=12;
		cout << "Lecture time: " << nTime.hour << ":" << setfill('0') << setw(2) << nTime.minutes << ":" << setfill('0') << setw(2) << nTime.seconds << " pm";
	}
	else if (nTime.hour == 0){
		nTime.hour=12;
		cout << "Lecture Time: " << nTime.hour << ":" << setfill('0') << setw(2) << nTime.minutes << ":" << setfill('0') << setw(2) << nTime.seconds << " am";
	}
	else{
		cout << "Lecture Time: " << nTime.hour << ":" << setfill('0') << setw(2) << nTime.minutes << ":" << setfill('0') << setw(2) << nTime.seconds << " am";
	}
	if (oTime.hour>12){
		oTime.hour-=12;
		cout << " - " << oTime.hour << ":" << setfill('0') << setw(2) << oTime.minutes << ":" << setfill('0') << setw(2) << oTime.seconds << " pm" << endl;
	}
	else if (oTime.hour == 0){
		oTime.hour=12;
		cout << " - " << oTime.hour << ":" << setfill('0') << setw(2) << oTime.minutes << ":" << setfill('0') << setw(2) << oTime.seconds << " am" << endl;
	}
	else{
		cout << " - " << oTime.hour << ":" << setfill('0') << setw(2) << oTime.minutes << ":" << setfill('0') << setw(2) << oTime.seconds << " am" << endl;
	}
}	

int main(){
	bool first,last ;
	string start;
	string end;
	string avg;
	string credit;
	string major;
	string line;

	Time startTime, endTime;
	
	ifstream lab_6("in.txt");

    getline(lab_6, line);
    int num_courses = atoi(line.c_str());
    
    Course my_courses[num_courses];
    for (int i=0; i<num_courses; i++){
        getline (lab_6, my_courses[i].name);
		getline (lab_6, credit);
		my_courses[i].credits=atoi(credit.c_str());
		
		getline (lab_6, major);
				
		if (major == "1"){
			my_courses[i].majorReqs = true;
		} else {
			my_courses[i].majorReqs = false;
		}

		getline (lab_6, avg);
		my_courses[i].averageGrade=atof(avg.c_str());
		
		getline (lab_6, my_courses[i].days);
		
		getline (lab_6, start);
		first=getTimeFromUser(my_courses[i].startTime, start);
		getline (lab_6, end);
		last=getTimeFromUser(my_courses[i].endTime, end); 
	}

	lab_6.close();

	cout << "----------------------------" << endl; 
	cout << "SCHEDULE OF STUDENT" << endl;
	cout << "----------------------------" << endl;

	for (int i=0; i<num_courses;i++){
		cout << "COURSE " << i+1 << ": " << my_courses[i].name << endl; 
		cout << "Note: ";
		
		if (my_courses[i].majorReqs == 1){
			cout <<  "This course is a major requirement!" << endl;
		} else {
			cout << "This course is not a major requirement..." << endl;
		}
		
		cout << "Number of Credits: " << my_courses[i].credits << endl;
		cout << "Days of Lectures: " << my_courses[i].days << endl;
		
		print24Hour(my_courses[i].startTime, my_courses[i].endTime);
		cout << "Stat: on average students get " << my_courses[i].averageGrade << "% in this course." << endl;
		cout << "-----------------------"<< endl;
		        
    }
}